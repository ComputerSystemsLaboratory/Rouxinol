#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n;
	int sa=0, sb=0;
	int a, b;
	while (1){
		cin >> n;
		if (n == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (a>b){
				sa = sa + a + b;
			}
			else if (a < b){
				sb = sb + a + b;
			}
			else{
				sa = sa + a;
				sb = sb + b;
			}
		}
		cout << sa << " "<< sb<<endl;
		sa=0;
		sb=0;

	}
	return 0;
}