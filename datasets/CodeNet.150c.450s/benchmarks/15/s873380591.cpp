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


int main() {
   

    int n;
    int q;
    cin >> n;
    vector <long> s;
    vector <long> t;
    for (int i=0;i<n;i++){
        long p;
        cin  >> p;
        s.push_back(p);
    }
    cin >> q;
    for (int i=0;i<q;i++){
        long p;
        cin >> p;
        t.push_back(p);
    }
    vector <long> ::iterator p,r;
    long ans =0;
    for(p=t.begin();p!=t.end();p++){
        for (r=s.begin();r!=s.end();r++){
            if(*p == *r){
                ans += 1;
                break;
            }
        }
    }
    cout << ans << endl;
}
