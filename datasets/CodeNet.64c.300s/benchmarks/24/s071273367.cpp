#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int a[n],b[n],at=0,bt=0;
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
			if(a[i]>b[i]){
				at=at+a[i]+b[i];
			}
			else if(a[i]==b[i]){
				at=at+a[i];
				bt=bt+b[i];
			}
			else{
				bt=bt+a[i]+b[i];
			}
		}
		cout<<at<<" "<<bt<<endl;
	}
    return 0;
}