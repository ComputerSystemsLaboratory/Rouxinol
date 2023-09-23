#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int n;
int count[100];
int max_number=0;

int main(){
	memset(count,0,sizeof(count));
	while(cin >> n){
		count[n - 1] += 1;
	}

	//?????§?????°????????????
	for(int i=0;i<100;i++){
		if(count[i] > max_number){
			max_number = count[i];
		}
	}

	//????????????
	for(int i=0;i<100;i++){
		if(count[i] == max_number){
			cout << i+1 << endl;
		}
	}
}