#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    int n;
    n=s.size();
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-i-1])
        {cout<< "NO";return 0;}
    cout<< "YES";
}
