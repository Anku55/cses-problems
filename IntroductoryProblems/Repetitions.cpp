#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s;
    cin>>s;
    int i=0;
    int n=s.length();
    int ans=0;
    while(i<n){
        char ch=s[i];
        int cnt=0;
        while(i<n&&s[i]==ch){
            i++;
            cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;

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