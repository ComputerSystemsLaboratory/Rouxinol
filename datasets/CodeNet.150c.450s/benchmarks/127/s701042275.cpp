
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;


int main(){
    int m;
    cin >> m;
    for (int q =0; q <m; q++) {
        string S;
        cin >> S;
        set<string> Q;
        for (int i=0; i<S.length(); i++) {
            string l,lrev,r,rrev;
            l = S.substr(0,i);
            r = S.substr(i,S.length()-i);
            lrev = l;
            rrev = r;
            reverse(lrev.begin(), lrev.end());
            reverse(rrev.begin(), rrev.end());
            //cout << l << endl << r << endl << lrev << endl << rrev <<endl << "==" <<endl;
             Q.insert(l+r);
            Q.insert(r+l);
            Q.insert(lrev+r);
            Q.insert(r+lrev);
            Q.insert(l+rrev);
            Q.insert(rrev+l);
            Q.insert(lrev+rrev);
            Q.insert(rrev+lrev);
        }
        cout << Q.size()<<endl;
    }
}