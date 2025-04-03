#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, i = 0;
    while(cin>>n)
    {
        if(n==0) i++;
        if(n==1) break;
    }
    int m = i/5;
    int n1 = i%5;
    cout<< abs(m - 2) + abs(n1 - 2);
    return 0;
}