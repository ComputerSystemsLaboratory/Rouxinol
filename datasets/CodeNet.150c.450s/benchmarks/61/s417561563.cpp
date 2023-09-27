#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,a,b,c,x;
	vector<int>y;
	while(cin>>n>>a>>b>>c>>x){
		if(n+a+b+c+x==0)break;
		int cnt=0,ans=-1;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			y.push_back(tmp);
		}
		for(int i=1;i<=10001;i++){
			//cout<<x<<endl;
			if(y[cnt]==x)cnt++;
			if(cnt==y.size()){
			ans=i-1;
			//cout<<i<<endl;
			break;
			}
			x=(a*x+b)%c;
		}
		if(x!=-1)cout<<ans<<endl;
		else cout<<-1<<endl;
		y.clear();
	}
	return 0;
}