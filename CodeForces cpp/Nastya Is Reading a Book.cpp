#include <bits/stdc++.h>
using namespace std;

int main()
{

    int l, n;
    int c = 0;
    cin >> n;
    int a[10001];
    for (int i = 0; i < n; i++)
    {
        cin >> l >> a[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (k <= a[i]) c++;
    }
    cout << c;
    return 0;
}
