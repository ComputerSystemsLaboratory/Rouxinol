#include<iostream>
using namespace std;

int start = 0;
int stone;

void odd(int n[50], int ppl){
//	cout<<n[0] << " " << n[1] << " " << n[2] << " " << stone << endl;
	if(stone == 0){
//		cout << "Yes" << start << endl;
		stone = n[start];
		n[start] = 0;
		start ++;
			if(start == ppl){
				//cout << "li" << endl;
				start = 0;
			}
	}else{
		int number;
		number = stone/ppl;
		//cout << "--" << number << endl;
		for(int i = 0; i < ppl; i++){
			n[i] += number;
		}
		number = stone % ppl;
		for(int i=0; i < number; i++){
			n[start] ++;
			start++;
			if(start == ppl){
	//			cout << "li" << endl;
				start = 0;
			}
		}
		stone=0;
	}
}


int main(){
	int ppl;
	int hantei = 1;
	int i;
	int original;

	while(cin >> ppl >> stone, ppl){
//	cout<<n[0] << " " << n[1] << " " << n[2] << " " << endl;
		hantei = 1;
	int n[50] = {0};
		start = 0;
		original = stone;
		while(hantei){
			odd(n, ppl);
			for(i = 0; i < ppl; i++){
				if(n[i] == original){
					 hantei = 0;
					 break;
				}

			}
		}
		cout << i << endl; 
	}

}