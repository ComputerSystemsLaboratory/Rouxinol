#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int mx=0;
	int arr[101]={0};
	int j=0,n;
	while(cin>>n){
		arr[n]++;
	}
	for(int i=1 ; i<101 ; ++i){
		if(mx<arr[i])
			mx=arr[i];
	}
	for(int i=0 ; i<101 ; ++i){
		if(arr[i]==mx){
			cout << i << endl;
		}
	}
	return 0; 
}