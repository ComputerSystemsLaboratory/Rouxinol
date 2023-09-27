#include "bits/stdc++.h"
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)
#define debug(x) cout << #x << " : " << (x) << " --------------" << endl;
using namespace std;
int getPreNum(char mcxi, const string& str) {
    int i = str.find(mcxi);
    if (i == -1) return 0;
    else if (i == 0 || !isdigit(str[i-1])) return 1;
    else return str[i-1] - '0';
}
int main(void){
    int n;
    cin >> n;
    string ixcm = "ixcm";
    string mcxi = "mcxi";
    REP(k, n) {
        string str1, str2;
        cin >> str1 >> str2;
        int sum = 0;
        REP(i, 4) {
            int num = getPreNum(ixcm[i], str1) + getPreNum(ixcm[i], str2);
            sum += num * pow(10, i);
        }
        ostringstream oss;
        oss << setfill('0') << setw(4) << sum;
        string digits = oss.str();
        string res = "";
        REP(i, 4) {
            char c = digits[i];
            if (c > '0') {
                if (c > '1') res += c;
                res += mcxi[i];
            }
        }
        cout << res << endl;
    }
    return EXIT_SUCCESS;
}