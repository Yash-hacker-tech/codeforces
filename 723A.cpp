#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int coordinates[] = {x1, x2, x3};
    sort(coordinates, coordinates + 3);
    int median = coordinates[1];
    int totalDistance = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);
    
    cout << totalDistance << endl;
    
    return 0;
}