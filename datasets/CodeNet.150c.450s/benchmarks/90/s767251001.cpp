#include <iostream>
#define NUM 10000


using namespace std;

int main(void){
	int times[NUM];
	int i, n;
	int max;

	for(i=0;i<NUM;i++){
		times[i] = 0;
	}

	while(cin >> n){
		times[n]++;
	}

	max = 0;
	for(i=0;i<NUM;i++){
		if(max < times[i]){
			max = times[i];
		}
	}

	for(i=0;i<NUM;i++){
		if(max == times[i]){
			cout << i << endl;
		}
	}
	return 0;
}