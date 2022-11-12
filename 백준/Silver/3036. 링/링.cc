#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
    
    if( a % b == 0) {
        return b;
    }

    return GCD(b, a % b);
}

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    vector<int> ring(100,false);

    cin >> ring[0];
    int first = ring[0];
    for(int i = 1; i < N; i++) {
        cin >> ring[i];
        int gcd = GCD(first, ring[i]);
        cout << first/gcd << '/' << ring[i]/gcd << '\n';
    }

    return 0;
}