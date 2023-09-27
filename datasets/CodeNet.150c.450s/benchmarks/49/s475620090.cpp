#include<iostream>
using namespace std;

int main(){
	while(1){
				int n,s,t,max,min,sum = 0;
				cin >> n;
				if(n == 0)break;
				else{
					cin >> s;
					max = min = sum = s;
					for(int i = 0; i < (n - 1);++i){
						cin >> t;
						if( t > max ){ max = t;}
						if( t < min ){ min = t;}
						sum += t;
					}
					cout << (sum - max - min) / (n - 2) << endl;
				}

	}
	return 0;
}