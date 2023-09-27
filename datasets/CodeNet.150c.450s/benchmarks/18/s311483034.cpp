#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int main(){
	int num,tmp,money=100000;
	cin>>num;
	for(int i=0;i<num;i++){
		money*=1.05;
		tmp=money%1000;
		if(tmp>0) money=money-tmp+1000; 
	}
	cout<<money<<endl;
}