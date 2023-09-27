#include<iostream>
#include<string>
using namespace std;
pair<string,int> D[1000000];
int n,q,b[100000];string s[100000];
int main(){
	scanf("%d%d",&n,&q);
	int cnt=0,t=0;
	for(int i=0;i<n;i++){
		cin>>s[i]>>b[i];
		D[cnt]=make_pair(s[i],b[i]);cnt++;
	}
	for(int i=0;i<cnt;i++){
		if(D[i].second>q){
			t+=q;
			D[cnt]=make_pair(D[i].first,D[i].second-q);
			cnt++;
		}
		else{
			t+=D[i].second;
			cout<<D[i].first<<' '<<t<<endl;
		}
	}
	return 0;
}