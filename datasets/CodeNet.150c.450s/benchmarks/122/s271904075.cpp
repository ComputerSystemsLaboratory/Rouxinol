#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define vi vector<int>
#define vvi vector<vector<int>>
using namespace std;

int main() {
    string s;
    cin >> s;
    priority_queue<int> pq;
    while (s != "end") {
        if (s == "insert") {
            int x; cin >> x;
            pq.push(x);
        }
        if (s == "extract") {
            cout << pq.top() << endl;
            pq.pop();
        }
        cin >> s;
    }
}
