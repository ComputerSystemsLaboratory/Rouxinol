#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(void)
{
    string day[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int eotm[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int m, d;
    
    while(true)
    {
        cin >> m >> d;
        if(m == 0) break;
        for (int i=0; i<m; i++) {
            d += eotm[i];
        }
        cout << day[d%7] << endl;
    }
    
    return 0;
}