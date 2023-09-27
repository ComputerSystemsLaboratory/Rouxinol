#include<iostream>
using namespace std;
int main()
{
int W,H,x,y,r;
cin >> W >> H >> x >> y >> r;

if(x<-100||100<x){
	cout << "エラー" << endl;
	return 0;
}

if(y<-100||100<y){
       cout<<"エラー"<<endl;
       return 0;
}

if(W<0||100<W){
       cout<<"エラー"<<endl;
       return 0;
}

if(H<0||100<H){
       cout<<"エラー"<<endl;
       return 0;
}

if(r<0||100<r){
       cout<<"エラー"<<endl;
       return 0;
}

int a=0,b=0;
if(x-r<0||x+r>W){
	//cout << "No" << endl;
       a=1;
}

if(x-r>=0&&x+r<=W){
	//cout << "Yes" << endl;
       a=2;
}
if(y-r<0||y+r>H){
       //cout << "No" << endl;
       b=1;
}
if(y-r>=0&&y+r<=H){
       //cout << "Yes" <<endl;
       b=2;
}

if(a==1||b==1){
       cout << "No" <<endl;
}
if(a==2&&b==2){
       cout << "Yes" <<endl;
}

return 0;
}