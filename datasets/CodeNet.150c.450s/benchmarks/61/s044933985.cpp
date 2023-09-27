#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(){
	
	int n,a,b,c,x,i,fm;
	int ril[100];
	
	
	while(1){
		
		for(i=0;i<100;i++)ril[i]=0;
		fm=0;
		
		
		cin >> n >> a >> b >> c >> x;
		
		if(n==0)break;
		
		for(i=0;i<n;i++)cin >> ril[i];
		
		for(i=0;i<n;i++){
			
			if(i==0 && ril[i]==x) continue;
			
			while(fm>-1){
				
				x=(a*x+b)%c;
				fm++;
				if(fm==10001)fm=-1;
								
				if(ril[i]==x){
					break;
				}
				
			}
			
		}
		
		cout << fm << endl;
		
	
	}
	
	return 0;
}