#include<iostream>
#include<vector>

using namespace std;

int suretu[100000];
int cont = 0;
int max_sum = 0;

int ret_maxsum(int n, int k, int wa, bool isBegin)
{
	/*
	int temp = 0;
	int max = 0, cont = 0;
	int wa;							//ツ陳シツ前ツづ個禿アツづつづ個計ツ算ツづ系ツ古つづ個計ツ算ツづ個和
	
	for(int i = 0; i < n-k+1; i++){
		for(int j = 0; j < k; j++){
			temp += suretu[cont+j];
			if(
			printf("suretu%d = %d\n",j,suretu[cont+j]);
		}
		cout << "**" << endl;
		if(temp > max){
			printf("*maxツ更ツ新\n");
			max = temp;
		}
		temp = 0;
		cont++;
	}
	
	return max;
	*/
	
	int temp = 0;
	int i;
	
	if(isBegin == 1){
		for(i = 0; i < k; i++){
			temp += suretu[cont+i];
		}
	}
	else{
		temp += wa + suretu[cont+k-1];
	}
	wa = temp - suretu[cont];
//	printf("temp = %d\nwa = %d\n\n",temp,wa);
	cont++;
	
	if(max_sum < temp){
//		cout << "maxツ更ツ新:" << temp << endl;
		max_sum = temp;
	}
	
	if(cont == n-k+1){
		return max_sum;
	}
	else{
		return ret_maxsum(n, k, wa, 0);
	}
}
	

int main()
{
	for(;;){
		int n,k;
		
		cin >> n;
		cin >> k;
		if(n == 0 && k == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			cin >> suretu[i];
		}
		
		printf("%d\n",ret_maxsum(n, k, 0, 1));
	}
}