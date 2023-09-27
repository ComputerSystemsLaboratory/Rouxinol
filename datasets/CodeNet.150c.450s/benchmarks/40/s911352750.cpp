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

void ClockwiseFront(struct dice *X){
	int c = X->top;
	X->top    = X->left;
	X->left   = X->bottom;
	X->bottom = X->right;
	X->right  = c;
}

void ClockwiseRight(struct dice *X){
	int c = X->top;
	X->top    = X->front;
	X->front  = X->bottom;
	X->bottom = X->back;
	X->back   = c;
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
		if(Rotation[i] == 'N') ClockwiseRight(&X);
		if(Rotation[i] == 'E') ClockwiseFront(&X);
		if(Rotation[i] == 'S') ClockwiseRight(&X), ClockwiseRight(&X), ClockwiseRight(&X);
		if(Rotation[i] == 'W') ClockwiseFront(&X), ClockwiseFront(&X), ClockwiseFront(&X);
	}
	//?????¢??????????????¨?????????
	cout << X.top << endl;
	return 0;
}