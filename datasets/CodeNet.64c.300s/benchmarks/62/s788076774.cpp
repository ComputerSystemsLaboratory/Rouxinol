#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES // for C++  
#include <cmath> 
void call(int n);
using namespace std;
int main(){
	
	int n,m;
	cin>>n>>m;
	int ar1[n][m];
	int ar2[m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ar1[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin>>ar2[i];
	}
	
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=0;j<m;j++){
			ans=ans+ar1[i][j]*ar2[j];
		}
			cout<<ans<<endl;
	}
	
}
