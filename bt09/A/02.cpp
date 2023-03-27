#include <bits/stdc++.h>
using namespace std;

int main(){
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
// đoạn code trên bị lỗi do chưa cấp phát bộ nhớ động cho p2 mà đã dùng lệnh delete nên bị lỗi
