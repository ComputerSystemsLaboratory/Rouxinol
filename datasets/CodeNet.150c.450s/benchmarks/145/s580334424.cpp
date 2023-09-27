#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	string ss;
	getline(cin,ss);
	int num=0;
	queue<string> spot;
	string str="";
	for(int i=0;i<=ss.size();i++){
		if(!isalpha(ss[i]) || ss[i]=='\0'){
			if(i>0){
				spot.push(str);
				str="";
			}
		}else{
			str+=ss[i];
		}
	}
	int often[spot.size()];
	int ll=spot.size();
	string ansoften="",anslen="";
	int flg=0;
	int mark[ll];
	for(int i=0;i<ll;i++){mark[i]=0;}
	for(int a=0;a<ll;a++){
		if(mark[a]==1){
			often[a]=0;
		}else{
			string now=spot.front();
			spot.pop();
			for(int j=0;j<ll;j++){
				string rig=spot.front();
				spot.pop();
				if(now==rig){
					often[a]++;
					mark[j]=1;
				}
				if(flg==0 && rig.size()>anslen.size())anslen=rig;
				spot.push(rig);
			}
			flg++;
			spot.push(now);
		}
	}
	int aa=0;
	for(int b=0;b<ll;b++){
		if(aa<often[b])ansoften=spot.front();
		spot.pop();
	}
	cout<<ansoften<<" "<<anslen<<endl;
	return 0;
}