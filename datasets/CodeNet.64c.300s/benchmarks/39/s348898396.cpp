#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
 
using namespace std;
 
 
// cin >>
// cout <<
int main(){
    int in=0;
	int out;
    while(scanf("%d",&in)!=EOF){
    out=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(i+j+k+l==in){
						out++;  
						}   
					}
				}
			}
		}
		printf("%d\n",out);
    }
    
     
    return 0;
}