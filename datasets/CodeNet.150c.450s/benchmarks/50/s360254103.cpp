#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){
	
	int n;
	
	int s[6]={500,100,50,10,5,1};
	while(cin>>n,n!=0){
	int x=0;
	n=1000-n;
	int k=0;
	while(n>0){
		if(n-s[k]>=0){
			n=n-s[k];
			x++;
		}
		else
			k++;
	}
	
	cout<<x<<endl;
	}

}