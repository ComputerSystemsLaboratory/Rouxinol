#include <iostream>

using namespace std;

int main()
{
	int i,j,n;
	
	
	while(cin >> n){
	int count = 0;
	bool flag[n+1];
		
		for(i=2;i<n+1;i++) flag[i] = true;
		
		for(i=2;i<n+1;i++){
			if(!flag[i]){
				continue;
			}
			for(j=2*i;j<n+1;j+=i){
				flag[j] = false;
			}
		}
		
		// 個数を走査
		for(i=2;i<n+1;i++){
			if(flag[i]==true){
				count++;
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}