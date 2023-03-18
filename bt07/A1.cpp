#include <bits/stdc++.h>
using namespace std;

int *a(int h){
    return &h;
}

int main(){
    // lỗi truy cập vào con trỏ chưa được khỏi tạo, truy cập vào vùng dữ liệu không được cho phép
    int *p;
    cout<< p;
    cout<< *p;
    // lỗi truy cập con trỏ null (tương đương truy cập vùng địc chit 0 trong bộ nhớ (vùng địa chit 0 nào không được truy cập))
    *p=NULL;
    cout<< p;
    // lỗi dangling reference: truy cập đến vùng bộ nhớ không hợp lệ
    cout<< a(10);
    // cout<< a[10] ra 0 do trình biên dịch tự gắn
}
