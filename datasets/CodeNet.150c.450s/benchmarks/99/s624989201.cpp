#include <bits/stdc++.h>

using namespace std;
using LL = long long;

const int MOD = 1e9+7;

class Edge{
public:
    LL from,to, value;
    Edge(int f,int t, int c){
        from = f;
        to = t;
        value = c;
    }
};

int parse(string str){
    int sum = 0;
    reverse(str.begin(), str.end());
    map<char, int> mp;
    mp['m'] = 1000;
    mp['c'] = 100;
    mp['x'] = 10;
    mp['i'] = 1;
    for(int i = 0;i < str.size();i++){
        if(i == str.size() -1 || mp.find(str[i+1]) != mp.end()){
            sum += mp[str[i]];
        }else{
            sum += mp[str[i]] * (str[i + 1] - '0');
            i++;
        }

    }
    return sum;
}
string usi(int num){
    string s = to_string(num);
    reverse(s.begin(), s.end());
    string ans;
    vector<char> a = {'m', 'c', 'x', 'i'};

    reverse(a.begin(), a.end());
    for(int i = 0;i < s.size();i++){
        if(s[i] == '0'){
            continue;
        }else if(s[i] == '1'){
            ans += a[i];
        }else{
            ans += a[i];
            ans += s[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int N;cin >> N;
    for(int i = 0;i < N;i++){
        string a,b;cin >> a >> b;
        cout<<usi(parse(a) + parse(b))<<endl;
    }
}

