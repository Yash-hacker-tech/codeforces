#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i = 1;
    vector<int> v;
    int count = 0;
    cin >> n;
    while(n>0)
    {
        int last = n%10;
        if(last == 0)
        {
            n /= 10;
            i*=10;
            continue;
        }
        else
        {
            count++;
            v.push_back(last*i);
            n/=10;
            i*=10;
        }
    }
    cout<<count<<endl;
    for(size_t i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
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