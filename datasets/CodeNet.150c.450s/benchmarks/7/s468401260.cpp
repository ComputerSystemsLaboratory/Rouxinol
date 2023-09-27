#include<iostream>

using namespace std;

//??\?????????
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int str,mt[10];
	int i;
	
	for(i=0;i<10;i++){
		cin >> str;
		mt[i]=str;
	}
	
	// ????????????
	int num = 1;
	while(num<=3){
		str = mt[num-1];
		for(i=num;i<10;i++){
			if(str<mt[i]){
				str = mt[i];
				swap(mt[num-1],mt[i]);
			}
		}
		num++;
	}
	
	cout << mt[0] << "\n";
	cout << mt[1] << "\n";
	cout << mt[2] << "\n";
	
	return 0;
}