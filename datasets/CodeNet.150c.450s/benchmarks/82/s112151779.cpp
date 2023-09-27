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

void ClockwiseTop(struct dice *X){
	int c = X->front;
	X->front  = X->right;
	X->right  = X->back;
	X->back   = X->left;
	X->left   = c;
}

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

int Rotation(struct dice X, int t, int f){
	if(t == X.front ) ClockwiseRight(&X);
	if(t == X.left  ) ClockwiseFront(&X);
	if(t == X.right ) ClockwiseFront(&X), ClockwiseFront(&X), ClockwiseFront(&X);
	if(t == X.back  ) ClockwiseRight(&X), ClockwiseRight(&X), ClockwiseRight(&X);
	if(t == X.bottom) ClockwiseRight(&X), ClockwiseRight(&X);
	if(f == X.left  ) ClockwiseTop(&X), ClockwiseTop(&X), ClockwiseTop(&X);
	if(f == X.right ) ClockwiseTop(&X);
	if(f == X.back  ) ClockwiseTop(&X), ClockwiseTop(&X);
	return X.right;
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
	//???????????°????????????
	int q;
	cin >> q;
	//??????????????????????????????
	int T[24], F[24], R[24];
	for(int i = 0; i < q; i++) cin >> T[i] >> F[i];
	//?????¢?????????????¨??????????
	for(int i = 0; i < q; i++) R[i] = Rotation(X, T[i], F[i]);
	//?????¢??????????????¨?????????
	for(int i = 0; i < q; i++) cout << R[i] << endl;
	return 0;
}