#include <iostream>
#include <algorithm> 

using namespace std;

#define MAX 100000

struct Card 
{
	char suit;
	int value;
};

int partition(Card A[], int p, int r);
void quick_sort(Card A[], int p, int q);
bool compare(const Card & A, const Card & B);
bool is_stable(Card A[], Card B[], int n);

int main()
{
	Card A[MAX], B[MAX];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i].suit >> A[i].value;
	
	for (int i = 0; i < n; i++) B[i] = A[i];
	
	quick_sort(A, 0, n-1);
	stable_sort(B, B+n, compare);
	
	if (is_stable(A, B, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << A[i].suit << ' ' << A[i].value << endl;
	}
	
	return 0;
}


int partition(Card A[], int p, int r)
{
	int key = A[r].value, i = p-1;
	for (int j = p; j < r; j++)
	{
		if (A[j].value <= key) swap(A[j], A[++i]);
	}
	swap(A[++i], A[r]);
	return i;
}


void quick_sort(Card A[], int p, int q)
{
	if (p < q)
	{
		int r = partition(A, p, q);
		quick_sort(A, p, r-1);
		quick_sort(A, r+1, q);
	}
}

bool compare(const Card & A, const Card & B)
{
	if (A.value < B.value) return true;
	return false;
}


bool is_stable(Card A[], Card B[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i].suit != B[i].suit) return false;
	}
	return true;
}
