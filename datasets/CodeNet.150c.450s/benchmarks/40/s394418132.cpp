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
	string s;
	cin >> s;
	int l = s.length();
	for(int i=0; i<l; i++){
		switch(s[i]){
			case 'N': obj.rotateN(); break;
			case 'E': obj.rotateE(); break;
			case 'S': obj.rotateS(); break;
			case 'W': obj.rotateW(); break;
		}
	}
	cout << obj.top << endl;
	return 0;
}