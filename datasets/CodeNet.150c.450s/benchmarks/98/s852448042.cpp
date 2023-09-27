#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define INF 10000000

int main() {
    int taro_n, hana_n;
    while (cin >> taro_n >> hana_n, taro_n|hana_n) {
        vi taro_cards(taro_n);
        vi hana_cards(hana_n);
        REP(i, taro_n) cin >> taro_cards[i];
        REP(i, hana_n) cin >> hana_cards[i];

        int min_sum = INF;
        int min_taro_card = INF, min_hana_card = INF;

        int tmp;
        REP(i, taro_n) {
            REP(j, hana_n) {
                tmp = taro_cards[i];
                taro_cards[i] = hana_cards[j];
                hana_cards[j] = tmp;

                int taro_sum = 0, hana_sum = 0;
                REP(k, taro_n) taro_sum += taro_cards[k];
                REP(k, hana_n) hana_sum += hana_cards[k];

                if (taro_sum == hana_sum) {
                    if (min_sum > taro_sum + hana_sum) {
                        min_sum = taro_sum + hana_sum;
                        // swap
                        min_taro_card = hana_cards[j];
                        min_hana_card = taro_cards[i];
                    }
                }

                tmp = taro_cards[i];
                taro_cards[i] = hana_cards[j];
                hana_cards[j] = tmp;
            }
        }

        if (min_sum != INF) {
            cout << min_taro_card << " " << min_hana_card << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}