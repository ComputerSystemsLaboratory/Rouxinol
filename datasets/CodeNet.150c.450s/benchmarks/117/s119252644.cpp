#include <climits>
#include <iostream>
#include <vector>

typedef std::vector<int> IntVector;

void Input(IntVector& Inputs)
{
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int Count;
	std::cin >> Count;
	Inputs.resize(Count);
	for(int i=0;i<Count;i++)
	{
		int N = 0;
		std::cin >> N;
		Inputs[i] = N;
	}
}

void Output(IntVector& Outputs)
{
	for(unsigned i=0;i<Outputs.size();i++)
	{
		std::cout << Outputs[i];
		if(i + 1 < Outputs.size())
		{
			std::cout << " ";
		}else
		{
			std::cout << std::endl;
		}
	}
}

int merge(IntVector& A,int left,int mid,int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	
	IntVector L(n1+1);
	for(int i=0;i<n1;i++)
	{
		L[i] = A[left+i];
	}
	IntVector R(n2+1);
	for(int i=0;i<n2;i++)
	{
		R[i] = A[mid+i];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	
	int i = 0;
	int j = 0;
	for(int k=left;k<right;k++)
	{
		if(L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}else
		{
			A[k] = R[j];
			j++;
		}
	}
	return i+j;
}

int mergeSort(IntVector& A,int left,int right)
{
	int Count = 0;
	if(left+1 < right)
	{
		int mid = (left + right)/2;
		Count += mergeSort(A,left,mid);
		Count += mergeSort(A,mid,right);
		return Count + merge(A,left,mid,right);
	}
	return 0;
}

int main()
{
	IntVector Inputs;
	Input(Inputs);
	int CompareCount = mergeSort(Inputs,0,Inputs.size());
	Output(Inputs);
	std::cout << CompareCount << std::endl;
	return 0;
}