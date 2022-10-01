#include <iostream>
using namespace std;

int main()
{
	int c, n, count;
	cin >> c;
	int sum;
	int avg;
	float answer;
	
	for(int i = 0; i < c; i++)
	{
		avg = 0;
		count = 0;
		sum = 0;
		cin >> n;
        
       int score[n] = {0};
		
		for(int j = 0; j < n; j++)
		{
			cin >> score[j];	
			sum += score[j];
		}
		avg = sum / n;	
		
		for(int j = 0; j < n; j++)
		{
			if(score[j] > avg)
			count += 1;
		}
		answer = (float)count / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << answer << "%" << endl;
	}
}