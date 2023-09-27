#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	long int n,m;

    while(cin>>n>>m,n){
        long int p = 0;
        vector< pair<int,int> > dp;
        dp.resize(n);
        for(int i=0;i<n;i++){
            cin >> dp[i].second >> dp[i].first;
        }

        sort(dp.begin(),dp.end(),greater< pair<int,int> >());

        for(int i=0;i<n;i++){
            if(m==0){
                p+=dp[i].second * dp[i].first;
            }else{
                if(m>=dp[i].second) m-=dp[i].second;
                else{
                    p+=(dp[i].second-m)*dp[i].first;
                    m=0;
                }
            }
        }

        cout << p << endl;
    }

	return 0;
}