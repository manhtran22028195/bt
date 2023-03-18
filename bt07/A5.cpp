#include <bits/stdc++.h>
using namespace std;

long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}


int main(){
    int n;cin>> n;
    long long a1=1,a0=0,a2=1;
    if(n==0)
        cout<< a0;
    else
    {
        for(int i=2;i<n;i++){
            a0=a1;
            a1=a2;
            a2=a1+a0;
        }
        cout<< a2;
    }
}
