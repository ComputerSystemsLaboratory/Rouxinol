#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	char week2[7][10] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

	int month,day;
	int sum;

	cin >> month >> day;
	while((month != 0) && (day != 0)){
		sum = 0;
		for(int i=0 ;i < month - 1;i++){
			sum += days[i];
		}
		sum += day;

		switch(sum % 7){
			case 1:
				printf("%s\n",week2[0]);
				break;

			case 2:
				printf("%s\n",week2[1]);
				break;

			case 3:
				printf("%s\n",week2[2]);
				break;

			case 4:
				printf("%s\n",week2[3]);
				break;

			case 5:
				printf("%s\n",week2[4]);
				break;

			case 6:
				printf("%s\n",week2[5]);
				break;

			case 0:
				printf("%s\n",week2[6]);
				break;

		}

		cin >> month >> day;
	}
}