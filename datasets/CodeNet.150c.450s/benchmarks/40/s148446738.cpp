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

struct dice ClockwiseTop(struct dice X){
	struct dice Y;
	Y.top    = X.top;
	Y.front  = X.right;
	Y.left   = X.front;
	Y.right  = X.back;
	Y.back   = X.left;
	Y.bottom = X.bottom;
	return Y;
}

struct dice ClockwiseFront(struct dice X){
	struct dice Y;
	Y.top    = X.left;
	Y.front  = X.front;
	Y.left   = X.bottom;
	Y.right  = X.top;
	Y.back   = X.back;
	Y.bottom = X.right;
	return Y;
}

struct dice ClockwiseRight(struct dice X){
	struct dice Y;
	Y.top    = X.front;
	Y.front  = X.bottom;
	Y.left   = X.left;
	Y.right  = X.right;
	Y.back   = X.top;
	Y.bottom = X.back;
	return Y;
}

struct dice ClockwiseLeft(struct dice X){
	X = ClockwiseRight(X);
	X = ClockwiseRight(X);
	X = ClockwiseRight(X);
	return X;
}

struct dice ClockwiseBack(struct dice X){
	X = ClockwiseFront(X);
	X = ClockwiseFront(X);
	X = ClockwiseFront(X);
	return X;
}

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
		if(Rotation[i] == 'N') X = ClockwiseRight(X);
		if(Rotation[i] == 'E') X = ClockwiseFront(X);
		if(Rotation[i] == 'S') X = ClockwiseLeft(X);
		if(Rotation[i] == 'W') X = ClockwiseBack(X);
	}
	//?????¢??????????????¨?????????
	cout << X.top << endl;
	return 0;
}