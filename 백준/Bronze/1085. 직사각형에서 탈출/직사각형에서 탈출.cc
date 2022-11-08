#include <iostream>
using namespace std;

int main() {
    
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int x, y, w, h, min;

    cin >> x >> y >> w >> h;

    min = x;
    if(x > y) min = y;
    if(min > w-x) min = w-x;
    if(min > h-y) min = h-y;

    cout << min;
    

    return 0;
}