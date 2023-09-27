#include <cstdio>
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
    int n;
    cin >> n;

    set<string> id;
    for(int i=0; i<n; ++i){
        string s;
        cin >> s;
        id.insert(s);
    }

    int m;
    cin >> m;

    bool open = false;
    for(int i=0; i<m; ++i){
        string s;
        cin >> s;
        if(id.find(s) == id.end()){
            cout << "Unknown " << s << endl;
        }else if(open){
            cout << "Closed by " << s << endl;
            open = false;
        }else{
            cout << "Opened by " << s << endl;
            open = true;
        }
    }

    return 0;
}