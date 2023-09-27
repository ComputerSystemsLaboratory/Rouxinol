
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
#include <cstring>
#include <cstdio>
#include <stack>
#define INF 1000000000
#define rep(i,n) for(int i =0;i<n;i++)
using namespace std;
typedef long long int ll;


int main(){
    for(;;){
        int n;
        cin >> n;
        if(n==0)break;
        int res = 0;
        int ans = 0;
        vector<pair<int,pair<int, pair<int, int> > > > hoge;
        for (int i=0; i<n; i++) {
            string s,g;
            cin >> s>>g;
            int sh,sm,ss,gh,gm,gs;
            sh = ((int)s[0]-(int)'0')*10+(int)s[1]-(int)'0';
            sm = ((int)s[3]-(int)'0')*10+(int)s[4]-(int)'0';
            ss = ((int)s[6]-(int)'0')*10+(int)s[7]-(int)'0';
            gh = ((int)g[0]-(int)'0')*10+(int)g[1]-(int)'0';
            gm = ((int)g[3]-(int)'0')*10+(int)g[4]-(int)'0';
            gs = ((int)g[6]-(int)'0')*10+(int)g[7]-(int)'0';
            hoge.push_back({sh,{sm,{ss,2}}});
            hoge.push_back({gh,{gm,{gs,1}}});
        }
        sort(hoge.begin(),hoge.end());
        for (int i=0; i<hoge.size(); i++) {
            if (hoge[i].second.second.second==1) {
                res++;
            }else{
                if (res>0) {
                    res--;
                }else{
                    ans++;
                }
            }
        }
        cout << ans <<endl;
    }
}