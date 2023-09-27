#define _USE_MATH_DEFINES
#include  <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
#include<iomanip>
#include<stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include <queue>
#include<map>
#include <sstream>
#include<set>
#include<stack>
typedef long long int ll;
//#include<bits/stdc++.h>


using namespace std;





int main()
{
    ll n;
    cin >> n;
    vector<int>t(n);
    
    vector<int>r;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        
    }
    int p = 1;
    r.push_back(t[0]);
    for (int i = 1; i < n; i++) {
       
        if (t[i] > r[p-1]) {
            r.push_back(t[i]);
            p++; 
        }
        else {
            
            auto x = lower_bound(r.begin(), r.begin()+p, t[i]);
            
            r[x - r.begin()] = t[i];

        }
    }
    cout << p << endl;
   

    return 0;

}
