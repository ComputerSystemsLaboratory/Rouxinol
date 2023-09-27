#include <iostream>
using namespace std;
string s1,s2;
char voc[]="mcxi";

string i2mcxi(int n){
	int b=1000;
	string res="";
	for(int i=0;i<4;i++,b/=10){
		int t=n/b;
		if(t==0)continue;
		if(t>1)res+=(t+'0');
		res+=voc[i];
		n=n%b;
	}
	return res;
}
int mcxi2i(char c){
	if(c=='m')return 1000;
	else if(c=='c')return 100;
	else if(c=='x')return 10;
	else if(c=='i')return 1;
}
int conv(string s){
	int res=0;
	int n=1;
	for(string::iterator it=s.begin();it!=s.end();it++){
		if((*it)>'0'&&(*it)<='9')n=(*it)-'0';
		else{
			res+=n*mcxi2i(*it);
			n=1;
		}
	}
	return res;
}
void solve(){
	cout<<i2mcxi(conv(s1)+conv(s2))<<endl;
}
int main(){
	int n;
	cin>>n;
	for(;n>0;n--){
		cin>>s1>>s2;
		solve();
	}
	return 0;
}