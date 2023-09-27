#include <iostream>

using namespace std;

int main(){
	int n,p;
	int i=0;
	int data[50];
	int allp;
	while(cin >> n >> p, n+p){
		for(int j=0; j < n; j++){
			data[j]=0;	
		}
		i = 0;
		allp = p;
		while(1){
			
			if(p > 0){
				p--;
				data[i]++;
			}
			else{
				p = data[i];
				data[i] = 0;
			}
			if(allp == data[i]) break;
			i++;
			if(i == n) i = 0;
		}
		cout << i << endl;
	}	
}