#include <iostream>
#include <vector>
using namespace std;

bool Judge(int m, int index, vector<int> &A)
{
	if(m == 0){
		return true;
	}
	if(index != A.size()){
		int l = m - A[index];
		index++;
		if(Judge(m, index, A) || Judge(l, index, A)){
			return true;
		}
	}
	return false;
}

int main()
{ 
	int n, q; //n:??´??°???????????? q:???????????° 
	cin >> n;
	vector<int> A, M;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		int m;
		cin >> m;
		M.push_back(m);
	}
	for(int i = 0; i < q; i++){
		if(Judge(M[i], 0, A)){
			cout << "yes" << endl;
		}else{
			cout << "no"  << endl;
		}
	}
	return 0;
}