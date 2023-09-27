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
	int getR(int ue,int mae);//右を得る関数
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
int Saikoro::getR(int ue,int mae){
	
	if(ue==rab[0]){
		if(mae==rab[1])return rab[2];
		if(mae==rab[2])return rab[4];
		if(mae==rab[4])return rab[3];
		if(mae==rab[3])return rab[1];
}
	if(ue==rab[1]){
		if(mae==rab[5])return rab[2];
		if(mae==rab[2])return rab[0];
		if(mae==rab[0])return rab[3];
		if(mae==rab[3])return rab[5];
	}
	if(ue==rab[2]){
		if(mae==rab[4])return rab[0];
		if(mae==rab[0])return rab[1];
		if(mae==rab[1])return rab[5];
		if(mae==rab[5])return rab[4];
	
	}
	if(ue==rab[3]){
		if(mae==rab[0])return rab[4];
		if(mae==rab[4])return rab[5];
		if(mae==rab[5])return rab[1];
		if(mae==rab[1])return rab[0];
	}
	if(ue==rab[4]){
		if(mae==rab[0])return rab[2];
		if(mae==rab[2])return rab[5];
		if(mae==rab[5])return rab[3];
		if(mae==rab[3])return rab[0];
	
}
	if(ue==rab[5]){
		if(mae==rab[1])return rab[3];
		if(mae==rab[3])return rab[4];
		if(mae==rab[4])return rab[2];
		if(mae==rab[2])return rab[1];
	}
	
}
//ITP1_8Dice_1
/*int main(){
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
}*/
int main(){
	int a[6];
	for(int i=0;i<6;i++)cin>>a[i];
	Saikoro saikoro1;
	saikoro1.setrab(a);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	int ue,mae;
	cin>>ue>>mae;
	cout<<saikoro1.getR(ue,mae)<<endl;
	}
return 0;
}