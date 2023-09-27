#include<iostream>
#include<string>
using namespace std;
int nowtrain[864000];
int main(){
	int n;
	string a;
	int bef,aft;
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<86400;i++)
		nowtrain[i]=0;
	for(int i=0;i<n;i++){
		cin>>a;
		bef=3600*((a[0]-'0')*10+a[1]-'0');
		bef+=60*((a[3]-'0')*10+a[4]-'0');
		bef+=a[6]*10+a[7];
		cin>>a;
		aft=3600*((a[0]-'0')*10+a[1]-'0');
		aft+=60*((a[3]-'0')*10+a[4]-'0');
		aft+=a[6]*10+a[7];
		for(int j=bef;j<aft;j++)
			nowtrain[j]++;
	}
	int best=0;
	for(int i=0;i<86400;i++)
		best=max(best,nowtrain[i]);
	cout<<best<<endl;
	}
	return 0;
}