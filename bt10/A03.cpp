#include <bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
    point(int _x,int _y){
        x=_x,y=_y;
    }
    point(){}
};

const point mid_point(const point a,const point b){
    return{(a.x+b.x)/2,(a.y+b.y)/2};
}

int main(){
    const point p = mid_point({2,2},{4,4});
    cout << p.x<< " "<< p.y;
    return 0;
}
