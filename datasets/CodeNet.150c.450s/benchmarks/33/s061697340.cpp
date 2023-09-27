#include<iostream>
using namespace std;

int main(){
	int prev, next, oldsum, max=0;
	cin >> prev >> next >> oldsum;
	while(!(prev==0 && next == 0 && oldsum == 0)){
		for(int i=1; i<=oldsum; i++){
			for(int j=1; j<=oldsum; j++){
				if((i+i*prev/100)+(j+j*prev/100) == oldsum){
					if(max < (i+i*next/100)+(j+j*next/100)){
						max=(i+i*next/100)+(j+j*next/100);
					}
				}
			}
		}
		cout << max << endl;
		max=0;
		cin >> prev >> next >> oldsum;
	}

}