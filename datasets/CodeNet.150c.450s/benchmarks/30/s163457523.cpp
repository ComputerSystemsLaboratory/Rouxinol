#include<iostream>
#include<vector>
using namespace std;

int main(void){
	
	int N;
	vector<int> array;
	
	int swap_num;
	
	int tmp;
	int min;
	
	cin >> N;
	
	for(int i=0;i<N;++i){
		cin >> tmp;
		array.push_back(tmp);
	}
	
	swap_num = 0;
	for(int i=0;i<N;++i){
		min = i;
		for(int j=i;j<N;++j){
			if(array[min]>array[j]){
				min = j;
			}
		}
		if(min != i){
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			swap_num++;
		}
	}
	
	for(int i=0;i<N;++i){
		cout << array[i];
		if(i<N-1){
			cout << " ";
		}
	}
	cout << endl;
	cout << swap_num << endl;
	
	return 0;
}