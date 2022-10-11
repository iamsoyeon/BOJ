#include <iostream>
#include <vector>
using namespace std;
 
int func(int number) {
	int sum = number;
 
	while (number != 0) {
		sum = sum + (number % 10); // 첫 째 자리수ˇ
		number = number / 10;	   // 10을 나누어 첫 째 자리를 없앤다.
	}
	return sum;
}
 
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> selfOrNot(10000, true);
    
	for (int i = 1; i < 10001; i++) {
		int n = func(i);
		if (n < 10001) { // 10000 이 넘는 수는 필요가 없다.
			selfOrNot[n] = false;
		}
	}
	for (int i = 1; i < 10001; i++) {
		if (selfOrNot[i]) {
			cout << i << "\n";
		}
	}
 
	return 0;
}
