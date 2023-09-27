#include<iostream>

using namespace std;

class DICE{
	int tmp, tmp2;
public:
	int x[6];
	void nextN();
	void nextE();
	void nextW();
	void nextS();
	void nextR();
	void nextL();
	void SetT(int a,int b);
	void SetS(int a);
};

void DICE::nextN(){
	tmp=x[0];
	x[0]=x[1];
	x[1]=x[5];
	x[5]=x[4];
	x[4]=tmp;
}

void DICE::nextE(){
	tmp=x[0];
	x[0]=x[3];
	x[3]=x[5];
	x[5]=x[2];
	x[2]=tmp;
}

void DICE::nextW(){
	tmp=x[0];
	x[0]=x[2];
	x[2]=x[5];
	x[5]=x[3];
	x[3]=tmp;
}

void DICE::nextS(){
	tmp=x[0];
	x[0]=x[4];
	x[4]=x[5];
	x[5]=x[1];
	x[1]=tmp;
}

void DICE::nextR(){
	tmp=x[1];
	x[1]=x[2];
	x[2]=x[4];
	x[4]=x[3];
	x[3]=tmp;
}

void DICE::nextL(){
	tmp=x[1];
	x[1]=x[3];
	x[3]=x[4];
	x[4]=x[2];
	x[2]=tmp;
}

void DICE::SetS(int a){
	if(x[2]==a) {
		nextR();
	}else if(x[3]==a){
		nextL();
	}else if(x[4]==a){
		nextR();
		nextR();
	}
}

void DICE::SetT(int a, int b){
	tmp=a;
	tmp2=b;
	for(int i=0; i<6; i++){
		if(x[i]==a){
			switch(i){
				case 0:
					SetS(b);
					break;
				case 1:
					nextN();
					SetS(b);
					break;
				case 2:
					nextE();
					SetS(b);
					break;
				case 3:
					nextW();
					SetS(b);
					break;
				case 4:
					nextS();
					SetS(b);
					break;
				case 5:
					nextN();
					nextN();
					SetS(b);
			}
		}
	}
}



int main(){
	DICE d;
	int q;
	int top,x1;
	cin>>d.x[0]>>d.x[1]>>d.x[2]>>d.x[3]>>d.x[4]>>d.x[5];
	cin>>q;
	int *a = new int[q];
	for(int i=0 ; i<q ; i++){
		cin >> top >> x1;
		d.SetT(top , x1);
		a[i]=d.x[2];
	}
	for(int i=0 ; i<q ; i++){
		cout << a[i] << endl;
	}
	delete [] a;
	return 0;
}