#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
using namespace std;
int maxsum(int x,vector<long int> a){
	
	vector<long int> s(x+1,0);
	long int max;
	for(int i=1;i<=x;i++){
		if(s[i-1]<0&&s[i-1]<a[i])
			s[i]=a[i];
		else
			s[i]=s[i-1]+a[i];
	}
	max = *max_element(&s[1],&s[x+1]);
	return max;
	
}

int main(){
	
	int n;
	while(cin>>n,n!=0){
		
		vector<long int> a(n+1,0);
		
		for(int i=1;i<=n;i++)
			cin>>a[i];
		
		cout<<maxsum(n,a)<<endl;
	}
	
 	
}