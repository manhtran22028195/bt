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
// chúng ta dùng delete cho 1 con trỏ không được cấp phát bộ nhớ động nên gây ra lỗi trên cụ thể ở đây là c
