#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>

using namespace std;


const long long  MAX = 200000;
int main() {
   

    queue <pair<string,long>> qu;
    long n,q;
    cin >> n >> q;
    for (int i=0;i<n;i++){
        string s;
        long p;
        cin >> s >> p;
        qu.push(make_pair(s,p));
    }

    pair <string, long> u;
    int elaps = 0;
    int a;

    while (!qu.empty()){
        u = qu.front();
        qu.pop();
        a = min(u.second, q);
        u.second -= a;
        elaps += a;
        if(u.second > 0){
            qu.push(u);
        }else{
            cout << u.first << " " << elaps << endl;
        }
    }



}
