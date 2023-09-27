#include<iostream>
#include<string>
using namespace std;

struct dice{
	int top;
	int front;
	int left;
	int right;
	int back;
	int bottom;
};

int main(){
	//????????????????????¢?????°????????\?????????
	struct dice X;
	cin >> X.top;
	cin >> X.front;
	cin >> X.right;
	cin >> X.left;
	cin >> X.back;
	cin >> X.bottom;
	//?????¢??????????????\?????????
	string Rotation;
	cin >> Rotation;
	//????????????????????¢?????????
	for(int i = 0; i < Rotation.size(); i++){
		if(Rotation[i] == 'N'){
			struct dice Y;
			Y.top    = X.front;
			Y.front  = X.bottom;
			Y.left   = X.left;
			Y.right  = X.right;
			Y.back   = X.top;
			Y.bottom = X.back;
			X = Y;
		}
		if(Rotation[i] == 'E'){
			struct dice Y;
			Y.top    = X.left;
			Y.front  = X.front;
			Y.left   = X.bottom;
			Y.right  = X.top;
			Y.back   = X.back;
			Y.bottom = X.right;
			X = Y;
		}
		if(Rotation[i] == 'S'){
			for(int j = 0; j < 3; j++){
				struct dice Y;
				Y.top    = X.front;
				Y.front  = X.bottom;
				Y.left   = X.left;
				Y.right  = X.right;
				Y.back   = X.top;
				Y.bottom = X.back;
				X = Y;
			}
		}
		if(Rotation[i] == 'W'){
			for(int j = 0; j < 3; j++){
				struct dice Y;
				Y.top    = X.left;
				Y.front  = X.front;
				Y.left   = X.bottom;
				Y.right  = X.top;
				Y.back   = X.back;
				Y.bottom = X.right;
				X = Y;
			}
		}
	}
	//?????¢??????????????¨?????????
	cout << X.top << endl;
	return 0;
}