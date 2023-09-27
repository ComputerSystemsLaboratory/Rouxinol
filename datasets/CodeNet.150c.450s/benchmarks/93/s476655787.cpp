#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;
class P{
public:
	int first;
	char second;
	int index;
	bool operator<=(P x){
		return first <= x.first;
	}
};

int partition(P *A,int p,int r){
   P x = A[r];
   int i = p-1;
   for (int j = p ;j < r ;j++){
     if (A[j] <= x){
       i = i+1;
       swap(A[i],A[j]);
     }
   }
   swap(A[i+1],A[r]);
   return i+1;
}

void Qsort(P *A,int p,int r){
	if(p<r){
		int q=partition(A,p,r);
		Qsort(A,p,q-1);
		Qsort(A,q+1,r);
	}
}

int main(){
	int n;
	P A[100000];
	cin >> n;
	REP(i,n){
		cin >> A[i].second >> A[i].first;
		A[i].index=i;
	}
	Qsort(A,0,n-1);
	bool flag=true;
	REP(i,n-1){
		if(A[i].first == A[i+1].first && A[i].index > A[i+1].index){
			flag = false;break;
		}
	}
	cout << (flag?"Stable":"Not stable") << endl;
	REP(i,n){
		cout << A[i].second << " " << A[i].first << endl;
	}
}