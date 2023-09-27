#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

int Node[251];
int parent(int i ){return i/2;}
int left(int i){return 2*i;}
int right(int i){return 2*i+1;}
int main()
{
	int n;
	cin >> n;
	for(int i =0;i<n;i++)
	cin >> Node[i+1];
	

	for(int i = 1;i<=n;i++)
	{
		printf("node %d: key = %d, ",i,Node[i]);
		if(i!=1)printf("parent key = %d, ",Node[parent(i)]);
		if(left(i)<=n)printf("left key = %d, ",Node[left(i)]);
		if(right(i)<=n)printf("right key = %d, ",Node[right(i)]);
		cout<<endl;
	}
	return 0;
}
