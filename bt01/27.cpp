#include <bits/stdc++.h>
using namespace std;

int m(int n){
    cin>> n;
    if(n==-1)
        return 0;
    if(n%5==0&&n>=0)
        cout<< n/5<< endl;
    else cout<< -1<< endl;
    return m(n);
}

int main (){
    int n;
    m(n);
    return 0;
}
