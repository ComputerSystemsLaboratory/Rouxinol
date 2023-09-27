#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a[100],x,p,s;
	while(1){
		cin >> n >> x >> p;
		if((n==0)&&(x==0)&&(p==0)){
			return 0;
		}
		s=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			s+=a[i];
		}
		if(a[x-1]==0){
			s=0;
		}
		else{
			s=s*(100-p)/a[x-1];
		}
		cout << s <<"\n";	
	}
return 0;
}