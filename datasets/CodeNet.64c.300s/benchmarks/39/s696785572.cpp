#include<iostream>
using namespace std;

int main(){
	int num, cou = 0;
	
	while(cin >>num){
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				for(int k = 0; k < 10; k++){
					for(int l = 0; l < 10; l++){
						if((i + j + k + l) == num) cou++;
					}
				}
			}
		}
		cout <<cou<<endl;
		cou = 0;
	}
	
	return 0;
}