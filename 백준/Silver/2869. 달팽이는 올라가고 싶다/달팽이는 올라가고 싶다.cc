#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int A, B, V;
    
    cin >> A >> B >> V;
    
    int d = (V-A)/(A-B);
    
    if((V-A)%(A-B) != 0) d++;
    
    if(A>=V) d = 0;
    
    cout << d + 1;

}