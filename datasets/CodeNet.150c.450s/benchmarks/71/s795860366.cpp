#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,sum;
	while(cin >> n){
		sum=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(i+j+k+l==n){
							sum++;
						}
					}
				}
			}
		}
		cout << sum <<"\n";
	}
return 0;
}