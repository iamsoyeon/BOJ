#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int X;
    cin >> X;

    int sum = 0;
    for (int i = 1;; i++) {
        sum += i;
        if (X <= sum) {
            int offset = sum - X;

            if (i % 2 == 0) {
                cout << i - offset << '/' << offset + 1;
                return 0;
            }
            else {
                cout << offset + 1 << '/' << i - offset;
                return 0;
            }
        }
    }
}