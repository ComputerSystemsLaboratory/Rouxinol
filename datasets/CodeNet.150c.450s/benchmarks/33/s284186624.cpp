#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

double net_of_tax(int n , int rate){
	double ret , tmp1 , tmp2;
	ret=(double)(n*100)/(rate+100);
	tmp1=floor(ret);
	tmp2=ceil(ret);
	if((floor((double)(tmp1*(rate+100)/100)))!=(double)n) {
		if((floor((double)(tmp2*(rate+100)/100)))!=(double)n){ 
			return ret-1.;
		} else {
			ret=tmp2;
		}
	} else {
		ret=tmp1;
	}
	return ret;
}

int main(){
	double n1 , n2 , tmp, max=0.;
	int x , y , s;
	while(1){
		cin >> x >> y >> s;
		if(x==0&&y==0&&s==0) break;
		for(int i=1 ; i<=s/2 ; ++i){
				n1=net_of_tax(i,x);
				n2=net_of_tax((s-i),x);
				n1=floor((double)((n1*(y+100))/100));
				n2=floor((double)((n2*(y+100))/100));
				if((n1+n2)>max) max=n1+n2;
			}
			cout << max << endl;
			n1=n2=max=0;
		}
	return 0; 
}