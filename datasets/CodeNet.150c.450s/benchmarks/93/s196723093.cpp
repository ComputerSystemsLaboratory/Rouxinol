#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

int n;
vector<int> a,b;
vector<char> c,d;
int partition(int p,int r)
{
	int sta = a[r];
	int j = p-1;
	for(int i = p;i<r;i++)
	{
		if(sta>=a[i])
		{
			j++;
			swap(a[j],a[i]);
			swap(c[j],c[i]);

		}
		else
		{
			
		}
		
	}
	j++;
	swap(a[r],a[j]);
	swap(c[r],c[j]);
	return j;
}
void quick_sort(int l,int r)
{
	if(l<r)
	{
		int x = partition(l,r);
		quick_sort(l,x-1);
		quick_sort(x+1,r);
	}
}

void marge_sort(int l,int r)
{
	if(r-l==1)return;

	int mid = (l+r)/2;
	//cout<<mid<<endl;
	marge_sort(l,mid);
	marge_sort(mid,r);
	vector<int> v;
	vector<char> v2;
	int i = l,j=mid;
	

	while(i!=mid&&j!=r)
	{
		if(b[i]<=b[j])
		{
			v.push_back(b[i]);
			v2.push_back(d[i]);
			i++;
		}
		else
		{
			v.push_back(b[j]);
			v2.push_back(d[j]);
			j++;
		}
	}
	for(;i<mid;i++){v.push_back(b[i]);v2.push_back(d[i]);}
	for(;j<r;++j){v.push_back(b[j]);v2.push_back(d[j]);}
	for(int k = l;k<r;k++)
	{
		b[k]=v[k-l];
		d[k]=v2[k-l];
	}
}

int main()
{
	cin >> n;
	a = vector<int>(n);
	c = vector<char>(n);
	for(int i =0;i<n;i++)
	{
		cin >>c[i] >> a[i];
	}
	b = a;
	d = c;
	quick_sort(0,n-1);
	marge_sort(0,n);
	bool stable = true;
	for(int i =0;i<n;i++)
	{
		if(c[i]!=d[i])stable = false;
	}
	if(stable)
	{
		cout<<"Stable"<<endl;
	}
	else
	{
		cout<<"Not stable"<<endl;
	}
	

	for(int i = 0;i<n;i++)
	{
		cout<<c[i]<<' '<<a[i]<<endl;
	}

	return 0;
}
