#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
#include <string>
#include <vector>

using namespace std;

const int INF = 1 << 29;

string f(string x, int L) {
    string result = "";
    vector<int> v;
    int maximum = 0, minimum = 0;

    for(int i = 0; i < x.size(); i++) {
        v.push_back(x[i] - '0');
    }
    for(int i = 0; i < L - x.size(); i++) {
        v.push_back(0);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        maximum *= 10;
        minimum *= 10;
        maximum += v[v.size() - i - 1];
        minimum += v[i];
    }

    int pow = 1;
    int diff = maximum - minimum;

    for(int i = 0; i < v.size() - 1; i++) pow *= 10;

    for(int i = 0; i < v.size(); i++) {
        result += char((diff / pow) + '0');
        diff %= pow;
        pow /= 10;
    }
 
    return result;
}

int main() {
    string A, x, ans;
    int L;
    while(cin >> A >> L) {
        if(A == "0" && L == 0) break;

        int point = 0, diff = INF; 

        vector<string> memo;        
        memo.push_back(A);
        int res = INF;
      
        for(int i = 1; i <= 20; i++) {
            x = f(A, L);
            memo.push_back(x);
            A = x;
        }

        for(int i = 0; i < memo.size(); i++) {
            for(int j = i+1; j < memo.size(); j++) {
                if(memo[i] == memo[j] && diff > j - i) {
                    ans = memo[i];
                    diff = j - i;
                    point = i;
                }
            }
        }

        cout << point << ' ' << atoi(ans.c_str()) << ' ' << diff << endl;
    }
}