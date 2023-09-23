#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int cards[52];
	rep(i, 0, 52) {
		cards[i] = 1;
	}
	rep(i, 0, n) {
		char mark;
		int number;
		cin >> mark >> number;
		switch(mark){
		case 'S': cards[number-1] = 0; break;
		case 'H': cards[number + 12] = 0; break;
		case 'C': cards[number + 25] = 0; break;
		case 'D': cards[number + 38] = 0; break;
		}
	}
	rep(i, 0, 52) {
		if (cards[i] == 1) {
			switch (i / 13) {
			case 0:cout << "S " << i + 1 << endl; break;
			case 1:cout << "H " << i-12 << endl; break;
			case 2:cout << "C " << i-25 << endl; break;
			case 3:cout << "D " << i-38 << endl; break;
			}
		}
	}

}