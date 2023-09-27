#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>
 
#define VARIABLE(x) cerr << #x << "=" << x << endl
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
 
const int INF = 10000000;
using namespace std;
typedef long long  ll;
 
/** Problem1129 : Hanafuda Shuffle **/
int main()
{
    vector<int> card;
    int n, r, p, c;
     
    while (cin >> n >> r, n||r) {
        card.clear();
        rep(i, n)
            card.push_back(n-i);
         
        rep(k, r) {
            cin >> p >> c;
            vector<int> tmp;
            rep(i, c)
                tmp.push_back(card[i+p-1]);
            rep(i, p-1)
                tmp.push_back(card[i]);
            REP(i, p+c-1, n) {
                tmp.push_back(card[i]);
            }
            card = tmp;
        }
        cout << card[0] << endl;
    }
    return 0;
}