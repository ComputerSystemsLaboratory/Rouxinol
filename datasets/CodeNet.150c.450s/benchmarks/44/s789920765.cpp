#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int a[4],b[4],i,j,h,r;
	while( cin >> a[0] ){
		h=0;
		r=0;
		for(i=1;i<4;i++){
			cin >> a[i] ;
		}
		for(i=0;i<4;i++){
			cin >> b[i] ;
		}
		
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(a[i] == b[j]){
					r++;
				}
			}
			if(a[i] == b[i]){
				h++;
				r--;
			}
		}
		cout << h << " " << r << "\n" ;
	}
return 0;
}