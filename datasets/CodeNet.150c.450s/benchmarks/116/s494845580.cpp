#include <iostream>
using namespace std;

int main(){
	int n,k,max,buf,*a;
	
	while(1){
		cin >> n >> k;
		
		if(n || k){
			max = buf = 0;
			
			a = new int[n];
			
			for(int i = 0; i < n; i++){
				cin >> a[i];
			}
			
			for(int i = 0; i < k-1; i++){
				buf += a[i];
			}
			
			for(int i = k-1; i < n; i++){
				buf += a[i];
				max = (max < buf)?buf:max;
				buf -= a[i-k+1];
			}
			
			cout << max << endl;
		}else{
			break;
		}
	}
	
	return 0;
}