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

int mcxitoint(string s)
{
    int num = 1;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            num = s[i] - '0';
        } else {
            if(s[i] == 'm'){
                ans += num * 1000;
            } else if(s[i] == 'c'){
                ans += num * 100;
            } else if(s[i] == 'x'){
                ans += num * 10;
            } else {
                ans += num * 1;
            }
            num = 1;
        }
    }
    return ans;
}

string inttomcxi(int n)
{
    string ans = "";
    if(n / 1000 != 0){
        if(n / 1000 != 1) ans += n / 1000 + '0';
        ans += 'm';
        n = n % 1000;
    }
    if(n / 100 != 0){
        if(n / 100 != 1) ans += n / 100 + '0';
        ans += 'c';
        n = n % 100;
    }
    if(n / 10 != 0){
        if(n / 10 != 1) ans += n / 10 + '0';
        ans += 'x';
        n = n % 10;
    }
    if(n != 0){
        if(n != 1) ans += n + '0';
        ans += 'i';
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = mcxitoint(s1);
        int n2 = mcxitoint(s2);
        n1 += n2;
        cout << inttomcxi(n1) << endl;
    }
    return 0;
}