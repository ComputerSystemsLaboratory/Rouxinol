#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
typedef struct{
	int head;
	int tail;
	int right;
	int left;
	int up;
	int down;
	void s() {
		int buf;
		buf = tail;
		tail = down;
		down = head;
		head = up;
		up = buf;
	}
	void n() {
		int buf;
		buf = tail;
		tail = up;
		up = head;
		head = down;
		down = buf;
	}
	void e() {
		int buf;
		buf = head;
		head = left;
		left = tail;
		tail = right;		
		right = buf;
	}
	void w() {
		int buf;
		buf = head;
		head = right;
		right = tail;
		tail = left;
		left = buf;
	}
} dice;
int main() {
	int a[6];
	string str;
	dice d;
	rep(i,6) {
		cin >> a[i];
	}
	cin >> str;
	d.head = a[0];
	d.down = a[1];
	d.right = a[2];
	d.left = a[3];
	d.up = a[4];
	d.tail = a[5];
	rep(i,str.length()) {
		if(str[i] == 'S') d.s();
		else if(str[i] == 'N') d.n();
		else if(str[i] == 'E') d.e();
		else if(str[i] == 'W') d.w();
	}
	cout << d.head << endl;
	return 0;
}
	