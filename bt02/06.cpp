#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[n][n];
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<((count+j<n+1)?(count+j):(count+j-n))<< " ";
        count++;
        cout<< endl;
    }
}
