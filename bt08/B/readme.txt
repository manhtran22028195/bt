1.
void f(int xval)
{
int x;
x = xval;
// in địa chỉ của x tại đây
}
void g(int yval)
{
int y;
// in địa chỉ của y tại đây
}
int main()
{
f(7);
g(11);
return 0;
}
vì hàm f() và g được gọi ở đầu hàm main nên khả năng cao là x,y sẽ ở stack đầu của hàm main, khi gọi x ,x sẽ ở stack đầu của hàm main sau đó khi ra khỏi f() x sẽ bị hủy do là biến địa phương và khi gọi y thì y sẽ ở stack đầu tiên của main do x đã bị hủy nên x và y sẽ có cùng địa chỉ
2.
int main( )
{
char a[4] = "abc";
for (char *cp = a; (*cp) != '\0'; cp++) {
cout << (void*) cp << " : " << (*cp) << endl;
}
return 0;
}
chương trình sửa để tính được kích thước của kiểu int
int main( )
{
char a[4] = {1,2,3,4};
for (int *cp = a; (*cp) != '\0'; cp++) {
cout << (void*) cp << " : " << (*cp) << endl;
}
return 0;
}
0x61fe10 : 1
0x61fe14 : 2
0x61fe18 : 3
0x61fe1c : 4
ta thấy địa chỉ cách nhau 4 bit nên kích thước của kiểu int là 4 bit
chương trình tính kích thước cảu kiểu double
#include <bits/stdc++.h>
using namespace std;
int main()
{
double a[4] = {1,2,3,4};
for (double *cp = a; (cp) != a+4; cp++) {
std::cout << (void*) cp << " : " << (*cp) << endl;
}
return 0;
}
0x61fe00 : 1
0x61fe08 : 2
0x61fe10 : 3
0x61fe18 : 4
ta thấy các phần tử cách nhau 8 bit vạy kích thước của kiểu double là 8 bit
khi sủa lại ta sẽ được
#include <bits/stdc++.h>
using namespace std;
int main()
{
double a[4] = {1,2,3,4};
for (double *cp = a; (cp) != a+3; cp+=2) {
std::cout << (void*) cp << " : " << (*cp) << endl;
}
return 0;
}
vì điều kiện của vòng for không bị vi phạm nên con trỏ cp sẽ trỏ ra ngoài phần bộ nhớ cảu a và cout các số bên ngoài
3.
void swap_pointers(char* &x, char* &y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
khi chúng ta truyển như trên là truyền tham trị khi thay đổi x và y s1 và s2 cũng sẽ không vì thế mà bị thay đổi theo
ta cần đổi từ việc truyền tham trị bằng truyền tham chiếu thì mới tạo thay đổi được ở s1 và s2 ở main
4.
#include <bits/stdc++.h>
using namespace std;
int main()  {
    //code ban đầu sai do không cấp phát bộ nhớ cho con trỏ và dẫn tới việc gán cho nó 1 vùng bộ nhớ không xác định nên dẫn đến bị sai
    //để sửa ta cần cấp phát bộ nhớ cho s
   char **s=new char*[1];
   char foo[] = "Hello World";
   *s = foo;
   cout<< *s<< endl;
   s[0] = foo;
   cout<< s[0]<< endl;
   return(0);
}

