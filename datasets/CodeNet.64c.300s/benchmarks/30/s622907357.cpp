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
    int coin[] = {500, 100, 50, 10, 5, 1};

    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        n = 1000 - n;
        int ret = 0;
        for(int i=0; i<6; ++i){
            while(n >= coin[i]){
                n -= coin[i];
                ++ ret;
            }
        }
        cout << ret << endl;
    }
}