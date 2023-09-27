#include<bits/stdc++.h>

using namespace std;
#define fordebug int hoge;cin>>hoge;
#define DEKAI 1000000007;
#define INF 200000000
#define int long long
#define lp(i,n) for(int i=0;i<n;i++)
#define lps(i,j,n) for(int i=j;i<n;i++)
pair<int,char> a[100000],b[100000];
pair<int,char> rr[100000],ll[100000];

void merge(int l, int m,int r){
  int n1=m-l;
  int n2=r-m;
  lp(i,n1) ll[i]=b[l+i];
  lp(i,n2) rr[i]=b[m+i];
  int i=0,j=0;
  ll[n1]=make_pair(INF,' ');
  rr[n2]=make_pair(INF,' ');
  lps(k,l,r){
    if(ll[i].first>rr[j].first){
      b[k]=rr[j];
      j++;
    }
    else{
      b[k]=ll[i];
      i++;
    }
  }
}

void mergesort(int l,int r){
  if(l+1<r){
    int m=(l+r)/2;
    mergesort(l,m);
    mergesort(m,r);
    merge(l,m,r);
  }
  else return ;
}

int partition(int p,int r){
	int x=a[r].first;
	int i=p-1;
	lps(j,p,r){
		if(a[j].first<=x){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
return i+1;
}

void quicksort(int p,int r){
	if(p<r){
		int q=partition(p,r);
		quicksort(p,q-1);
		quicksort(q+1,r);
	}

}

signed main(){
	int n;
	cin>>n;
	lp(i,n) {
		int y;
		char x;
		cin>>x>>y;
		a[i]=make_pair(y,x);
		b[i]=make_pair(y,x);
	}
	quicksort(0,n-1);
	mergesort(0,n);
	int stat=0;
	lp(i,n){
		if(a[i]!=b[i]) stat=1;
	}
	if(stat==0) cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
	lp(i,n){
		cout<<a[i].second<<" "<<a[i].first<<endl;
	}
	return 0;
}
