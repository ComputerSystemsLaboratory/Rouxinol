#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	int count;
	int i;
	string tmp,foot;
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
	count = 0;
	tmp = "ld";
		for(i = 0 ; i < n ; i++){
			cin >> foot;
			if((tmp == "ld" && foot == "rd")||(tmp == "lu" && foot == "ru")||(tmp == "rd" && foot == "ld")||(tmp == "ru" && foot == "lu")){
				count++;
			}
			tmp = foot;
		}
		cout << count << endl;
		}
		return 0;
}