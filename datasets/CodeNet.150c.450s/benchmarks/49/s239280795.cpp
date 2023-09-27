#include <iostream>

using namespace std;
int main(){
	int zero;
	while(1){
		
		int N;
		int* score;
		int S = 0;
		int max = 0;
		int min = 0;
	
		cin >> N;
		
		if(N == 0){
			return 0;
		}
		
		score = new int[N];
		for(int i=0; i<N; ++i){
			cin >> score[i];
			S += score[i];
			
			if( i == 0 ){
				max = min = score[i];
			}
		
			if( max < score[i] ){
				max = score[i];
			}
			if( min > score[i] ){
				min = score[i];
			}
		}
		S -= max;
		S -= min;
	
		cout << (int)S/(N-2) << endl;

		delete[] score;
	}

}