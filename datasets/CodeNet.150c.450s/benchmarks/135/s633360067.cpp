#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>

#define INF 1e09

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::pair;
using std::make_pair;
using std::min;
using std::max;
using std::string;
using std::vector;
using std::list;
using std::map;
using std::set; // insert erase find count
using std::queue;
using std::priority_queue;
using std::stack;

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, pair<int, int> > PIII;

int main(void) {
    while (1) {
        int n;
        int m;
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        VI vn(n);
        VI vm(m);
        for (int i = 0; i < n; i++) {
            cin >> vn[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> vm[i];
        }

        VI listn;
        for (int i = 0; i < n; i++) {
            int temp = vn[i];
            listn.push_back(temp);
            for (int j = i + 1; j < n; j++) {
                temp += vn[j];
                listn.push_back(temp);
            }
        }
        VI listm;
        for (int i = 0; i < m; i++) {
            int temp = vm[i];
            listm.push_back(temp);
            for (int j = i + 1; j < m; j++) {
                temp += vm[j];
                listm.push_back(temp);
            }
        }

        sort(listn.begin(), listn.end());
        sort(listm.begin(), listm.end());

        int count = 0;
        int now_i = 0;
        int now_j = 0;
        int size_i = (int)listn.size();
        int size_j = (int)listm.size();

        while (1) {
            if (now_i == size_i || now_j == size_j) {
                break;
            }
            if (listn[now_i] < listm[now_j]) {
                while (listn[now_i] < listm[now_j] && now_i != size_i) {
                    now_i++;
                }
                continue;
            } else if (listn[now_i] > listm[now_j]) {
                while (listn[now_i] > listm[now_j] && now_j != size_j) {
                    now_j++;
                }
                continue;
            } else {
                int count_i = 0;
                int count_j = 0;
                int temp_i = listn[now_i];
                int temp_j = listm[now_j];
                while (listn[now_i] == temp_i && now_i != size_i) {
                    now_i++;
                    count_i++;
                }
                while (listm[now_j] == temp_j && now_j != size_j) {
                    now_j++;
                    count_j++;
                }
                count += (count_i * count_j);
            }
        }
        cout << count << endl;
    }

    return 0;
}