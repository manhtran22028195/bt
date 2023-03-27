#include <bits/stdc++.h>
using namespace std;
char *h=new char[100];
void strcat(const char* a,char const* b){
    strcat(h,a);
    strcat(h,b);
}

int main(){
    string s= "ajsnalndkalksndd";
    string s1= "akjsndas;aksdmasdkjiquasddasdhjasbd";
    h[0]='\0';
    strcat(s1.c_str(),s.c_str());
    cout<< h;
}
//Trả về mảng động. Viết một hàm concat(const char*, const* char) nhận tham số là hai hằng xâu kí tự, trả về một xâu kí tự là kết quả của việc nối hai xâu đó. Chẳng hạn nếu tham số lần lượt có nội dung là “Hello“ và “World” thì xâu trả về có nội dung “HelloWorld”.
//Thảo luận: C++ không cho phép hàm có giá trị trả về là một mảng kiểu thông thường. Đối với các hàm xử lý ra kết quả là một mảng, thay vì trả về mảng, hàm chỉ có thể trả về địa chỉ của mảng kết quả. Vấn đề là mảng kết quả đó đặt ở đâu? Ta có một vài lựa chọn:
//1,mảng kết quả được khai báo sẵn là biến toàn cục, các hàm tự do truy cập.
//2,mảng kết quả được nơi gọi hàm khai báo sẵn và truyền địa chỉ vào hàm concat.
//3,Mảng kết quả được khai báo là biến địa phương của concat và concat sẽ trả về địa chỉ của mảng đó cho nơi gọi hàm
//4,mảng kết quả được cấp phát động từ bên trong concat(), và concat() sẽ trả về địa chỉ của mảng đó cho nơi gọi hàm
//đáp án của em là 1 và 4;
//do là khi khai báo ta chưa biết kích thước nên sẽ không chọn được phương án 2
//phương án 3 nếu dùng biến địa phương khi rời khỏi hàm biến này sẽ bị hủy nên không dùng được
