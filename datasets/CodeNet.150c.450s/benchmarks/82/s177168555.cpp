#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
void dice1();
void dice2();
class DICE{
	int face[6],a;
public:
	void set(int&f,int&f1,int&f2,int&f3,int&f4,int&f5){
		face[0]=f;face[1]=f1;face[2]=f2;face[3]=f3;face[4]=f4;face[5]=f5;
	}
	void N(){
		a=face[0];
		face[0]=face[1];
		face[1]=face[5];
		face[5]=face[4];
		face[4]=a;
	}
	void E(){
		a=face[0];
		face[0]=face[3];
		face[3]=face[5];
		face[5]=face[2];
		face[2]=a;
	}
	void S(){
		a=face[0];
		face[0]=face[4];
		face[4]=face[5];
		face[5]=face[1];
		face[1]=a;
	}
	void W(){
		a=face[0];
		face[0]=face[2];
		face[2]=face[5];
		face[5]=face[3];
		face[3]=a;
	}
	void output(){
		cout<<face[0]<<endl;
	}
	int up(){
		return face[0];
	}
	void turn(){
		a=face[1];
		face[1]=face[3];
		face[3]=face[4];
		face[4]=face[2];
		face[2]=a;
	}
	int front(){
		return face[1];
	}
	int right(){
		return face[2];
	}
};
int main(){
	DICE a;
	dice2();
	return 0;
}
void dice1(){
DICE a;
	int d[6];string str;
	for(int i=0;i<6;++i){
		cin>>d[i];
	}
	a.set(d[0],d[1],d[2],d[3],d[4],d[5]);
	getline(cin,str);
	getline(cin,str);
	for(int i=0;i<str.size();++i){
		if(str[i]=='E'){
			a.E();
		}
		else if(str[i]=='S'){
			a.S();
		}
		else if(str[i]=='W'){
			a.W();
		}
		else if(str[i]=='N'){
			a.N();
		}
	}
	a.output();
	return;
}
void dice2(){
	DICE a;
	int d[6],p,u;
	for(int i=0;i<6;++i){
	cin>>d[i];
	}a.set(d[0],d[1],d[2],d[3],d[4],d[5]);
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>p>>u;
		int k=0;
		while(1){
			k++;
			if(k<=5){
			a.E();
			}
			else{
				a.N();
			}
			if(p==a.up()){
				break;
			}
		}
		k=0;
		while(1){
			k++;
			a.turn();
			if(u==a.front()){
				break;
			}
		}
		cout<<a.right()<<endl;
	}
	return;
}