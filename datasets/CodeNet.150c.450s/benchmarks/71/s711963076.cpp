#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int n;
	
	while(cin>>n){
		
		int m=0;
		
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(i+j+k+l==n)m+=1;
					}
				}
			}
		}
		cout<<m<<endl;
	}
	
	return 0;
}