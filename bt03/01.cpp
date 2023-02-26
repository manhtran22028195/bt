#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>> n;
    map <int,int> mp;
    while(n--){
    cin>> m;
    mp[m]++;
    if(mp[m]==2)
    {
    cout<< "YES";
    return 0;
    }
    }
    cout << "NO";
}
