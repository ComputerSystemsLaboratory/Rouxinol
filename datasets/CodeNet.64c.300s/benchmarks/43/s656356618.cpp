#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;
string str2;
int main(){
	int x[8],i,ans1=0,ans2=0;
	for(i=0;i<8;i++){
		cin>>x[i];
	}
	for(i=0;i<8;i++){
		if(i==0||i==1||i==2||i==3){
			ans1+=x[i];
		}else{
			ans2+=x[i];
		}
	}
	if(ans1<ans2){
		cout<<ans2<<endl;
	}else{
		cout<<ans1<<endl;
	}
	return 0;

}