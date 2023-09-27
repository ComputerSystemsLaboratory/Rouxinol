#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

#define N 2000000

int n;
int A[N+1];

int parent(int i){
	return i/2;
}
int left(int i){
	return 2*i;
}
int right(int i){
	return 2*i+1;
}
int inside(int i){
	if(i>=1&&i<=n) return 1;
	else return 0;
}

void max_heapify(int x){
	int l = left(x);
	int r = right(x);
	int largest = x;
	if(inside(l)&&A[l]>A[largest]) largest = l;
	if(inside(r)&&A[r]>A[largest]) largest = r;
	if(largest!=x){
		int tmp = A[largest];
		A[largest] = A[x];
		A[x] = tmp;
		max_heapify(largest);
	}
}

void insert(int k){
	A[n+1] = k;
	n++;

	int x = n;
	while(inside(parent(x))){
		if(A[x]>A[parent(x)]){
			int tmp = A[x];
			A[x] = A[parent(x)];
			A[parent(x)] = tmp;
			x = parent(x);
		}else{
			break;
		}
	}
}

int extract(){
	int ret = A[1];
	A[1] = A[n];
	n--;
	max_heapify(1);
	return ret;
}

int main(){
	n = 0;
	for(;;){
		char s_[100];
		scanf("%s", s_);
		string s = s_;
		if(s=="end"){
			break;
		}else if(s=="insert"){
			int k;
			scanf("%d", &k);
			insert(k);
		}else if(s=="extract"){
			cout << extract() << endl;
		}

//		cout << n << endl;
		/*
		for(int i=1; i<=n; i++){
			cout << " " << A[i];
		}
		*/
	}
	/*
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	*/
	/*
	for(int i=1; i<=n; i++){
		printf("node %d: ", i);
		printf("key = %d, ", A[i]);
		if(inside(parent(i))) printf("parent key = %d, ", A[parent(i)]);
		if(inside(left(i))) printf("left key = %d, ", A[left(i)]);
		if(inside(right(i))) printf("right key = %d, ", A[right(i)]);
		printf("\n");
	}
	*/
/*
	for(int i=n; i>=1; i--){
		max_heapify(i);
	}
	for(int i=1; i<=n; i++){
		cout << " " << A[i];
	}
	cout << endl;
*/
	return 0;
}