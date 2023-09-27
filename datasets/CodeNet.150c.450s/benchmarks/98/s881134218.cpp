#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		vector<int>ansa,ansb;int Asum=0,Bsum=0,asum,bsum;
		int a[102]={0},b[100]={0};
		for(int i=0;i<n;i++){cin>>a[i];Asum+=a[i];}
		for(int i=0;i<m;i++){cin>>b[i];Bsum+=b[i];}
		asum=Asum;
		bsum=Bsum;
		for(int i=0;i<n;i++){
			asum=Asum;
			bsum=Bsum;
			for(int j=0;j<m;j++){
				if(asum-a[i]+b[j]==bsum-b[j]+a[i]){
					ansa.push_back(a[i]);
					ansb.push_back(b[j]);
				}
			}
		}
		for(int i=0;i<ansa.size();i++){
			for(int j=0;j<ansb.size()-1;j++){
				if(ansa[i]+ansb[i]>ansa[j+1]+ansb[j+1]){
					swap(ansa[i],ansa[j+1]);
					swap(ansb[i],ansb[j+1]);
				}
			}
		}
		if(ansa.empty())cout<<-1<<endl;
		else cout<<ansa[0]<<" "<<ansb[0]<<endl;
		}
	return 0;
}