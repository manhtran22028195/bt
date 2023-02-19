#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>> n;
    for(int i=n;i>0;i--)
    {
        for(int j=-n+1;j<n;j++)
            cout<<(abs(j)<abs(i)? "*":" ");
            cout<< endl;
    }
}
