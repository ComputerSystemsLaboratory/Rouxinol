#include <iostream>
#include <cstdio>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int  P(pair<string,int>* A,int p,int r);
void Quicksort(pair<string,int>* A,int p,int r);

int main()
{
    pair<string,int> *a,*da;
    int N,num;
	cin>>N;
	a=new pair<string,int>[N];
	da=new pair<string,int>[N];
	for(int i=0;i<N;i++){
		cin>>a[i].first>>a[i].second;
		da[i]=a[i];
	}

	Quicksort(a,0,N-1);

	stable_sort(da,da+N,[](const pair<string,int>& wa,const pair<string,int>& wb){
        return wa.second<wb.second;
	});
    
	int j;
	for(j=0;j<N;j++){
		if(da[j].first!=a[j].first){
			cout<<"Not stable"<<endl;
			break;
		}
	}
	if(j==N){
		cout<<"Stable"<<endl;
	}
	for(int i=0;i<N;i++){
        cout<<a[i].first<<' '<<a[i].second<<endl;
    }
}
int  P(pair<string,int>* A,int p,int r)
{
	int x=A[r].second;
	int i=p-1;
	for(int j=p;j<r;j++){
		if(A[j].second <= x){
            i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}
void Quicksort(pair<string,int>* A,int p,int r)
{
	if(p<r){
		int q=P(A,p,r);
		Quicksort(A, p, q-1);
		Quicksort(A, q+1, r);
	}
}