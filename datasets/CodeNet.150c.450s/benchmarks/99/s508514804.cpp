#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

int calc(string s){
    int num=0;
    for(int i=0; i<s.size(); i++){
        if('2' <= s[i] && s[i] <= '9'){
            if(s[i+1] == 'm') num += (s[i] - '0') * 1000;
            if(s[i+1] == 'c') num += (s[i] - '0') * 100;
            if(s[i+1] == 'x') num += (s[i] - '0') * 10;
            if(s[i+1] == 'i') num += (s[i] - '0') * 1;
            i++;
        }
        else{
            if(s[i] == 'm') num += 1000;
            if(s[i] == 'c') num += 100;
            if(s[i] == 'x') num += 10;
            if(s[i] == 'i') num += 1;
        }
    }

    return num;
}

string restoration(int n){
    string ans;
    for(int i=0; i<4; i++){
        int num = n % 10;
        n /= 10;

        if(1 <= num && num <= 9){
            if(i == 0) ans += "i";
            if(i == 1) ans += "x";
            if(i == 2) ans += "c";
            if(i == 3) ans += "m";

            if(2 <= num){
                string t = to_string(num);
                ans += t;
            }
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string a, b; cin>>a>>b;

        int anum = calc(a);
        int bnum = calc(b);

        cout << restoration(anum + bnum) << endl;
    }
}
