//C
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int n,m;
	while(true){
	cin>>n>>m;
	if(n==0&&m==0)break;
	vector<pair<int,int> >t(0);//危険度、距離
	t.resize(11001);
	for(int i=0;i<n;i++){
	int a,b;
	cin>>a>>b;//距離、北市
	t[i]=(make_pair(b,a));
	}
	sort(t.begin(),t.end(),greater<pair<int,int> >());
	int iii=0;
	while(m>0){
	bool f=0;
	for(int j=0;j<n;j++)if(t[j].second!=0)f=1;
	if(f==0)break;
	//cout<<"a";
	if(m>=t[iii].second){
	m-=t[iii].second;
	t[iii].second=0;
	}
	else {
	t[iii].second-=m;
	m=0;
	}
	iii++;
	}
	int  ans=0;
	for(int i=0;i<n;i++){
	ans+=t[i].first*t[i].second;
	}
	cout<<ans<<endl;
	}
	return 0;
}