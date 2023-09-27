#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

void s_sort(int*a , int n , int* count){
	int lowest;
	for(int i=0;i<n;++i){
		lowest=i;
		for(int j=i+1 ; j<n ;++j){
			if(a[j]<a[lowest]){
				lowest=j;
				}
			}
		if(a[i]>a[lowest]){
		swap(a[i] , a[lowest]);
		(*count)++;
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
	s_sort(a , n , &cnt);
	for(int i=0;i<n-1 ; ++i){
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl << cnt << endl;
	delete [] a;
	return 0; 
}