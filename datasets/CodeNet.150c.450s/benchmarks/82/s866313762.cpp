#include <iostream>
using namespace std;
class DICE{
	int tmp , tmp2;
	public:
	int s[6];
	void turnE();
	void turnN();
	void turnS();
	void turnW();
	void turnR();
	void turnL();
	void SetT(int a , int b);
	void SetS(int a);
} ;

void DICE::turnE(){
	tmp=s[0];
	s[0]=s[3];
	s[3]=s[5];
	s[5]=s[2];
	s[2]=tmp;
}

void DICE::turnN(){
	tmp=s[0];
	s[0]=s[1];
	s[1]=s[5];
	s[5]=s[4];
	s[4]=tmp;
}

void DICE::turnS(){
	tmp=s[0];
	s[0]=s[4];
	s[4]=s[5];
	s[5]=s[1];
	s[1]=tmp;
}

void DICE::turnW(){
	tmp=s[0];
	s[0]=s[2];
	s[2]=s[5];
	s[5]=s[3];
	s[3]=tmp;
}

void DICE::turnR(){
	tmp=s[1];
	s[1]=s[2];
	s[2]=s[4];
	s[4]=s[3];
	s[3]=tmp;
}

void DICE::turnL(){
	tmp=s[1];
	s[1]=s[3];
	s[3]=s[4];
	s[4]=s[2];
	s[2]=tmp;
}

void DICE::SetS(int a){
	if(s[2]==a) {
		turnR();
	} else if (s[3]==a){
		turnL();
	} else if (s[4]==a){
		turnR();
		turnR();
	}
}

void DICE::SetT(int a , int b){ //?????¢??¨?????¢??????????????¢????¨??????????
	tmp=a;
	tmp2=b;
	for(int i=0;i<6 ; i++){
		if(s[i]==a){
			switch(i){
				case 0:
					SetS(b);
					break;
				case 1:
					turnN();
					SetS(b);
					break;
				case 2:
					turnW();
					SetS(b);
					break;
				case 3:
					turnE();
					SetS(b);
					break;
				case 4:
					turnS();
					SetS(b);
					break;
				case 5:
					turnN();
					turnN();
					SetS(b);
				
			}
		}
	}	
}



int main(){
	DICE d;
	int q;
	int top,s1;
	cin>>d.s[0]>>d.s[1]>>d.s[2]>>d.s[3]>>d.s[4]>>d.s[5];
	cin>>q;
	int *a = new int[q];
	for(int i=0 ; i<q ; i++){
		cin >> top >> s1;
		d.SetT(top , s1);
		a[i]=d.s[2];
	}
	for(int i=0 ; i<q ; i++){
		cout << a[i] << endl;
	}
	delete [] a;
	return 0;
}