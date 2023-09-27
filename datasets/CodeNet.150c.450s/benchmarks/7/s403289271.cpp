#include<iostream>

using namespace std;

int main(void){

	int h;
	int i;
	int best[3]={0,0,0};

	for(i=0;i<10;i++){

		cin>>h;

		if(best[0] < h ){
			best[2] = best[1];
			best[1] = best[0];
			best[0] = h;
		}
		else if(best[1] < h){
			best[2] = best[1];
			best[1] = h;
		}else if(best[2] < h){
			best[2] =h;
		}
	}

	cout << best[0] << endl << best[1] << endl << best[2] << endl;

	return 0;
}