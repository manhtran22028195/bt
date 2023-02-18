#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=-12;i<12;i++)
    {
        if(i==-12)
            cout<< -i<<" midnight"<< endl;
        else if(i<0)
            cout<< -i<< " am"<< endl;
        else if(i==0)
            cout<< 12<< " noon"<< endl;
        else cout<< i<< " pm"<< endl;
    }
}
