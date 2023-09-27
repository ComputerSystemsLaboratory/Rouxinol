#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int bubble_sort(int N, char suits[],int numbers[]){
	
	char tmp_c;
	int tmp_i;
	
	for(int i=0;i<N;++i){
		for(int j=N-1;i<j;--j){
			if(numbers[j-1]>numbers[j]){
				tmp_c = suits[j-1];
				suits[j-1] = suits[j];
				suits[j] = tmp_c;
				
				tmp_i = numbers[j-1];
				numbers[j-1] = numbers[j];
				numbers[j] = tmp_i;
			}
		}
	}
	return 0;
}

int selection_sort(int N, char suits[],int numbers[]){
	
	int min;
	
	char tmp_c;
	int tmp_i;
	
	for(int i=0;i<N;++i){
		min = i;
		for(int j=i;j<N;++j){
			if(numbers[min] > numbers[j]){
				min = j;
			}
		}
		if(min != i){
			tmp_c = suits[min];
			suits[min] = suits[i];
			suits[i] = tmp_c;
				
			tmp_i = numbers[min];
			numbers[min] = numbers[i];
			numbers[i] = tmp_i;
		}
	}
	
	return 0;
}

bool judge(int N,char ord_suits[], char suits[], int ord_numbers[], int numbers[]){
	
	int k = 0,j = 0;
	int prev_num = 0;
	bool f = true;
	
	for(int i=0;i<N;++i){
		if(prev_num != numbers[i]){
			k = i;
			j = 0;
			while(j<N){
				while(numbers[k] != ord_numbers[j]) j++;
				
				if(suits[k] != ord_suits[j]){
					f = false;
				}
				if(numbers[k] == numbers[k+1]){
					k++;
				}else{
					break;
				}
				j++;
			}
			prev_num = numbers[i];
		}
	}
	
	return f;
}

int main(void){
	
	int N;
	
	char ord_suits[36];
	char bubble_suits[36];
	char selection_suits[36];
	
	int ord_numbers[36];
	int bubble_numbers[36];
	int selection_numbers[36];
	
	cin >> N;
	
	for(int i=0;i<N;++i){
		cin >> ord_suits[i] >> ord_numbers[i];
	}
	
	memcpy(bubble_suits,ord_suits,sizeof(char)*N);
	memcpy(bubble_numbers,ord_numbers,sizeof(int)*N);
	memcpy(selection_suits,ord_suits,sizeof(char)*N);
	memcpy(selection_numbers,ord_numbers,sizeof(int)*N);
	
	bubble_sort(N,bubble_suits,bubble_numbers);
	selection_sort(N,selection_suits,selection_numbers);
	
	for(int i=0;i<N;++i){
		cout << bubble_suits[i] << bubble_numbers[i];
		if(i<N-1){
			cout << " ";
		}
	}
	cout << endl;
	if(judge(N,ord_suits,bubble_suits,ord_numbers,bubble_numbers)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	
	for(int i=0;i<N;++i){
		cout << selection_suits[i] << selection_numbers[i];
		if(i<N-1){
			cout << " ";
		}
	}
	cout << endl;
	if(judge(N,ord_suits,selection_suits,ord_numbers,selection_numbers)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	
	return 0;
}