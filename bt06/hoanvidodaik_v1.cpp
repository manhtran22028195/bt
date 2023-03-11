#include <iostream>
#include <algorithm>
using namespace std;

void re(int n,int m,string s){
    if(n==0)
    {
        cout<< s<< endl;
        return;
    }
    for(int i=0;i<m;i++){
        re(n-1,m,s+char(i+'a'));
    }
}
int main() {
    int n,m;
    cin>> n>> m;
    re(n,m,"");
}
