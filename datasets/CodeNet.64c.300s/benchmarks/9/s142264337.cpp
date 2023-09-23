#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
typedef long long int ll;


using namespace std;

ll up(ll rent){
	if(rent%1000!=0)return (rent/1000*1000+1000);
	else return rent;
}

int main(){
	ll rent=10*10000;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		rent*=1.05;
		rent=up(rent);
	}
	cout<<rent<<endl;
	return 0;
}