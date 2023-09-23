#include<iostream>
using namespace std;

int main(){
	int n=1;
	int a = 0;
	int f = 0;
	int quest[10000] = { 1 };
	double ans[10000];
	int checkc = 0;
	int i = 4;
	double check[3] = { 1, 2, 4 };
	
	do{
		cin >> quest[a];
		a++;
	} while (quest[a-1] != 0);
	while (a > f+1){
		switch (quest[f]){
		case 1:
			ans[f] = 1;
			break;
		case 2:
			ans[f] = 2;
			break;
		case 3:
			ans[f] = 4;
			break;
		default:
			while (quest[f] >= i){
				ans[f] = check[0] + check[1] + check[2];
				i++;
				check[0] = check[1];
				check[1] = check[2];
				check[2] = ans[f];
			}
		}

		ans[f] = ans[f] / 3650;
		checkc = (int)(ans[f]);

		if (ans[f] > (double)(checkc)){
			checkc++;
		}
		if (ans[f] != 0){
			cout << checkc << endl;
		}
		else{
			cout << endl;
		}
		f++;
	}
	return 0;
}