//
//  main.cpp
//  ac
//
//  Created by ?????£??? on 2017/5/26.
//  Copyright ?? 2017??´ ?????£???. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <memory>
#include <stdlib.h>
#include <cstring>
using namespace std;

struct task{
    string name;
    int time;
};

queue<task> t;

int n,q;
int sum=0;

void solve();
int main(){
    //freopen("/Users/mac/Desktop/C++?¨????/test/test.txt", "r", stdin);
    cin>>n>>q;
    for (int i=0; i<n; i++) {
        task p;
        cin>>p.name>>p.time;
        t.push(p);
    }
    solve();
    return 0;
}

void solve()
{
    while (t.size()) {
        task tmp=t.front();
        if (tmp.time<=q) {
            sum+=tmp.time;
            cout<<tmp.name<<' '<<sum<<endl;
            t.pop();
        }
        else{
            tmp.time-=q;
            sum+=q;
            t.pop();
            t.push(tmp);
        }
    }
}