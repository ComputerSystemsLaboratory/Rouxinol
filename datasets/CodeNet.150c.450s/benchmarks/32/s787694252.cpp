#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<set>
#include<map>
#include<math.h>
#include <string>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;
int main(){
 	while(1){
 		int m,a,b; cin >>m>> a>>b;
 		if(m==0&&a==0&&b==0)break;
 		int ans=-1;
 		int dif=-1;
 		vector<int> s(m);
 		for(int i=0;i<m;i++){
 			cin >> s[i];
 		}
 		sort(s.begin(),s.end());
 		for(int i=m-b;i<=m-a;i++){
 			if(s[i]-s[i-1]>dif){
 				ans=m-i;
 				dif=s[i]-s[i-1];
 			}
 		}
 		cout << ans << endl;
 	}
 }
