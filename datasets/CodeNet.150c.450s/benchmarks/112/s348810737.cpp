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
    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        vector<char> transform(256);
        for(int i=0; i<256; ++i)
            transform[i] = i;

        for(int i=0; i<n; ++i){
            char a, b;
            cin >> a >> b;
            transform[a] = b;
        }

        int m;
        cin >> m;
        for(int i=0; i<m; ++i){
            char c;
            cin >> c;
            cout << transform[c];
        }
        cout << endl;
    }
}