#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> A, int key){
	int left = 0, right = A.size();
	while(left < right){
		int mid = (left + right) / 2;
		if(A[mid] < key)
			left = mid + 1;
		else
			right = mid;
	}

	return left;
}

int LIS(vector<int> a){
	vector<int> lis;

	lis.push_back(a[0]);
	for(int i=1;i<a.size();i++)
		if(a[i] > lis[lis.size()-1])
			lis.push_back(a[i]);
		else if(a[i] < lis[lis.size()-1])
			lis[binarySearch(lis, a[i])] = a[i];
		
		

		return lis.size();
}

int main(){

	int n, num;
	vector<int> a, lis;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		a.push_back(num);
	}

	cout<<LIS(a)<<endl;
	return 0;
}