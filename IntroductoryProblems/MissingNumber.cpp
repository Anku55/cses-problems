#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;

    int x = 0;

    for(int i = 1; i <= n; i++)
    {
        x ^= i;
    }

    for(int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        x ^= a;
    }

    cout << x << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}