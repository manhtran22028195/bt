#include <bits/stdc++.h>
using namespace std;
void bug(char * b){
    {
        char* a = new char[10];
        b=a;
        //delete a;
    }
}
int main(){
    char*b;
    bug(b);
    cout<< b;
}
// khi code như trên khi này b sẽ trỏ đến 1 vùng bộ nhwos không thuộc chương trình và gây nên lỗi undefined behavior
