#include <bits/stdc++.h>
using namespace std;
bool nhuantest(int n){
    if ((n%4==0 && n%100!=0)|| n%400==0) return true;
    return false;
}
int main(){
    int nhuan[12]={0,31,60.91,121,152,182,213,244,274,305,335};
    int thuong[12]={0,31,59.90,120,151,181,212,243,273,304,334};
    int dd,mm,yy;
    cin >> dd >> mm >> yy;
    int day=0;
    int a=yy/4-yy/100+yy/400;
    if (nhuantest(yy)==true){
        day = 366*(a-1) +365*(yy-a-1) +nhuan[mm-1]+dd ;
        }
    else{
        day = 366*a +365*(yy-a-1) +thuong[mm-1]+dd;
    }
    switch (day%7){
        case 1:
            {
                cout << "Monday";
                break;
            }
        case 2:
            {
                cout << "Tuesday";
                break;
            }
        case 3:
            {
                cout << "Wednesday";
                break;
            }
        case 4:
            {
                cout << "Thursday";
                break;
            }
        case 5:
            {
                cout << "Friday";
                break;
            }
        case 6:
            {
                cout << "Saturday";
                break;
            }
        case 0:
            {
                cout << "Sunday";
                break;
            }
    }
    return 0;
}
