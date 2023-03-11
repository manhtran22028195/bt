#include <iostream>
#include <algorithm>
using namespace std;
char s[1005][1005];
void hadamard(char s[][1005],int n,int h,int w,int i){
    if(n==1){
        if(i==1){
            s[w][h]='.';
        }
        else
            s[w][h]='o';
        return;
    }
    hadamard(s,n/2,h+n/2,w,i);
    hadamard(s,n/2,h+n/2,w+n/2,(i+1)%2);
    hadamard(s,n/2,h,w+n/2,i);
    hadamard(s,n/2,h,w,i);
}
int main() {
    int n;
    cin>> n;
    hadamard(s,2*n,0,0,0);
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<2*n;j++)
            cout<< s[i][j];
        cout<< endl;
    }
}
