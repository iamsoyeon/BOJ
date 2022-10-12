#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int rpt;
        string s;
        cin >> rpt >> s;

        for(int k=0; k<s.length(); k++){
            for(int j=0; j<rpt; j++){
                cout << s[k];
            }
        }
        cout << "\n";
    }

    return 0;

}