#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
int n;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	while(cin>>n){
		
		int counter=0;
		for(int i=0;i<=9;i++){
			for(int k=0;k<=9;k++){
				for(int j=0;j<=9;j++){
					for(int p=0;p<=9;p++){
						if(n==i+k+j+p){
							counter++;
							//break;
					}
				}
			}
		}
	}
		cout<<counter<<"\n";
		
	}
	

	return 0;
}