# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Bài lab nhằm giúp sinh viên hiểu và áp dụng các khái niệm entropy để đo lượng thông tin của dữ liệu, tính độ dư thừa thông tin (redundancy) và sử dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu và cách tính xác suất xuất hiện của từng ký tự.
- Cài đặt hàm tính entropy dựa trên công thức toán học.
- Xây dựng hàm tính redundancy dựa trên entropy và entropy cực đại.
- Cài đặt thuật toán Euclid mở rộng để tìm nghịch đảo modulo.
- Thực hiện kiểm thử với nhiều test case khác nhau để đảm bảo tính đúng đắn của chương trình.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0    | 1 | Chuỗi lặp hoàn toàn → không có thông tin  |
| abcd | 2 | 0  | Tất cả ký tự khác nhau → thông tin tối đa |
| hello world | 2.85   | 0.15 | Có lặp ký tự → entropy trung bình |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5   |
| 10 | 17 | 12 | 12    |
| 6 | 9 | Không tồn tại | Không tồn tại  |

## 4. Kết luận
Qua bài lab, em hiểu rõ hơn về cách tính entropy để đo lượng thông tin của dữ liệu. Khi entropy cao, dữ liệu càng ngẫu nhiên và ít dư thừa. Ngược lại, redundancy giúp đánh giá mức độ lặp lại của dữ liệu.

Ngoài ra, em đã áp dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo và hiểu rõ điều kiện tồn tại của nó (khi gcd(a, m) = 1).

Khó khăn lớn nhất là việc hiểu công thức entropy và xử lý các trường hợp không tồn tại nghịch đảo. Sau khi thực hành với nhiều test case, em đã nắm chắc hơn kiến thức.
