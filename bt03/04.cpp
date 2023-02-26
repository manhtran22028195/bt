#include <iostream>
using namespace std;
void kiemtra(char arr[][100], int i, int j)
{
	if (arr[i][j] == '*')
		cout << "* ";
	else
	{
		int sum = 0;
		if (arr[i - 1][j] == '*')
			sum++;
		if (arr[i ][j-1] == '*')
			sum++;
		if (arr[i][j + 1] == '*')
			sum++;
		if (arr[i+1][j] == '*')
			sum++;
		if (arr[i + 1][j+1] == '*')
			sum++;
		if (arr[i -1][j -1] == '*')
			sum++;
		if (arr[i - 1][j+1] == '*')
			sum++;
		if (arr[i + 1][j-1] == '*')
			sum++;
		cout << sum<<" ";
	}
}
int main()
{
	int m, n;
	cin >> n >> m;
	char arr[100][100];
	for (int i = 0; i <= n+1; i++)
	{
		for (int j = 0; j <= m+1; j++)
			arr[i][j]='.';
	}
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m + 1; j++)
			cin >> arr[i][j];

	}



	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m + 1; j++)
		 kiemtra(arr, i, j);
		cout << "\n";

	}
}
