#include<iostream>
#include<string>
using namespace std;
void movetoN();
void movetoS();
void movetoE();
void movetoW();
string str;
int frontside,backside,rightside,leftside,upside,downside,yandere;
int main(){
	cin>>upside>>backside>>rightside>>leftside>>frontside>>downside;
	cin>>str;
	for(int i=0;i<str.size();i++){
		switch(str[i]){
		case 'N':
			movetoN();
			break;
		case 'S':
			movetoS();
			break;
		case 'E':
			movetoE();
			break;
		case 'W':
			movetoW();
			break;
		}
	}
	cout<<upside<<endl;
	return 0;
}
void movetoN(){
	yandere=upside;
	upside=backside;
	backside=downside;
	downside=frontside;
	frontside=yandere;
	return;
}
void movetoS(){
	yandere=upside;
	upside=frontside;
	frontside=downside;
	downside=backside;
	backside=yandere;
	return;
}
void movetoE(){
	yandere=upside;
	upside=leftside;
	leftside=downside;
	downside=rightside;
	rightside=yandere;
	return;
}
void movetoW(){
	yandere=upside;
	upside=rightside;
	rightside=downside;
	downside=leftside;
	leftside=yandere;
	return;
}