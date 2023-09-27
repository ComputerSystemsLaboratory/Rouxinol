#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,m;
	cin>>n;
	string s[n],tmp;
	bool check=false;
	rep(i,n){
		cin>>s[i];
	}
	cin>>m;
	rep(i,m){
		cin>>tmp;
		bool uk=true;
		rep(j,n){
			if(tmp==s[j]){
				cout<<((check)?"Closed":"Opened")<<" by "<<s[j]<<endl;
				uk=false;
				check=!check;
				break;
			}
		}
		if(uk)cout<<"Unknown "<<tmp<<endl;
	}
	return 0;
}