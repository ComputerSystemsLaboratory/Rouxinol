#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	
	int n;

	while(cin>>n){
		int s=0;
		if(n!=0){
			vector<int> a(n);
			for(int i=0;i<n;i++)
				cin>>a[i];
			sort(a.begin(),a.end());
			a[0]=0;
			a[n-1]=0;
			for(int i=0;i<n;i++)
				s+=a[i];
			cout<<s/(n-2)<<endl;
		}
		else
			break;
	}
	
}