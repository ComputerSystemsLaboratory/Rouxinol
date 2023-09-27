#include<iostream>
using namespace std;

int check( long long maxcarry, int w[],int w_size, int t ){
	int i=0;
	for( int j=0; j<t; j++ ){
		long long s=0;
		while( s + w[i] <=maxcarry ){
			s +=w[i];
			i++;
			if( i == w_size ) {
				return w_size;
			}
		}
	}
	return i;
}

long long solve( int w[], int w_size, int t ){

	long long front =0, back =100000*10000, center;
	while( back - front > 1 ){
		center= (front+back) /2;
		int v= check(center, w, w_size, t);
		if( v >= w_size ) {
			back= center;
		}else{
			front=center;
		}
	}
	return back;
}


int main()
{
	int w_size, t;
	cin>>w_size>>t;
	int *w=new int[w_size];
	for( int i=0; i<w_size; i++ ) cin>>w[i];

	cout<<solve(w, w_size, t)<<endl;
}