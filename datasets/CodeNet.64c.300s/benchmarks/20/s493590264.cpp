#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int main(){
	int x;
	while(cin>>x){
		int ans=0;
		for(int i=x;i<=600-x;i+=x){
			ans+=i*i*x;
		}
		cout<<ans<<endl;
	}
}