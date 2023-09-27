#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int *line;
	while(cin>>n&&n!=0){
		line=new int[n];
		for(int i=0;i<n;++i){
			cin>>line[i];
		}
		sort(line,line+n);
		--n;
		int ans=(1<<31)-1;
		for(int i=0;i<n;++i){
			ans=min(ans,line[i+1]-line[i]);
		}
		cout<<ans<<endl;
		delete[] line;
	}
	return 0;
}