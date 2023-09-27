#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<climits>
#include<string.h>
using namespace std;

int main(){
    int m,n1,n2;
    while(cin>>m>>n1>>n2,m){
        int p[202];
        vector<pair<int,int> >v;
        for(int i=1;i<=m;i++){
            cin>>p[i];
            if(i-1>=n1&&i-1<=n2){
                v.push_back(make_pair(p[i-1]-p[i],i-1));
            }
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1].second<<endl;
    }
}