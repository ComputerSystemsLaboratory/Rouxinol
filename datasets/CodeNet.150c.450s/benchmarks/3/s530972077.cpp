#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    string S;
    cin >> S;
    
    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        string order;
        cin >> order;

        if( order == "print"){
            int a, b;
            cin >> a >> b;
            string sub = S.substr(a,b-a+1);
            cout << sub << endl;
        }else if( order == "reverse"){
            int a, b;
            cin >> a >> b;
            reverse(S.begin()+a, S.begin()+b+1);
        }if( order == "replace"){
            int a, b;
            string r;
            cin >> a >> b >> r;
            S.replace(a, b-a+1, r);
        }

    }
}
