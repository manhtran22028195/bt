#include <bits/stdc++.h>
char s[1005][1005];
int a[1005][1005];
using namespace std;
void test(int n,int m,int h,int w){
    if(a[n][m]||s[min(n,h-1)][m]=='R'||s[max(n-1,0)][m]=='R')
    return;
    if (n==h)
    {
        std::cout<< "YES";
        exit(0);
    }
    a[n][m]=1;
    test(n+1,m,h,w);
    test(n+1,max(m-1,0),h,w);
    test(n+1,min(m+1,w-1),h,w);
}
int main(){
    int h,w;
    std::cin>> h>> w;
    int n,m;
    for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
        {
            std::cin>> s[i][j];
            if(s[i][j]=='Y')
                n=i,m=j;
        }
    test(n,m,h,w);
    cout<< "NO";
}
