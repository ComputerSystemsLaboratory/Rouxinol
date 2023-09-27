#include<iostream>
using namespace std;

struct card{
	int id;
	unsigned int val;
	char mark;
};

int Partition(card* array, int begin, int end){
	unsigned int mid = array[end].val;

	int i = begin;
	for(int j = begin; j < end; j ++ ){
		if(array[j].val <= mid){
			card buf = array[i];
			array[i] = array[j];
			array[j] = buf;
			i ++ ;
		}
	}
	{
		card buf = array[end];
		array[end] = array[i];
		array[i] = buf;
	}

	return i;
}

void QuickSort(card* array, int begin, int end){
	if(begin >= end)return;
	
	int mid = Partition(array, begin, end);
	
	QuickSort(array, begin, mid - 1);
	QuickSort(array, mid + 1, end);
}

int main(){
	ios_base::sync_with_stdio(false);
	int num;
	card array[100001];
	cin >> num;

	for(int i = 0; i < num; i++){
		char mark;
		int val;
		cin >> mark;
		cin >> val;
		array[i].val = val;
		array[i].mark = mark;
		array[i].id = i;
	}
	QuickSort(array, 0, num - 1);
	bool flag = true;
	for(int i = 0; i < num - 1 && flag; i++){
		for(int j = 1; array[i].val == array[i + j].val; j++){
			if(array[i + j - 1].id > array[i + j].id){
				flag = false;
				break;
			}
		}
	}
	cout << (flag ? "Stable" : "Not stable") << endl;
	
	for(int i = 0; i < num; i++){
		cout << array[i].mark << " " << array[i].val << endl;
	}

	return 0;
}