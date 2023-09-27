#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<sstream>
#include<functional>
#include<algorithm>
using namespace std;
string hiku(string a,string b){
	stringstream t1,t2,t3;
	int x=0,y=0,ans=0;
	t1<<a;
	t2<<b;
	t1>>x;
	t2>>y;
	ans=x-y;
	t3<<ans;
	string tmp=t3.str();
	return tmp;
	
}
int main(){
	string a;
	int k;
	while(true){
		vector<pair<string,int> >y;
		y.clear();
		cin>>a>>k;
		if(a=="0"&&k==0)break;
		for(int jf=0;jf<22;jf++){
		while(a.size()<k&&a.size()!=k)a="0"+a;
			pair<string,int>tmp=make_pair(a,jf);
			y.push_back(tmp);
			string t1,t2;
			sort(a.begin(),a.end());
			t1=a;
			sort(a.begin(),a.end(),greater<char>());
			t2=a;
			a=hiku(t2,t1);
		}
		int I=10e8,J=I;
		for(int i=0;i<y.size();i++){
			int cnt=0;
			while(y[i].first[cnt]=='0'){
			if(y[i].first=="0")break;
			y[i].first.erase(y[i].first.begin());
			}
		}
		bool f=1;		
		for(int i=0;i<y.size();i++){
			for(int j=0;j<y.size();j++){
				if(i==j)continue;
				if(y[i].first==y[j].first&&j<i&&f){
				if(I>i){
				I=i;
				J=j;
				f=0;
				}
				}
			}
		}
		cout<<J<<" "<<y[I].first<<" "<<I-J<<endl;
	}
	return 0;
}