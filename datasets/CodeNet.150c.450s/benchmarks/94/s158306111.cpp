#include<iostream>
#include<vector>
using namespace std;

int main(void){
	
	int N;
	vector<int> array;
	
	int swap_num;
	
	int tmp;
	
	cin >> N;
	
	for(int i=0;i<N;++i){
		cin >> tmp;
		array.push_back(tmp);
	}
	
	swap_num = 0;
	for(int i=0;i<N;++i){
		for(int j=N-1;i<j;--j){
			if(array[j-1]>array[j]){
				tmp = array[j-1];
				array[j-1] = array[j];
				array[j] = tmp;
				
				swap_num++;
			}
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