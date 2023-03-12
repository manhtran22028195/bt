#include <bits/stdc++.h>
using namespace std;

vector <int> num;
void pre(int n,int k){
    if(n==0){
        for(int i=0;i<num.size();i++)
            cout<< num[i]<<" ";
        cout<< endl;
        return;
    }
    if(n<0){
        return;
    }
    for(int i=k;i>=1;i--){
        num.push_back(i);
        k=i;
        pre(n-i,k);
        num.pop_back();
    }
}

int main()
{
    int n;
    cin>> n;
    pre(n,n);
}
