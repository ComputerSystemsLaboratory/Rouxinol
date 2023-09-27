#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	int n, p;
	
	while(true){
		cin >> n >> p;
		if(n == 0){
			break;
		}
		int cup = p;
		
		int num[100];
		
		int ans = -1;
		
		for(int i = 0; i < n; i++){
			num[i] = 0;
		}
		
		while(true){
			for(int i = 0; i < n; i++){
				if(cup != 0){
					cup--;
					num[i]++;
					if(num[i] == p){
						ans = i;
						break;
					}
				}else{
					cup = num[i];
					num[i] = 0;
				}
				//cout << cup << " ";
			}
			if(ans != -1){
				break;
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}