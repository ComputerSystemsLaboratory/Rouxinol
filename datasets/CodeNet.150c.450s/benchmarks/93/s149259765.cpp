#include <iostream>
#include <vector>
using namespace std;

struct card{
	char suit;
	int num;
};

int card_out(vector <card> &A, int q){
    int n = A.size();
    for (int i=0; i<n; i++){
		cout << A[i].suit << " " << A[i].num << endl;
    }
    return 0;
}

int partition(vector <card> &A, int p, int r){
	int x = A[r].num;
	int i = p;
	for (int j=p; j<r; j++)
		if (A[j].num<=x){
			swap(A[j], A[i]);
			i++;
		}
	swap(A[i], A[r]);
	return i;
}

int merge(vector <card> &A, vector <card> &buf, int low, int mid, int high){
    int i=low, j=low, k=mid;
 
    while (j<mid && k<high){
        if (A[j].num <= A[k].num)
            buf[i] = A[j++];
        else
            buf[i] = A[k++];
        i++;
    }
 
    if (j<mid)
        for(int h=j; h<mid; h++,i++)
            buf[i] = A[h];
    else
        for (int h=k; h<high; h++,i++)
            buf[i] = A[h];
 
    for (int i=low; i<high; i++)
        A[i] = buf[i];
 
    return high-low;
}
 
int mergesort(vector <card> &A, vector <card> &buf, int low, int high ){
 
    int m=(high+low)/2, counter=0;
    if (low+1 >= high){
        return 0;
    }
 
    counter += mergesort(A, buf, low, m );
    counter += mergesort(A, buf, m, high );
    counter += merge(A, buf, low, m, high);
    return counter;
}

bool check(vector <card> &A, vector <card> &B){
	bool f = true;
	for (int i=0; i<(int)A.size(); i++)
		if (A[i].suit != B[i].suit || A[i].num != B[i].num){
			f = false;
			break;
		}
	return f;
}
int quicksort(vector <card> &A, int p, int r){
	if (p<r){
		int q = partition(A, p, r);
		quicksort(A, p, q-1);
		quicksort(A, q, r);
	}
	return 0;
}

int main(void){
	int n, q;
	cin >> n;
	vector <card> A(n), B(n), buf(n);
	for (int i=0; i<n; i++){
		cin >> A[i].suit;
		cin >> A[i].num;
	}
	B = A;
	mergesort(B, buf, 0, n);
	q = quicksort(A, 0, n-1);
	if (check(A, B)) cout << "Stable" << endl;
	else cout << "Not stable" << endl; 
	card_out(A, q);
	return 0;
}