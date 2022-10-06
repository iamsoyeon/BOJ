#include <iostream>
using namespace std;

int main() 
{
    int N,New_N;
    int cnt = 0;

    cin >> N;

    New_N = N;

    while(true)
    {

        New_N = (New_N%10)*10 + ((New_N/10) + (New_N%10))%10;
        
         
        cnt+=1;
        
        if(New_N == N)
        {
            break;
        }
        
    }

    cout << cnt;

    return 0;
}