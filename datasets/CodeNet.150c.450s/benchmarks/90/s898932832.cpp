#include <iostream>
#include <cmath>
using namespace std;


//0028
int main(){
	int x,max_freq=0;
	int digit[101]={0};
	

	while(cin >> x ){
		
		max_freq = max(max_freq, ++digit[x]);
		
	}
		for(int i=0; i<101; ++i){
			if(digit[i]==max_freq){
				cout << i << endl;
			}
		}


}