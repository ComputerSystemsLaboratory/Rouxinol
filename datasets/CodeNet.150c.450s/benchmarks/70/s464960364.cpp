#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for(;;){
        int m, d;
        cin >> m >> d;
        if(m == 0)
            return 0;

        int num = 0;
        for(int i=0; i<m-1; ++i)
            num += days[i];
        num += d;

        cout << week[(num+2)%7] << endl;
    }
}