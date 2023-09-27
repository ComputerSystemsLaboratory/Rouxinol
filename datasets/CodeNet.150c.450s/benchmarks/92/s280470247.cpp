#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	while(cin >>a >>b){
		int tmp=a+b;
		for(int i=0; ;i++){
			tmp /= 10;
			if(tmp==0){
				cout << i+1 << endl;
				break;
			}
		}
	}

    return 0;
}