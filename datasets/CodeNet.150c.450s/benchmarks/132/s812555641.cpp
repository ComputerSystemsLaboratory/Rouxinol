#include<iostream>
using namespace std;

int main(){
	int n, p;
	while(cin >>n >>p){
		if(n == 0 && p == 0) break;
		int utuwa = p, i = 0, kouho[51] = {0};
		while(1){
			if(utuwa != 0){
				utuwa--;
				kouho[i]++;
			} else{
				utuwa += kouho[i];
				kouho[i] = 0;
			}
			if(utuwa == 0 && kouho[i] == p) break;
			if(i >= (n - 1)) i = 0;
			else i++;
		}
		cout <<i <<endl;
	}
	return 0;
}