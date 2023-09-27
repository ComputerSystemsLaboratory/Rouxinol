#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Printf(std::vector<int> & a, int p) {
	for(int i=0;i<=(int)a.size()-1;++i) {
		if (i>0){ 
			cout << " ";
		}
		if (i==p) {
			cout  << "[" << a.at(i) << "]";
		} else {
			cout  << a.at(i);
		}
	}
}
void InputSet(std::vector<int> & a) {
	int n;
	cin >> n;
	a.resize(n,0);
	for(int i=0;i<n;++i) {
		cin >> a.at(i);
	}
}
void swapint(int &i,int &j) {
	int t=i;
	i = j;
	j = t;
}
int Partition(std::vector<int> & A, int p,int r)
{
	int x = A[r];
	int i = p-1;
	for (int j = p; j <=r-1;++j) {
		if (A[j] <= x) {
			i = i+1;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}


int main(){
	std::vector<int> A;
	::InputSet(A);
	int par = Partition(A, 0, (int)A.size()-1);

	Printf(A,par);
	cout << std::endl;
}