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
    string button[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int d;
    cin >> d;

    while(--d >= 0){
        string s;
        cin >> s;
        int n = s.size();

        string ret;
        int i = 0;
        while(i < n){
            char c = s[i];
            if(c == '0'){
                ++ i;
                continue;
            }

            int m = -1;
            while(i < n && c == s[i]){
                ++ m;
                ++ i;
            }
            ret += button[c-'1'][m%button[c-'1'].size()];
        }

        cout << ret << endl;
    }

    return 0;
}