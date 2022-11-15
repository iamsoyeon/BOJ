#include <iostream>
using namespace std;

int recur_cnt, dynamic_cnt;
int arr[41] = {0,};

int fib(int n) {
    if ((n == 1) || (n == 2)) {
        recur_cnt++;
        return 1;  
    }
    else return (fib(n - 1) + fib(n - 2));
}

void fibonacci(int n) {
    
    arr[1] = -1;
    arr[2] = -1;
    for (int i = 3; i <= n; i++) {
        dynamic_cnt++;
        arr[i] = arr[i - 1] + arr[i - 2]; 
    }
}

int main () {
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    fib(n);
	fibonacci(n);
    
    cout << recur_cnt << " " << dynamic_cnt << '\n';
        
    return 0;
}