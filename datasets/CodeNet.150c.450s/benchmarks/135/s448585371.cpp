#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    for(;;){
        int n[2];
        cin >> n[0] >> n[1];
        if(n[0] == 0)
            return 0;

        vector<map<int, int> > d(2);
        for(int i=0; i<2; ++i){
            vector<int> a(n[i]);
            for(int j=0; j<n[i]; ++j)
                cin >> a[j];

            for(int j=0; j<n[i]; ++j){
                int sum = 0;
                for(int k=j; k<n[i]; ++k){
                    sum += a[k];
                    ++ d[i][sum];
                }
            }
        }
        
        int ret = 0;
        map<int, int>::iterator it1 = d[0].begin();
        map<int, int>::iterator it2 = d[1].begin();
        while(it1 != d[0].end() && it2 != d[1].end()){
            if(it1->first == it2->first)
                ret += it1->second * it2->second;
            if(it1->first < it2->first)
                ++ it1;
            else
                ++ it2;
        }

        cout << ret << endl;
    }
}