#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,l;
	while(cin>>n>>l && l){
	vector<int> ans;
	ans.push_back(n);
//	cout<<ans[0]<<endl;
	int n0=n;
	int j=0,u;
	while(1){
		vector<int> ve;
	int nn=n;
	for(int i=0;i<l;i++){
			ve.push_back(nn%10);
			nn=nn/10;
	}
	sort(ve.begin(),ve.end());
		int min=0,max=0;
	for(int i=0;i<l;i++){
			min=min+ve[i];
			min=min*10;
	}
	min=min/10;
	sort(ve.begin(),ve.end(),greater<int>());
	for(int i=0;i<l;i++){
			max=max+ve[i];
			max=max*10;
	}
		max=max/10;
		
		n=max-min;
	//	cout<<max<<" "<<min<<" "<<n<<endl;
		j++;
		 u=-1;
		 	
		ans.push_back(n);
		
		for(int i=0;i<j;i++){
	//		cout<<ans[0]<<" "<<ans[1]<<" "<<j<<endl;
			if(ans[i]==ans[j]){
				u=i;
				break;
			}
		}
//		cout<<ans[0]<<" "<<ans[1]<<endl;
		if(u!=-1) break;
	}
	cout<<u<<" "<<ans[j]<<" "<<j-u<<endl;
	
	}
	
	
	
	return 0;
}