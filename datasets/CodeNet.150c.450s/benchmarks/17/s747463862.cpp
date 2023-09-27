#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

void b_sort(int* a , int n){
	for(int i=n ; i>=0 ; --i){
		for(int j=0; j<i-1 ; ++j){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	int a[5];
	for(int i=0 ; i<5 ; ++i){
		cin >> a[i];
	}
	b_sort(a , 5);
	for(int i=0 ; i<4 ; ++i){
		cout << a[i] << " ";
	}
	cout << a[4] << endl;
	return 0; 
}