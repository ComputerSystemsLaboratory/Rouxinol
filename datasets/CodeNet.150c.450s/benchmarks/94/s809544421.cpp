#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

//???????????????????????????ver
void BabbleSort(int N, vector<int> array){

	int v,count=0;

	for (int i = 0; i < N-1; i++){
	
		for (int j = i+1; j < N; j++){
			if (array[i] > array[j]){
				v = array[i];
				array[i] = array[j];
				array[j] = v;
				count++;
			}
		}
	
	}

	//?????????????????¨?????????????????°for(i)?????????????????°??????
	for (int k = 0; k < N; k++){
		cout << array[k];
		if (k != N - 1)cout << " ";
	}cout << endl;

	cout << count << endl;



}

//??????????????????????????????ver
void BabbleSort_a(int N, vector<int> array){

	int v, count = 0;

	for (int i = N-1; i > 0; i--){

		for (int j = 0; j < i; j++){
			if (array[i] < array[j]){
				v = array[i];
				array[i] = array[j];
				array[j] = v;
				count++;
			}
		}

	}

	for (int k = 0; k < N; k++){
		cout << array[k];
		if (k != N - 1)cout << " ";
	}cout << endl;

	cout << count << endl;



}

//???????????°ver?????????????????????
void bubbleSort(int N, vector<int> array){
	int v;
	int x = 0;
	int flag = 1;
	while (flag){
		flag = 0;
		for (int j = N - 1; j>0; j--){
			if (array[j] < array[j - 1]){
				v = array[j];
				array[j] = array[j - 1];
				array[j - 1] = v;
				flag = 1;
				x++;
			}
		}
	}

	for (int k = 0; k < N; k++){
		cout << array[k];
		if (k != N - 1)cout << " ";
	}cout << endl;

	cout << x << endl;


	
}



int main(){

	int N,Num;
	cin >> N;

	vector<int> array(N, 0);

	for (int i = 0; i < N; i++){
		cin >> Num;
		array[i] = Num;
	}


	bubbleSort(N,array);


	return 0;
}