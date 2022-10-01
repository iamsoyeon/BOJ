#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n[10];
	int arr[10]; 
	int unique = 0;
	for(int i = 0; i < 10; i++)
	{
		cin >> n[i];
		arr[i] = n[i]%42;
	}
	
	sort(arr, arr+10);
	
	for(int i =0; i<9; i++)
	{
		if(arr[i] == arr[i+1])
		unique += 1;

	}
	cout << 10-unique;
}