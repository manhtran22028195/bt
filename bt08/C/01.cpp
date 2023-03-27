#include <bits/stdc++.h>
using namespace std;

int size(char a[]){
    auto it=a;
    while(*(it)!='\0') it++;
    return (it-a)/sizeof(char);
}
void reverse(char a[]){
    int n= size(a);
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
    cout<< a<< endl;
}
void deletee(char a[],char c){
    int n=size(a);
    for(int i=0;i<n;i++){
        if(a[i]==c){
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            *(a+n)='\0';
            i--;
        }
    }
    cout<< a;
}
void pad_right(char a[], int n){
    int n1=size(a);
    while(n1<n){
        a[n1]=' ';
        *(a+n1+1)='\0';
        n1++;
    }
    cout<< a;
}
void pad_left(char a[], int n){
    int n1=size(a);
    while(n1<n){
        a--;
        a[0]=' ';
        n1++;
    }
    cout<< a;
}
void truncate(char a[], int n){
    if(size(a)>n)
        *(a+n)='\0';
}
bool is_palindrome(char a[]){
    int n=size(a);
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i])
            return 0;
    }
    return 1;
}
void trim_left(char a[]){
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
void trim_right(char a[]){
    int n=size(a);
    for(int i=n-1;i>=0;i--){
        if(a[i]!=' ')
        {
            *(a+i+1)='\0';
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
    is_palindrome(a);
    trim_right(a);
    trim_left(a);
    return 0;
}
