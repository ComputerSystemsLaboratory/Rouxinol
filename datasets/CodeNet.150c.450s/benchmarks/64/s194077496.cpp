// ALDS1_5_A
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, q, m, num=0, sum=0;
	vector<int> A, Q;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		A.push_back(m);
		sum += m;
	}

	cin>>q;
	for(int i=0;i<q;i++){
		cin>>m;
		Q.push_back(m);

		if(m > num)
			num = m;
	}

	int M = max(num, sum);
	vector<vector<bool> > B;

	B.resize(A.size()+1);
	for(int i=0;i<A.size()+1;i++)
		B[i].resize(M+1);

	B[0][0] = true;
	for(int j=1;j<M+1;j++)
		B[0][j] = false;

	for(int i=1;i<A.size()+1;i++){
		for(int j=0;j<M+1;j++){
			if(j < A[i-1])
				if(B[i-1][j])
					B[i][j] = true;
				else
					B[i][j] = false;
			else
				if(B[i-1][j] || B[i-1][j-A[i-1]])
					B[i][j] = true;
				else
					B[i][j] = false;
		}
	}

	for(int i=0;i<q;i++){
		if(B[A.size()][Q[i]])
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}

	return 0;
}