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
    cout<< '('<<p.x<< ','<<p.y<<')';
}

int main(){
    point h(1,1);
    print(h);
    return 0;
}
