#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ac,wa,tle,re;
    ac=0, wa=0, tle=0, re=0;

    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        if(s=="AC") {
            ac++;
        }
        else if(s=="WA") {
            wa++;
        }
        else if(s=="TLE") {
            tle++;
        }
        else if(s=="RE") {
            re++;
        }
    }
    cout<<"AC "<<"x "<<ac<<endl;
    cout<<"WA "<<"x "<<wa<<endl;
    cout<<"TLE "<<"x "<<tle<<endl;
    cout<<"RE "<<"x "<<re<<endl;
}


