#include <iostream>
#include <vector>
using namespace std;

bool Judge(int m, vector<int> A)
{
	int n = A.size();
	if(m == 0){
		return true;
	}
	if(n == 1){
	    if(m == A[0]){
	        return true;
	    }
	}else{
		int l = m - A.back();
		A.pop_back();
		if(Judge(m, A) || Judge(l, A)){
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
		if(Judge(M[i], A)){
			cout << "yes" << endl;
		}else{
			cout << "no"  << endl;
		}
	}
	return 0;
}