#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x && n!=0){
		vector<int> V(n);
		for(int i=0;i<n;i++)
			cin>>V[i];

		int idx=0;
		int ans=-1;
		for(int i=0;i<=10000;i++){
			if(x==V[idx])
				idx++;
			if(idx==n){
				ans=i;
				break;
			}
			
			x=(a*x+b)%c;

		}
		cout<<ans<<endl;
	}
	return 0;
}