#include<iostream>
using namespace std;

#define YEAR 365
#define SNUM 3
#define MAXK 30

int main(void){
	int kaidan[MAXK];
	int knum;
	int kyear;

	while(1){
		//init
		for(int i=SNUM; i<MAXK; i++)
			kaidan[i]=0;
		for(int i=0; i<SNUM; i++)
			kaidan[i]=1;
		//in
		cin >> knum;
		if(knum==0)break;

		//calc
		for(int i=0; i<knum; i++){
			for(int k=1; k<=SNUM&&k+i<knum; k++)
				kaidan[i+k] = kaidan[i+k] + kaidan[i];
		}
		kyear = kaidan[knum-1] / (365*10) + 1;

		//out
		cout << kyear << endl;
	}

	return 0;
}