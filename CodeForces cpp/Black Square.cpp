#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    cin >> s;
    int ans = 0;
    for (auto ch : s)
    {
        ans += a[ch - '1'];
    }
    cout << ans << endl;

    return 0;
}
