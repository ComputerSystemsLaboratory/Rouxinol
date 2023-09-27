#include <iostream>

int main(void)
{
	using namespace std;

	int n,x;
	while(1){
		cin >> n;
		cin >> x;
	
		if(n == 0 && x == 0)	break;
		
		int count_comb = 0;
		for(int large1 = 3; large1 <= n; large1++){
			int temp = x - large1;
			for(int large2 = 2; large2 < temp; large2++){
				if((temp - large2 < large2) &&(large2 < large1)) count_comb++;
			} 
		}
		cout << count_comb << endl;
	}	

	return 0;
}