#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct t_card{
	char mark;
	long num;
	t_card operator=( const t_card &t ){
		mark = t.mark;
		num = t.num;
		return t;
	}
};
bool operator<( const t_card &l, const t_card &r ){
	return l.num < r.num;
}

int partition(t_card a[], int p, int r){
	t_card x = a[r];
	int i = p;
	for( int j=p; j<r; j++ ){
		if( a[j].num <= x.num ){
			t_card tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
			i++;
		}
	}
	a[r] = a[i];
	a[i] = x;
	return i;
}

void quicksort( t_card a[], int p, int r ){
	if( p < r ){
		int q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main(){
	int n;
	t_card a[100001],b[100001];
	cin >> n;
	for( int i=0; i<n; i++ ){
		char c;
		long k;
		cin >> c >> k;
		a[i].mark = c;
		a[i].num = k;
	}
	memcpy( b, a, sizeof(a) );
	quicksort( a, 0, n-1 );
	stable_sort( b, b+n );
	int i=0;
	for( ; i<n; i++ ){
		if( a[i].mark != b[i].mark ){
			cout << "Not stable" << endl;
			break;
		}
	}
	if( i==n )	cout << "Stable" << endl;
	for( i=0; i<n; i++ ){
		cout << a[i].mark << " " << a[i].num << endl;
	}
	return 0;
}