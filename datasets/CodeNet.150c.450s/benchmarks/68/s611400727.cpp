// 1608
#include <iostream>
#include <vector>
using namespace std;

void MergeSort(vector<int> &A, int left, int right){
	
	if(left >= right)
		return;

	int mid = left+(right-left)/2;
	MergeSort(A, left, mid);
	MergeSort(A, mid+1, right);

	vector<int> B,C;
	
	for(int i=left;i<=mid;i++)
		B.push_back(A[i]);
	for(int j=mid+1;j<=right;j++)
		C.push_back(A[j]);
	
	int i=0, j=0;
	for(int k=left;k<=right;k++){
		if(i == B.size())
			A[k] = C[j++];
		else if(j == C.size())
			A[k] = B[i++];
		else if(B[i] <= C[j])
			A[k] = B[i++];
		else
			A[k] = C[j++];
	}
}

int main(){
	
	while(1){
		int n, num;
		vector<int> grade;
		cin>>n;

		if(n == 0)
			break;

		for(int i=0;i<n;i++){
			cin>>num;
			grade.push_back(num);
		}

		MergeSort(grade, 0, n-1);

		int dif = grade[1]-grade[0];
		for(int i=1;i+1<n;i++)
			if(grade[i+1]-grade[i] < dif)
				dif = grade[i+1]-grade[i];

		cout<<dif<<endl;
	}

	return 0;
}