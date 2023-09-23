#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int e,m,a;
	
	while(1){
		cin >> e;
		m=e;
		if(e==0){
			return 0;
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m-i;j++){
				a=e-i*(i-1)-j*(j-1)*(j+1);
				if((a>=i+j)&&(m>a)&&(a>=0)){
					m=e-i*(i-1)-j*(j-1)*(j+1);
				}
				if(a<0){
					break;
				}
			}
		}
		cout << m <<"\n";
	}
			
return 0;
}