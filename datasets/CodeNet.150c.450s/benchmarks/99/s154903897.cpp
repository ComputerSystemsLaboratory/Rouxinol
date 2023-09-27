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
#include <cfloat>
using namespace std;

string mcxi = "mcxi";

int toNum(string s){
    int ret = 0;
    for(unsigned i=0; i<s.size(); ++i){
        int a = 1;
        if('2' <= s[i] && s[i] <= '9'){
            a = s[i] - '0';
            ++ i;
        }
        int tmp = 1000;
        for(int j=0; j<4; ++j){
            if(s[i] == mcxi[j])
                ret += a * tmp;
            tmp /= 10;
        }
    }
    return ret;
}

string solve(string& s1, string& s2)
{
    int num = toNum(s1) + toNum(s2);
    string s;
    int tmp = 1000;
    for(int i=0; i<4; ++i){
        int a = num / tmp;
        if(a != 0){
            if(a != 1)
                s += '0' + a;
            s += mcxi[i];
        }
        num %= tmp;
        tmp /= 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
       string s1, s2;
       cin >> s1 >> s2;
       cout << solve(s1, s2) << endl;
    }
}