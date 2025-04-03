#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int x = 0;
    while (n--) 
    {
        string statement;
        cin >> statement;
        if (statement[1] == '+') ++x;
        else --x;
    }
    cout << x << endl;
    return 0;
}
