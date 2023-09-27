#include <iostream>
using namespace std;

class Dice
{
public:
	int top;
	int front;
	int right;
	int left;
	int back;
	int bottom;
	Dice(int a,int b,int c,int d,int e,int f){
		top = a;
		front = b;
		right = c;
		left = d;
		back = e;
		bottom = f;
	}
	void rotateN(){
		int t = top;
		top = front;
		front = bottom;
		bottom = back;
		back = t;
	}
	void rotateE(){
		int t = top;
		top = left;
		left = bottom;
		bottom = right;
		right = t;
	}
	void rotateS(){
		int t = top;
		top = back;
		back = bottom;
		bottom = front;
		front = t;
	}
	void rotateW(){
		int t = top;
		top = right;
		right = bottom;
		bottom = left;
		left = t;
	}
};

int main()
{
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	Dice obj(a,b,c,d,e,f);
	int q;
	cin >> q;
	for(int i=0; i<q; i++){
		int x,y;
		cin >> x >> y;
		Dice p = obj;
		if(y == p.top){
			p.rotateS();
		}else if(y == p.right){
			p.rotateW();
			p.rotateS();
		}else if(y == p.left){
			p.rotateE();
			p.rotateS();
		}else if(y == p.back){
			p.rotateS();
			p.rotateS();
		}else if(y == p.bottom){
			p.rotateN();
		}
		if(x == p.right){
			p.rotateW();
		}else if(x == p.left){
			p.rotateE();
		}else if(x == p.bottom){
			p.rotateE();
			p.rotateE();
		}
		cout << p.right << endl;
	}
	return 0;
}