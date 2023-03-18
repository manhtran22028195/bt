#include <bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
    point(int _x,int _y){
        x=_x,y=_y;
    }
    point(){}
};

void print(point p){
    //cout<< '('<<p.x<< ','<<p.y<<')';
    cout<< &p;
    // lỗi do biến p được hiểu là biến địa phương của hàm nên kho thoát ra khỏi hàm sẽ bị xóa đi dẫn đến không cout được và bị lỗi
}
point* printre(point &p){
    return &p;

}

int main(){
    point h(1,1);
    if(&h==printre(h))
        cout<< 1;
    // chương trình có cout<< 1 nên printre return chính địa chỉ của h
    return 0;
}
