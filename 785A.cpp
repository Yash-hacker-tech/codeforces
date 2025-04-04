#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int count = 0;
    while (t--) 
    {
        string str;
        cin >> str;
        if(str[0] == 'T') count +=4;
        else if(str[0] == 'I') count +=20;
        else if(str[0] == 'C') count += 6;
        else if(str[0] == 'O') count += 8;
        else count += 12;
    }
    cout << count << endl;
    return 0;
}
