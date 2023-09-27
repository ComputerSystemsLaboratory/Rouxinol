#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

struct Card {
	char name;
	int n;
};

Card newC(char name, int n){
	Card *dc = new Card;
	dc->name = name; dc->n = n;
	return *dc;
}

int Partition(Card *A, int p, int r){
	int x = A[r].n;
	int i = p-1;
	for(int j=p; j<r; j++){
		if(A[j].n<=x){
			i = i+1;
			Card k = A[j];
            A[j] = A[i]; A[i] = k;
		}
	}
	Card k = A[r];
	A[r] = A[i+1]; A[i+1] = k;
	return i+1;
}

void Quicksort(Card *A, int p, int r){
	if(p<r){
		int q = Partition(A, p, r);
		Quicksort(A, p, q-1);
		Quicksort(A, q+1, r);
	}
}

bool comp(Card& a, Card& b){
	if(a.n <= b.n){
		return true;
	}
	return false;
}
bool eq(Card& a, Card& b){
	return (a.n==b.n)&&(a.name==b.name);
}
int binst(Card& key, Card* A, int s, int e){
    if(e - s <= 1){
		if(s < e){
			if(eq(A[s],key)) return s;
			if((e >= 0) && eq(A[e],key)) return e;
        } else {
			if((e >= 0) && eq(A[e],key)) return e;
			if(eq(A[s],key)) return s;
		}
		return -1;
    }
    int mid = (s+e)/2;
    if(A[mid].n==key.n){
		int c = mid, k=mid;
		if(eq(A[mid], key)) return mid;
		while(1){
			c--;
			if(c<0 || A[c].n!=key.n) break;
			if(eq(A[c], key)) return c;
		}
		while(1){
			k++;
			if(k>e || A[k].n!=key.n) break;
			if(eq(A[k],key)) return k;
		}
		return -1;
	}
    if(comp(A[mid], key)){
        return binst(key, A, mid+1, e);
    } else {
        return binst(key, A, s, mid-1);
    }
}


int main(){
	int n;
	map<int,int> mp;
	cin >> n;
	
	Card *A,*B;
	int *a,*b;
	A = new Card[n];
	B = new Card[n];
	for(int i=0;i<n;i++){
		char cd; int num;
		scanf(" %c %d",&cd,&num);
		A[i] = newC(cd, num);
		B[i] = newC(cd, num);
	}
	Quicksort(A,0,n-1);
	bool f = true;
	for(int i=0;i<n;i++){
		int id = binst(B[i],A,0,n-1);
		int p = A[id].n;
		if( mp[p]==0 || mp[p]<id) mp[p] = id;
		else f = false;
	}
	if(f) printf("Stable\n");
	else printf("Not stable\n");
	for(int i=0;i<n;i++){
		printf("%c %d\n",A[i].name,A[i].n);
	}
	return 0;
}