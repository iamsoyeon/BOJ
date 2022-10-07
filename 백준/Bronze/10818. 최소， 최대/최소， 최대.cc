#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> seq;
int N;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    seq = vector<int>(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> seq[i];
    }
    
    cout << *min_element(seq.begin(), seq.end()) << ' ';
    cout << *max_element(seq.begin(), seq.end());
    return 0;
}