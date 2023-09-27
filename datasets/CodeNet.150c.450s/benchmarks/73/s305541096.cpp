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

class RMQ
{
    private:
        long long int elemnum;
        vector<long long int> result;

    public:
        RMQ(long long int n){
            elemnum = n;
            result = vector<long long int>(2 * n, 0);
        }

        void update(long long int x, long long int value)
        {
            result[x + elemnum] += value;
            int tmp = (x + elemnum) / 2;
            while(tmp > 0){
                result[tmp] = result[tmp * 2] + result[tmp * 2 + 1];
                tmp = tmp / 2;
            }
        }

        long long int getsum(long long int targetl, long long int targetr, long long int nownum, long long int nowl, long long int nowr)
        {
            // cout << nowl << " " << nowr << endl;
            if(min(targetr, nowr) < max(targetl, nowl)) return 0;
            else if(targetl <= nowl && targetr >= nowr) return result[nownum];
            else {
                long long int tmp1 = getsum(targetl, targetr, 2 * nownum, nowl, (nowl + nowr) / 2);
                long long int tmp2 = getsum(targetl, targetr, 2 * nownum + 1, (nowl + nowr) / 2 + 1, nowr);
                return tmp1 + tmp2;
            }
        }

        void printresult()
        {
            for(int i = 1; i < 2 * elemnum; i++){
                cout << result[i] << " ";
            }
            cout << endl;
        }

        int getelemnum()
        {
            return elemnum;
        }
};

int main()
{
    int n, q;
    cin >> n >> q;
    int tmp = 1;
    while(tmp < n) tmp = tmp * 2;
    RMQ ans = RMQ(tmp);
    for(int i = 0; i < q; i++){
        long long int com, x, y;
        cin >> com >> x >> y;
        if(com == 0){
            x--;
            ans.update(x, y);
        } else {
            x--;
            y--;
            cout << ans.getsum(x, y, 1, 0, ans.getelemnum() - 1) << endl;
        }
        // ans.printresult();
    }
}