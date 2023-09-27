#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
using namespace std;

string moji[9]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main(){
	string s,alt;
	int n;
	cin>>n;
	rep(a,n){
		cin>>s;
		alt="";
		vector<string> vec;
		rep(i,s.size()){
			if(s[i]=='0'){
				if(alt=="")continue;
				else vec.pb(alt);alt="";
			}else alt+=s[i];
		}
		string ans="";
		rep(i,vec.size()){
			int num=vec[i][0]-'0';
			ans+=moji[num-1][(vec[i].size()-1)%moji[num-1].size()];
		}
		cout<<ans<<endl;
	}
	return 0;
}