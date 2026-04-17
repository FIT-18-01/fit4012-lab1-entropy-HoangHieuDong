#include <iostream>
using namespace std;

// Euclid mở rộng
int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

// Hàm tìm nghịch đảo modulo
int mod_inverse(int a, int m) {
    int x, y;
    int gcd = extendedGCD(a, m, x, y);

    if (gcd != 1) {
        return -1; // không tồn tại
    }

    return (x % m + m) % m;
}

int main() {
    int a, m;
    cin >> a >> m;

    int res = mod_inverse(a, m);

    if (res == -1)
        cout << "Khong ton tai";
    else
        cout << res;

    return 0;
}
