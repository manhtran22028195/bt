#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    double m=INT_MIN,mn=INT_MAX,mx,sum;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>> m;
        mn=min(mn,m);
        mx=max(mx,m);
        sum+=m/n;
    }
    cout<< "Mean: "<< sum<< endl<< "Max: "<< mx<< endl<< "Min: "<< mn;
}

