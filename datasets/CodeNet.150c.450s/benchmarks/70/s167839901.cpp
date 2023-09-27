#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    int m, d;
    int months[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    while(cin >> m >> d, m + d) {
        REP(i,m-1) {
            d += months[i];
        }
        d -= 1;
        switch (d % 7) {
            case 0:
                cout << "Thursday" << endl;
                break;
                
            case 1:
                cout << "Friday" << endl;
                break;
                
            case 2:
                cout << "Saturday" << endl;
                break;
                
            case 3:
                cout << "Sunday" << endl;
                break;
                
            case 4:
                cout << "Monday" << endl;
                break;
                
            case 5:
                cout << "Tuesday" << endl;
                break;
                
            case 6:
                cout << "Wednesday" << endl;
                break;
                
            default:
                break;
        }
    }
    return 0;
}