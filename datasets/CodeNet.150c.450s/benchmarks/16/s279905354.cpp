#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define  all(x) (x).begin(),(x).end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    stack<int> s1;
    stack<pair<int, int>> s2;
    ll allSum = 0;
    rep(j, s.size()){
        if (s[j] == '\\') s1.push(j);
        else if (s[j] == '/' && s1.size() > 0){
            int i = s1.top(); s1.pop();
            allSum += j - i;
            int sum = j - i;
            while(s2.size() > 0 && s2.top().first > i){
                sum += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(i, sum));
        }
    }
    int k = s2.size();
    vector<int> sums(k);
    rep(i,k){
        sums[i] = s2.top().second;
        s2.pop();
    }
    reverse(all(sums));
    cout << allSum << endl;
    cout << k;
    rep(i,sums.size()) cout << " " << sums[i];
    cout << endl;
}
