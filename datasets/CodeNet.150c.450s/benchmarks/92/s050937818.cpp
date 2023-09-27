#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
int main(){
	int x,y;
	while(cin>>x>>y){
		int sum=x+y;
		cout<<(int)log10(sum)+1<<endl;
	}
}