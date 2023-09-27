#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 

using namespace std;

int main()
{
	string s1,s2,tmp,ans;
	int n,m;

	while(1){
		s1.clear();s2.clear();ans.clear();
		cin>>n; if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin>>tmp; s1+=tmp;
			cin>>tmp; s2+=tmp;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>tmp; ans+=tmp;
			for(int j=0;j<n;j++){
				if(ans[i]==s1[j]){ans[i]=s2[j]; break;}
			}
		}
		cout<<ans<<endl;
	}
}