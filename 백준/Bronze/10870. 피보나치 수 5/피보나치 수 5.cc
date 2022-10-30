#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	
	ios::sync_with_stdio();
	cin.tie(nullptr);

	int num;
	cin >> num;

	cout << fibonacci(num);
    return 0;
}