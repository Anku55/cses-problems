#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            ans=ans+(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
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