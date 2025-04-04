#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin>> m>> n;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (i % 2 == 0) 
            {
                cout << '#';
            } 
            else 
            {
                if ((i / 2) % 2 == 0) 
                {
                    cout << (j == n - 1 ? '#' : '.');
                } 
                else 
                {
                    cout << (j == 0 ? '#' : '.');
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
