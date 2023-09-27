#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()

template<typename T> inline void chmax(T& t, T f){if(t < f)t = f;}

vector<string> split(const string& input, char delimiter){
    istringstream stream(input);
    string field;
    vector<string> result;
    while(getline(stream, field, delimiter))result.push_back(field);
    return result;
}

int main(){
    int n;
    while(cin >> n, n){
        typedef pair<vector<string>, vector<string> > Time;
        vector<Time> table;
        rep(i, n){
            string s, t;
            cin >> s >> t;
            table.emplace_back(split(s, ':'), split(t, ':'));
        }
        sort(all(table));
        int ans = 1;
        rep(i, n){
            chmax(ans, 1 + (int)count_if(table.begin(), table.begin() + i,
                        [&](Time& t){return table[i].first < t.second;}));
        }
        cout << ans << '\n';
    }
    return 0;
}