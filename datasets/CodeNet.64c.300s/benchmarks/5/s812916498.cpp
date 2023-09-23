#include <iostream>

using namespace std;

static const int ARRAY_NUM = 10;

class sort{
private:
	int tmp;
public:
	int* bable(int a[]);
};

int* sort::bable(int a[]){
	for(int i=0;i<ARRAY_NUM;++i){
		for(int j=ARRAY_NUM-1;j>i;--j){
			if(a[j]>a[j-1]){
				tmp    = a[j-1];
				a[j-1] = a[j];
				a[j]   = tmp;
			}
		}
	}
	return a;
}

int main(void){

	//int *array = new int [5];
	sort sort;
	int hgt_mt[10];
	int* hgt_max;

	//cout << "input height of mountain" << endl;

	for(int i=0;i<10;i++){
		cin >> hgt_mt[i];
	}

	hgt_max = sort.bable(hgt_mt);

	for(int i=0;i<3;i++){
		cout << hgt_max[i] << endl;
	}

	return 0;
}