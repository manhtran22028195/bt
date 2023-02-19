#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(NULL);
    int n;
    int m=INT_MIN;
    do{
    cin>> n;
    if(n!=m)
        cout<< n<< " ";
    m=n;
       }while(n!=-1);
}
