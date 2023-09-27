#include <iostream>
using namespace std;

int main(void)
{
	int num,n,max,min,sum,ave,i;
	
	while(cin >> num){
		if(num == 0){
			break;
		}

		sum = 0;
		ave = 0;
		for(i = 0; i < num; i++){
			cin >> n;
			if(i == 0){
				max = n;
				min = n;
			}else{
				if(max < n){
					max = n;
				}
				if(min > n){
					min = n;
				}
			}
			sum += n;
		}
		sum = sum - max - min;
		ave = sum / (num - 2);
		cout << ave<< endl;
	}

	return 0;
}