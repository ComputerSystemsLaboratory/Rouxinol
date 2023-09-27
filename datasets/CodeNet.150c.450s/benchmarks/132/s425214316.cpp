#include <iostream>
using namespace std;

int stones[51];

int main(){
	while(true){
		for(int i = 0;i<=50;i++)stones[i]=0;
		int wanposi = 0;
		int n,p;
		cin >> n;
		cin >> p;
		if(n==0)break;
		int wan = p;
	
		while(true)
		{
			if(wan!=0){wan--;stones[wanposi]++;}
			else{wan=stones[wanposi];stones[wanposi]=0;}
		
			if(stones[wanposi]==p){break;}
			else if(wanposi<n-1){wanposi++;}
				else wanposi = 0;
		
		}
	cout << wanposi << endl;
	}
	return 0;
}