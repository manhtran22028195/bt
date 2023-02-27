#include <bits/stdc++.h>
using namespace std;

int save(int i,int j,vector <vector<char>> s,int w,int h,vector<vector<bool>> &visited)
{
    if(i==h)
        return 1;
    if(visited[i][j])
        return 0;
    else
        visited[i][j]=1;
    if(s[max(i-1,0)][j]=='R')
        return 0;
    //cout<< i<< " "<< j<< endl;
    if(s[i][j]=='R')
        return 0;
    return save(i+1,min(j+1,w-1),s,w,h,visited)+save(i+1,j,s,w,h,visited)+save(i+1,max(j-1,0),s,w,h,visited);
}

int main(){
    int w,h;
    cin>>w>>h;
    vector <vector<char>> s(h);
    char e;
    vector <vector<bool>> visited(h);
    int n,m;
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
        {
            cin>> e;
            if(e=='Y'){
                n=i,m=j;
            }
            s[i].push_back(e);
            visited[i].push_back(0);
        }
    if(save(n,m,s,w,h,visited))
        cout<< "YES";
    else cout<< "NO";
}
