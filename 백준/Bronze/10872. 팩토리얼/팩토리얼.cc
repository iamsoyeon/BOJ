#include <iostream>
using namespace std;

int factorial(int N) {
    if(N == 1) return 1;
    else {
        return N * factorial(N-1);
    }
}

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int N;
    cin >> N;
    if(N == 0) {
        cout << 1;
        return 0;
    }
    
    cout << factorial(N);
    return 0;
}
