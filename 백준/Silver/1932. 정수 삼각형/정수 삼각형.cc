#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector< vector<int> > dp(500, vector<int> (500, 0));

    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int k = 0; k<= i; k++) {
            cin >> dp[i][k];
        }
    }

    int result = dp[0][0];

    for(int i = 1; i <n; i++) {
        for(int k = 0; k <= i; k++) {
            if (k == 0) {
                dp[i][k] = dp[i-1][0] + dp[i][k];
            }
            else  if(k == i) {
                dp[i][k] = dp[i-1][k-1] + dp[i][k];
            }
            else {
                dp[i][k] = max(dp[i-1][k-1], dp[i-1][k]) + dp[i][k];
            }

            result = max(result, dp[i][k]);
        }
    }

    cout << result;
    return 0;
}