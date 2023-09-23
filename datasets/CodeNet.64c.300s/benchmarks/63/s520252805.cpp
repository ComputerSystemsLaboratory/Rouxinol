#include<iostream>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)


using namespace std;


int lcd(int a, int b){
	if (a < b) swap(a, b);
	int c;

	while (b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}



int main(){
	int a, b;
	while (cin >> a >> b){
		int c;
		c = lcd(a, b);
		cout << c << " " << a/c*b << endl;
	}
	
}