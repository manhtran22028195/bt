#include <bits/stdc++.h>
using namespace std;

int num[1005];
void pre(int n, int k, int h) {
    if (n == 0) {
        for (int i = 0; i < h; i++)
            cout << num[i] << " ";
        cout << endl;
        return;
    }
    if (n < 0) {
        return;
    }
    for (int i = k; i >= 1; i--) {
        num[h] = i;
        k = i;
        pre(n - i, k, h + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    pre(n, n, 0);
}
