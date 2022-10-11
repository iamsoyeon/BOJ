#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,sum;
    char a;
    sum = 0;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a;
        sum += a - '0';
    }
    
    cout << sum;
    
    return 0;
}