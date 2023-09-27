#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<char,string> m;
    m['1'] = ".,!? ";
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";

    rep(i,n) {
        string s;
        cin >> s;
        
        stringstream ss;
        int cnt = -1,id = -1;
        rep(j,s.size()) {
            if(s[j] == '0') {
                if(id != -1) {
                    cnt %= m['0'+id].size();
                    ss << m['0'+id][cnt];

                    cnt = -1;
                    id = -1;
                }
            }
            else {
                cnt++;
                id = (int)(s[j]-'0');
            }
        }

        cout << ss.str() << endl;
        
    }
    
    return 0;
}