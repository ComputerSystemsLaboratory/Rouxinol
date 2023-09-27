#include<iostream>
#include<string>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	string s,alt="",lenm="",encm="";
	getline(cin,s);
	vector<string> vec;
	rep(i,s.size()){
		if(i==s.size()-1){
			alt+=s[i];
			vec.push_back(alt);
			alt="";
		}else if(s[i]==' '){
			vec.push_back(alt);
			alt="";
		}else alt+=s[i];
	}
	int cnt[vec.size()];
	rep(i,vec.size())cnt[i]=0;
	rep(i,vec.size()){
		if(vec[i].size()>lenm.size())lenm=vec[i];
		rep(j,vec.size()){
			if(vec[i]==vec[j])cnt[i]++;
		}
	}
	int ma=-1;
	rep(i,vec.size()){
		if(ma<cnt[i]){
			ma=cnt[i];
			encm=vec[i];
		}
	}
	cout<<encm<<" "<<lenm<<endl;
	return 0;
}