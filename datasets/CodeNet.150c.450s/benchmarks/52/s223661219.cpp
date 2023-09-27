//0013
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tmp,i = 0,j,k = 0,f[11];
	vector<int> ans;

	while(cin>>tmp){
		if(tmp == 0){
			ans.push_back(f[i-1]);
			f[i-1] = '\0';
			i--;
			k++;
		}
		else{
		f[i] = tmp;
		i++;
		}
	}
	for(j = 0;j < k;j++){
		cout<<ans[j]<<endl;
	}
	return 0;
}