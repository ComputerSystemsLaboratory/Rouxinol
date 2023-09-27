#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

int Node[500001];
int parent(int i ){return i/2;}
int left(int i){return 2*i;}
int right(int i){return 2*i+1;}
int n;

void maxHeap(int i)
{
	int l = left(i);
	int r = right(i);
	int largest;
	if(l<=n&&Node[l]>Node[i])largest = l;
	else largest = i;

	if(r<=n&&Node[r]>Node[largest])largest = r;


	if(i != largest)
	{
		swap(Node[i],Node[largest]);
		maxHeap(largest);
	}
}

void buildMaxHeap()
{
	for(int i = n/2;i>0;i--)
	{
		maxHeap(i);
	}
}

int main()
{
	cin >> n;
	for(int i =0;i<n;i++)
	cin >> Node[i+1];


	buildMaxHeap();

	for(int i = 1;i<=n;i++)
	{
	cout<<' ';
		cout<<Node[i];
	}
	cout<<endl;
	return 0;
}
