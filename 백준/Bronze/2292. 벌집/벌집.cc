#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio();
    cin.tie(nullptr);

    int N, num;
    cin >> N;

    int sum = 1;
    
    for(int i = 1;; i++) {
        if( N<= sum){
            num = i;
            break;
        }
        sum += 6*i;
    }

    cout << num;

    return 0;
}