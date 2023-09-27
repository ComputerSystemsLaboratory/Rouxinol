#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef pair<int,int> P;
 
int main(){
    int n;
     
    while(cin >> n,n){
        vector<P> v;
        int sh,sm,ss,th,tm,ts,Max=0,Min = 99999,totals,totalt;
        for(int i = 0 ; i < n ; i++){
            scanf("%d:%d:%d" ,&sh , &sm , &ss);
            totals = sh*3600+sm*60+ss;
            v.push_back(P(totals,1));
            scanf("%d:%d:%d" ,&th , &tm , &ts);
            totalt = th*3600+tm*60+ts;
            v.push_back(P(totalt,-1));
        }
        sort(v.begin(),v.end());
     
        int ans = 0,tmp = 0;
        for(int i = 0 ; i < v.size() ; i++){
	    tmp += v[i].second;
	    ans = max(ans,tmp);
        }
        cout << ans << endl;
    }
    return 0;
}