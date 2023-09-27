#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

class Saikoro{//サイコロを表すクラス
	private:
	int rab[6];//ラベル
	public:
	void setrab(int rabs[6]);
	void getrab();
	int gettop();
	void N();
	void E();
	void S();
	void W();
};

void Saikoro::setrab(int rabs[6]){
	for(int i=0;i<6;i++)rab[i]=rabs[i];
}
void Saikoro::getrab(){
	for(int i=0;i<6;i++)cout<<rab[i]<<endl;
}
void Saikoro::N(){
	int a;
	a=rab[0];rab[0]=rab[1];rab[1]=rab[5];rab[5]=rab[4];rab[4]=a;

}
void Saikoro::E(){
	int a;
	a=rab[0];rab[0]=rab[3];rab[3]=rab[5];rab[5]=rab[2];rab[2]=a;

}
void Saikoro::S(){
	int a;
	a=rab[0];rab[0]=rab[4];rab[4]=rab[5];rab[5]=rab[1];rab[1]=a;

}
void Saikoro:: W(){
int a;
a=rab[0];rab[0]=rab[2];rab[2]=rab[5];rab[5]=rab[3];rab[3]=a;
}
int Saikoro::gettop(){
	return rab[0];
}


//ITP1_8
int main(){
	int a[6];
	for(int i=0;i<6;i++)cin>>a[i];
	string n;
	cin>>n;
	Saikoro saikoro1;
	saikoro1.setrab(a);
	for(int i=0;i<n.size();i++){
	if(n[i]=='N')saikoro1.N();
	else if(n[i]=='S')saikoro1.S();
	else if(n[i]=='E')saikoro1.E();
	else if(n[i]=='W')saikoro1.W();
	}
	cout<<saikoro1.gettop()<<endl;
return 0;
}