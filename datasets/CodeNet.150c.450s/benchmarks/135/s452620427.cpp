#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;


const int dx[]={0,0,-1,1};
const int dy[]={-1,1,0,0};

int main()
{
    int n,m;
    while(cin>>n>>m,n){
        vector<int> y,x;
        y.push_back(0);
        x.push_back(0);
        
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            y.push_back(y.back()+tmp);
        }
        
        for(int j=0;j<m;j++){
            int tmp;
            cin>>tmp;
            x.push_back(x.back()+tmp);
        }
        
        map<int,int> diag;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                diag[y[i]-x[j]]++;
            }
        }
        
        long long res=0;
        for(auto it=diag.begin();it!=diag.end();it++){
            int tmp=it->second;
            res+=tmp*(tmp-1)/2;
        }
        cout<<res<<endl;
        
    }
    
    return 0;
}