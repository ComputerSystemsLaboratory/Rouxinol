#include <iostream>
using namespace std;
#define MAX 100

int taro[MAX+1];
int hana[MAX+1];

int main(int argc, char const *argv[]){
	int n, m;
	int card1, card2;

	while(cin>>n>>m && (n || m) ){
		int sum1 = 0;
		int sum2 = 0;
		bool flag = false;
		for (int i = 0; i < n; i++){
			cin>>taro[i];
			sum1 += taro[i];
		}
		for (int i = 0; i < m; i++){
			cin>>hana[i];
			sum2 += hana[i];
		}

		int d = (sum2-sum1 == 1) ?  1 : (sum2 - sum1) / 2;
		taro[n] = 101; hana[m] = 101;
		card1 = n; card2 = m;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				int tmp1 = sum1 - taro[i] + hana[j];
				int tmp2 = sum2 + taro[i] - hana[j];
				if (tmp1 == tmp2){
					if ( (hana[j] + taro[i]) < (hana[card2] + taro[card1])){
						card1 = i;
						card2 = j;
						flag = true;
					}
				}
			}
		}
		if (!flag) cout<<"-1"<<endl;
		else cout<<taro[card1]<<" "<<hana[card2]<<endl;

	}
	
	return 0;
}