#include<iostream>
#include<vector>
using namespace std;
vector<int> A,B;
int main(){
	int n,m;
	while(cin>>n>>m,n,m){
		int sum=0,t=0,min=0,ans1=0,ans2=0,a;
		A.clear();
		B.clear();
		for(int i=0;i<n;i++){
			cin>>a;
			A.push_back(a);
			t+=a;
			sum+=a;
		}
		for(int i=0;i<m;i++){
			cin>>a;
			B.push_back(a);
			t+=a;
		}
		if(t*1.0/2.0!=t/2){
			cout<<-1<<endl;
			continue;
		}
		t/=2;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(B[j]-A[i]==t-sum){
					if(min==0){
						min=A[i]+B[j];
						ans1=A[i];
						ans2=B[j];
					}else if(min>A[i]+B[j]){
						min=A[i]+B[j];
						ans1=A[i];
						ans2=B[j];
					}
				}
			}
		}
		if(ans1==0 && ans2==0)
		cout<<-1<<endl;
		else
		cout<<ans1<<' '<<ans2<<endl;
	}
	return 0;
}