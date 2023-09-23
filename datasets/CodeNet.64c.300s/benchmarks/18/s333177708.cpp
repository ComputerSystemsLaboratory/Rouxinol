#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

ll days[31];

int main()
{
    int n;
    days[0] = 1;
    days[1] = 1;
    days[2] = 2;
    for(int i = 3; i < 31; i++) {
        days[i] = days[i - 1] + days[i - 2] + days[i - 3];
    }
    
    while(cin >> n && n) {
        ll year = days[n] / 3650;
        if((days[n] % 3650) > 0) {
            year++;
        }
        cout << year << endl;
    }
}