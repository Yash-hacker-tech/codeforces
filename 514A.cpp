#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    if (n[0] == '9') cout << n[0];
    else cout << min(n[0], char('9' - n[0] + '0')); 
    for (size_t i = 1; i < n.length(); i++) 
    {
        cout << min(n[i], char('9' - n[i] + '0'));
    }
    cout << endl;
    return 0;
}