#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    while(true){
        string S;
        cin >> S;
        if( S == "0")
            break;
        int sum = 0;
        for(auto& c : S){
            sum += c - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
