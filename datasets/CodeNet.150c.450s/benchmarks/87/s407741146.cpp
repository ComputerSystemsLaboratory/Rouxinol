#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>

#define rep(i, a, n) for(int i=a;i < n;i++)
#define all(e) e.begin(), e.end()
#define INF (1 << 30)
#define INFL (1LL << 55)

using namespace std;

class Solver {
public:
    Solver(int size) {
        this->H = size;
    }

    void solve() {
        input();
        rep(z, 0, 20) {
            //加点・消去パート
            rep(h, 0, H) {
                int prev = V[0][h];
                int cont = 1;
                rep(w, 1, 5) {
                    if (V[w][h] == prev) {
                        cont++;
                    } else {
                        if (cont >= 3) {
                            ans += cont * prev;
                            rep(i, w - cont, w) {
                                V[i][h] = 0;
                            }
                        }
                        prev = V[w][h];
                        cont = 1;
                    }

                }
                if (cont >= 3) {
                    ans += cont * prev;
                    rep(i, 5 - cont, 5) {
                        V[i][h] = 0;
                    }
                }
            }

            //再配置パート
            rep(w, 0, 5) {
                rep(h, 0, H) {
                    if (V[w][h] != 0) {
                        int tmp = h - 1;
                        while (tmp >= 0) {
                            if (V[w][tmp] != 0) break;
                            tmp--;
                        }
                        swap(V[w][h], V[w][tmp + 1]);
                    }
                }
            }
            /*
            cerr<<"turn"<<z<<", "<<ans<<endl;
            for (int h = H - 1; h >= 0; h--) {
                rep(w, 0, 5) {
                    cerr << V[w][h] << " ";
                }
                cerr << endl;
            }*/
        }


        cout << ans << endl;
    }

private:
    int H;
    vector<vector<int>> V; // フィールド
    long long ans = 0;

    void input() {
        V.resize(5, vector<int>(H));
        for(int h=H-1;h>=0;h--) {
            rep(w, 0, 5) {
                cin >> V[w][h];
            }
        }
    }
};

int main() {

    int N;
    while (cin >> N, N) {
        Solver(N).solve();
    }


    return 0;
}
