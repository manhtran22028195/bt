#include <bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
    point(int _x,int _y){
        x=_x,y=_y;
    }
    point(){}
};

int main(){
    point point(1,1);
    cout<< &point.x<<endl<< &point.y<< endl;
    // nhận xét chúng giống như cấc phần tử liên tiếp nhau trong 1 mảng
}
