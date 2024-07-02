### Viết chương trình nhập vào ngày, tháng, năm. Kiểm tra ngày và tháng nhập có hợp lệ hay không. Tính thứ trong tuần của ngày đó.

Năm nhuận (leap year) tính theo lịch Gregorian (từ 1582): năm phải chia hết cho 4 và không chia kết cho 100, hoặc năm phải chia hết cho 400.
Thứ trong tuần tính theo công thức Zeller:

dayofweek = (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7
với: a = (14 - month) / 12
y = year - a
m = month + 12 * a - 2
dayofweek: 0 (Chúa nhật), 1 (thứ hai), 2 (thứ ba), ...