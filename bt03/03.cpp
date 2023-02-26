#include <iostream>
#include <string.h>
#include<algorithm>
#include<iomanip>
using namespace std;
int daonguoc(int n)
{
	int kq = 0;
	while (n > 0)
	{
		kq = kq * 10 + n % 10;
		n = n / 10;
	}
	return kq;
}
bool kiemtra(int i)
{
	if (i == daonguoc(i))
		return 1;
	else
		return 0;
}
int main()
{


	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int m;
		int n;
		cin >> m >> n;
			int sum = 0;
		for (int index=m; index<= n; index++)
		{

			if (kiemtra(index) == 1)
				sum++;


		}
		cout << sum<<endl;
	}
}
