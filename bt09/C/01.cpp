#include <bits/stdc++.h>
using namespace std;

int size(const char *a){
    auto it=a;
    while(*(it)!='\0') it++;
    return (it-a)/sizeof(char);
}
void reverse(const char *a){
    int n= size(a);
    char *b= new char[n];
    for(int i=0;i<=n/2;i++){
        b[i] = a[n-1-i];
        b[n-1-i] = a[i];
    }
    cout<< b<< endl;
}
void deletee(const char *a,char c){
    int n=size(a);
    char *b= new char[n];int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==c)
        {
            cnt++;
            continue;
        }
        b[i-cnt]=a[i];
    }
    cout<< b<< endl;;
}
void pad_right(const char *a, int n){
    int n1=size(a);
    char *b= new char[n1];
    strcpy(b,a);
    while(n1<n){
        b[n1]=' ';
        *(b+n1+1)='\0';
        n1++;
    }
    cout<< b;
}
void pad_left(const char *a, int n){
    int n1=size(a);
    char *b= new char[n1];
    strcpy(b,a);
    while(n1<n){
        b--;
        *(b+n1+1)='\0';
        n1++;
    }
    cout<< b;
}
void truncate(const char *a, int n){
    char *b= new char[size(a)];
    strcpy(b,a);
    if(size(b)>n)
        *(b+n)='\0';
    cout<< b;
}

void trim_left(const char *a){
    int n=size(a);
    for(int i=0;i<n;i++){
        if(a[i]!=' ')
        {
            a+=i;
            cout<< a;
            return;
        }
    }
}
void trim_right(const char *a){
    char *b= new char[size(a)];
    strcpy(b,a);
    int n=size(b);
    for(int i=n-1;i>=0;i--){
        if(b[i]!=' ')
        {
            *(b+i+1)='\0';
            cout<< a;
            return;
        }
    }
}
int main()  {
    char a[30] = "hello";
    reverse(a);
    deletee(a,'h');
    pad_right(a,15);
    pad_left(a,15);
    trim_right(a);
    trim_left(a);
    return 0;
}
