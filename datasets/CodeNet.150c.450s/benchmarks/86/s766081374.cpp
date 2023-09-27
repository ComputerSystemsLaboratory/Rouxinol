#include <iostream>
#include <cstring>
using namespace std;

int main(){
	long int n,m,p,i,array[100],a,price;
	long double pd,priced,tmpp;
	while(cin >> n >> m >> p && (n != 0 || m != 0 || p != 0)){
		memset(array,0,sizeof(array));
		price = 0;
		tmpp = (double)p;
		pd = (double)(1.0 - (tmpp / 100.0) + 1e-8);
		for(i = 0;i < n;i++){
			cin >> a;
			array[i] = a;
			price += a * 100;
		}
		priced = (double)(price * pd);
		if(array[m-1] != 0){
			cout << (int)(priced / array[m-1]) << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}