#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<sstream>
#include<stack>
#include<map>
using namespace std;
#define pd pair<double,double>

	int main(){
	int d;
	while(cin>>d){
	int ans=0;
		for(int i=1;i<600/d;i++){
			ans=ans+d*pow(d*i,2);
		}
		cout<<ans<<endl;
	}
    return 0;
}