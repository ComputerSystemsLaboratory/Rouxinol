#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

	int win(string a,string b){//aが勝てば0,bが勝てば1,引き分けなら2
		int flag=-1;
		for(int i=0;i<min(a.size(),b.size());i++){
			if(a[i]==b[i])continue;
			if(a[i]-'a'>b[i]-'a')return 0;
			else if(a[i]-'a'<b[i]-'a')return 1;
		}
		if(a.size()==b.size())return 2;
		else if(a.size()!=b.size()){
			if(a.size()>b.size())return 0;
			else return 1;
		}
	}
int main(){
	string a,b;//aが太郎bが花子
	int n;
	int t=0,h=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a>>b;
		if(win(a,b)==0)t+=3;
		else if(win(a,b)==1)h+=3;
		else if(win(a,b)==2){t+=1;h+=1;}
	}
	printf("%d %d\n",t,h);
return 0;
}