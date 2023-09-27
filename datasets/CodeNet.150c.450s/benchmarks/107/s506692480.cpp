#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

#define mod 1000000007
   
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int result[1001][1001] = {};
    for(int i = 0; i <= s1.length(); i++){
        result[i][0] = i;
    }
    for(int i = 0; i <= s2.length(); i++){
        result[0][i] = i;
    }
    for(int i = 1; i <= s1.length(); i++){
        for(int j = 1; j <= s2.length(); j++){
            result[i][j] = result[i - 1][j - 1];
            if(s1[i - 1] != s2[j - 1]) result[i][j]++;
            result[i][j] = min(result[i][j], min(result[i - 1][j] + 1, result[i][j - 1] + 1));
        }
    }
    // for(int i = 0; i <= s1.length(); i++){
    //     for(int j = 0; j <= s2.length(); j++){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << result[s1.length()][s2.length()] << endl;
    return 0;
}