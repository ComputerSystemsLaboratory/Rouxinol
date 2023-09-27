#include<iostream>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		string s;
		int ans=0;
		bool pre=false,r=false,l=false;
		rep(i,n){
			cin>>s;
			if(s=="lu")l=true;
			if(s=="ru")r=true;
			if(s=="ld")l=false;
			if(s=="rd")r=false;
			if(pre==false && r==true && l==true){
				ans++;
				pre=true;
			}
			if(pre==true && r==false && l==false){
				ans++;
				pre=false;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}