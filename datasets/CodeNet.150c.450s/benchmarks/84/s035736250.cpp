#include <climits>
#include <iostream>
#include <vector>

typedef std::vector<int> IntVector;

void Input(IntVector& Inputs)
{
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	long long Count;
	std::cin >> Count;
	Inputs.resize(Count);
	for(long long i=0;i<Count;i++){
		int N = 0;
		std::cin >> N;
		Inputs[i] = N;
	}
}

void Output(IntVector& Outputs)
{
	for(long long i=0;i<Outputs.size();i++){
		std::cout << Outputs[i];
		if(i + 1 < Outputs.size()){
			std::cout << " ";
		}else{
			std::cout << std::endl;
		}
	}
}

long long merge(IntVector& A,int left,int mid,int right)
{
	long long n1 = mid - left;
	long long n2 = right - mid;
	
	IntVector L(n1+1);
	for(long long i=0;i<n1;i++){
			L[i] = A[left+i];
	}
	IntVector R(n2+1);
	for(long long i=0;i<n2;i++){
		R[i] = A[mid+i];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	
	long long i = 0;
	long long j = 0;
	long long Count = 0;
	for(int k=left;k<right;k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
			Count += j;
		}else{
			A[k] = R[j];
			j++;
		}
	}
	return Count;
}

long long mergeSort(IntVector& A,int left,int right)
{
	if(left+1 >= right) return 0;
	long long mid = (left + right)/2;
	long long Count = 0;
	Count += mergeSort(A,left,mid);
	Count += mergeSort(A,mid,right);
	return Count + merge(A,left,mid,right);
}

int main()
{
	IntVector Inputs;
	Input(Inputs);
	long long CrossCount = mergeSort(Inputs,0,Inputs.size());
	std::cout << CrossCount << std::endl;
	return 0;
}