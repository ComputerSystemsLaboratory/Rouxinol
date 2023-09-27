#include<iostream>
using namespace std;

int f(int x){
	return x*x;
}

int main(){
	int d;
	int area=0;
	while(cin >> d){
		int w = 600/d;
		for(int i=0;i<w;i++){
			area += d*f(i*d);
		}
		cout << area << endl;
		area = 0;
	}

}
