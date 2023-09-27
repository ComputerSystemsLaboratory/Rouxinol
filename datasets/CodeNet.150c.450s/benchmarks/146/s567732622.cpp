#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define vi vector<int>
#define VS vector<string>
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        x1 -= x2; y1 -= y2;
        x3 -= x4; y3 -= y4;
        if(abs(x1*y3 - y1*x3)<1e-10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}