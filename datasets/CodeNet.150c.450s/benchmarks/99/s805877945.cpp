#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string a;
	cin>>n;
	for(int k=0;k<n;k++){
		int answer=0;
		for(int j=0;j<2;j++){
		cin>>a;
		int count=1;
		for(int i=0;i<a.size();i++){
			bool t=true;
			if(a[i]=='m'){
				answer+=count*1000;
				count=1;
				t=false;
			}
			if(a[i]=='c'){
				answer+=count*100;
				count=1;
				t=false;
			}
			if(a[i]=='x'){
				answer+=count*10;
				count=1;
				t=false;
			}
			if(a[i]=='i'){
				answer+=count;
				count=1;
				t=false;
			}
			if(t==true)
				count=a[i]-'0';
		}
		}
		if(answer>=1000&&answer<2000){
			cout<<"m";
			answer-=1000;
		}
		if(answer>=2000){
			cout<<answer/1000<<"m";
			answer%=1000;
		}

		if(answer>=100&&answer<200){
			cout<<"c";
			answer-=100;
		}
		if(answer>=200){
			cout<<answer/100<<"c";
			answer%=100;
		}

		if(answer>=10&&answer<20){
			cout<<"x";
			answer-=10;
		}
		if(answer>=20){
			cout<<answer/10<<"x";
			answer%=10;
		}
		
		if(answer==1){
			cout<<"i";
			answer--;
		}
		if(answer>=2)
			cout<<answer<<"i";
		cout<<endl;
	}
    return 0;
}