#include<iostream>
using namespace std;
int n,A[50],q,M;
bool solve(int i,int key)
{

	if(key ==0) return true;
	if(i>=n)return false;
	int res = solve(i+1,key)||solve(i+1,key-A[i]);
	return res;
}



int main()
{
	cin >> n;
	for(int i = 0; i< n; i++)
 		cin >> A[i];
	
	cin >> q;
	for(int i =0; i<q; i++)
	{
		cin >>M;
		if(solve(0,M))
			cout << "yes"<<endl;
		else
			cout << "no"<<endl;
	}	
}	