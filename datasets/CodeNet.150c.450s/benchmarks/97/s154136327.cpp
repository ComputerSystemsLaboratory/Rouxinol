#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
using namespace std;

void solution(vector<int> num, vector<int> direction)
{
    map<int, int> x;
    map<int, int> y;
    x.insert(make_pair(0, 0));
    y.insert(make_pair(0, 0));

    int minX = 0;
    int maxX = 0;
    int minY = 0;
    int maxY = 0;
    for(unsigned i=0; i<num.size(); ++i){
        if(direction[i] == 0 || direction[i] == 2){
            y[i+1] = y[num[i]];
            if(direction[i] == 0){
                x[i+1] = x[num[i]] - 1;
                minX = min(minX, x[i+1]);
            }else{
                x[i+1] = x[num[i]] + 1;
                maxX = max(maxX, x[i+1]);
            }
        }else{
            x[i+1] = x[num[i]];
            if(direction[i] == 1){
                y[i+1] = y[num[i]] - 1;
                minY = min(minY, y[i+1]);
            }else{
                y[i+1] = y[num[i]] + 1;
                maxY = max(maxY, y[i+1]);
            }
        }
    }

    cout << (maxX-minX+1) << ' ' << (maxY-minY+1) << endl;
}

int main()
{
    int n;
    for(;;){
        cin >> n;
        if(n == 0)
            break;
        vector<int> num(n-1);
        vector<int> direction(n-1);
        for(int i=0; i<n-1; ++i)
            cin >> num[i] >> direction[i];
        solution(num, direction);
    }

    return 0;
}