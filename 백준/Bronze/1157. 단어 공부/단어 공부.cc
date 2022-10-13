#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> cnt(26, false);
    string input;

    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 97) {
            cnt[input[i] - 97]++;
        }
        else {
            cnt[input[i] - 65]++;
        }
    }

    int max_idx = 0;
    int max = 0;
    bool same = false;

    for (int i = 0; i < 26; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            max_idx = i;
            same = false;
        }
        else if (max == cnt[i]) {
            same = true;
        }
    }

    if (same == 1) {
        cout << '?';
    }
    else {
        cout << char(max_idx + 65);
    }

    return 0;
}