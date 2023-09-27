#include<bits/stdc++.h>
using namespace std;
int main(){
	long long  tong[111111];
    long long n,ans=0,q;
    cin>>n;
    vector<long long>v;
    while(n--){
        int e;cin>>e;
		v.push_back(e);  
		ans+=e; 
		tong[e]++;	
	}
	cin>>q;
	long long a[111111];
	long long b[111111];
    for(int i=0;i<q;i++){
    	cin>>a[i]>>b[i];
	}
	for(long long i=0;i<q;i++){
    	if(a[i]>b[i]){
    		int nas=a[i]-b[i];
    		nas*=tong[a[i]];
    		cout<<ans-nas<<endl;
    		ans-=nas;
    		tong[b[i]]+=tong[a[i]];
    		tong[a[i]]=0;
		}
		else if(a[i]<b[i]){
    		int nas=b[i]-a[i];
    		nas*=tong[a[i]];
    		cout<<ans+nas<<endl;
    		ans+=nas;
    		tong[b[i]]+=tong[a[i]];
    		tong[a[i]]=0;
		}
	}
	//for(int i=1;i<=10;i++) cout<<tong[i]<<"   ";
	return 0;
}