#include <iostream>
#include <map>
#include <cmath>
using namespace std;

// Tính entropy
double calculateEntropy(string s) {
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    double entropy = 0.0;
    int n = s.length();

    for (auto it : freq) {
        double p = (double)it.second / n;
        entropy -= p * log2(p);
    }

    return entropy;
}

// Tính redundancy
double calculateRedundancy(string s) {
    double H = calculateEntropy(s);
    int unique_chars = 0;

    map<char, int> freq;
    for (char c : s) freq[c]++;
    unique_chars = freq.size();

    double Hmax = log2(unique_chars);

    if (Hmax == 0) return 0;
    return 1 - (H / Hmax);
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    double H = calculateEntropy(s);
    double R = calculateRedundancy(s);

    cout << "Entropy: " << H << endl;
    cout << "Redundancy: " << R << endl;

    return 0;
}
