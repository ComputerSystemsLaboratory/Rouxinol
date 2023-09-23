#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

void b_sort(int* a , int n, int* count){
	for(int i=n;i>=0;--i){
		for(int j=0;j<i-1;++j){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				(*count)++;
			}
		}
	}
}

int main(){
	int n , cnt=0;
	cin >> n;
	int*a = new int [n];
	for(int i=0;i<n ;++i){
		cin >> a[i];
	}
	b_sort(a , n , &cnt);
	for(int i=0;i<n-1 ; ++i){
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl << cnt << endl;
	return 0; 
}