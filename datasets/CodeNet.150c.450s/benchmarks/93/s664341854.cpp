#include <iostream>
#include <algorithm>
using namespace std;

struct Card{
	char c;
	int a;
};

bool compare(Card i,Card j){
	return (i.a<j.a);
}

int partition(Card *A,int p,int r){
  Card x=A[r];
  int i=p-1;

  for(int j=p;j<=r-1;j++){
    if(A[j].a<=x.a){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;

}

void quicksort(Card* A,int p,int r){
	int q;
	if(p<r){
		q=partition(A,p,r);
		quicksort(A,p,q-1);
	    quicksort(A,q+1,r);
	}
}


int main(){
	int n;
	cin>>n;

	Card m[n];
	Card l[n];

	
	for(int i=0;i<n;i++){
		cin>>m[i].c>>m[i].a;
		l[i]=m[i];
	}

	quicksort(m,0,n-1);
	stable_sort(l,l+n,compare);

	int judge=1;
	int j=0;
	while(judge&&j<n){
		if(m[j].c!=l[j].c){
			judge=0;
		}
		j++;
	}

	if(judge){
		cout<<"Stable"<<endl;
	}else{
		cout<<"Not stable"<<endl;
	}

	for(int i=0;i<n;i++){
		cout<<m[i].c<<' '<<m[i].a<<endl;
	}

	return 0;

}
