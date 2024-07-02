
## In ra hình tam giác sử dụng dấu '*' 

### Sử dụng:
#### Thư viện <b> iostream </b>
<b> iostream </b>là viết tắt của từ Input/Output Stream là một thư viện chuẩn của C++ cho phép bạn nhận Input từ màn hình Console và xuất Output ngược lại ra màn hình Console qua các câu lệnh nhập xuất như cin, cout, ..v.v.

#### Cú pháp <b> namespace std </b>
Từ khóa <b>using namespace</b> được dùng để khai báo sử dụng một namespace nào đó. Một namespace trong C++ có nghĩa là một không gian riêng nào đó, và các đoạn code trong mỗi namespace là tách biệt lẫn nhau.

<b>std</b> là một namespace chứa các thư viện chuẩn của C++, trong namespace này có rất nhiều hàm hữu ích giúp bạn viết mã nguồn dễ dàng hơn rất nhiều so với ngôn ngữ C.

<b>#include</b> có thể hiểu là một preprocessor giúp cài đặt/thêm mã nguồn của thư viện iostream vào bên trong file mã nguồn của bạn, từ đó bạn mới có thể sử dụng được các hàm cin và cout của thư viện iostream.

Nếu không khai báo dòng đó thì bạn sẽ sử dụng hàm cout dạng như sau:
```sh
std::cout("string");
```
Nhưng khi bạn khai báo dòng đó rồi thì chỉ cần viết đơn giản như sau:
```sh
cout("string");
```
C++ sẽ tự hiểu là bạn đang có sử dụng namespace std nên tự áp đặt lên hàm cout.

#### Ký hiệu \n </b>
Ký hiệu này khi được đặt bất kỳ vị trí nào trong chuỗi ký tự (string) sẽ được chương trình hiểu là xuống dòng

#### Ký hiệu endl</b>
Ký hiệu này có tác dụng xuống dòn nhưng không thể đặt trong string

##### Bài tập tự viết:
In ra màn hình hình tam giác ngược (Đáy bên trên, đỉnh bên dưới)