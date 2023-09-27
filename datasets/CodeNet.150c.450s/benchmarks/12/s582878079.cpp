#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n;
vll heap;

int main(){
    cin >> n;
    heap = vll(n+1);
    for(lli i = 1;i <= n;i++) cin >> heap[i];
    for(lli i = 1;i <= n;i++){
        cout << "node " << i << ": ";
        cout << "key = " << heap[i] << ", ";
        if(i/2) cout << "parent key = " << heap[i/2] << ", ";
        if(i*2 <= n) cout << "left key = " << heap[i*2] << ", ";
        if(i*2+1 <= n) cout << "right key = " << heap[i*2+1] << ", ";
        cout << endl;
    }
}