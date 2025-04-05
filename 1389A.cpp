#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (2 * a <= b) cout << a << " " << 2 * a << "\n";
    else cout << -1 << " " << -1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
