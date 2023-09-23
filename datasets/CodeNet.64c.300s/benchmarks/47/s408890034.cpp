#include<iostream>
using namespace std;
int main(){
	int times[101]={0};
	int num;
	while(cin >> num){
		times[num]++;
	}
	int maxtimes = 0;
	for(int i = 0;i < 101;i++){
		if(times[i] > maxtimes) maxtimes = times[i];
	}
	int maxnum[101]={0};
	int ptr=0;
	for(int i = 0; i < 101; i++){
		if(times[i]==maxtimes){
			maxnum[ptr++] = i;
		}
	}
	for(int i=0; i< ptr; i++){
		cout << maxnum[i] << endl;
	}
	return 0;
}