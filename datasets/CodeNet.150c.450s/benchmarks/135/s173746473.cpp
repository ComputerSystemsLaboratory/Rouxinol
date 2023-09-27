#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int w[1501]={0}, h[1501]={0};
int W[2250000]={0}, H[2250000]={0};

int sum(int* a , int i,int n,int size){
	int s = 0;
	for(int j=n ; j-- ; ){
		if( i >= size ){
			return 0;
		}
		s += a[i++];
	}
	return s;
}

int main(){
	int n,m,w_,h_;
	while( cin >> n >> m , n||m ){
		//int cnt_h[1001] = {0}
		int cnt_w[1000000] = {0};
		
		for(int i=0 ; i<n ; i++ ){
			cin >> h[i];
		}
		int i_=0;
		for(int j=1 ; j <= n ; j++ ){
			for(int i=0 ; i+j <= n ; i++ ){
				H[i_++] = sum( h , i , j , n );
			}
		}
		/*for(int i=0 ; i<i_ ; i++ ){
			cnt_h[ H[i] ]++;
		}*/
		
		for(int i=0 ; i<m ; i++ ){
			cin >> w[i];
		}
		int j_=0;
		for(int j=1 ; j <= m ; j++ ){
			for(int i=0 ; i+j <= m ; i++ ){
				W[j_++] = sum( w , i , j , m );
			}
		}
		for(int i=0 ; i<j_ ; i++ ){
			cnt_w[ W[i] ] += 1;
		}
		/*for(int i=0 ; i<j_ ; i++ ){
			cout << "W[" << i << "] : " << W[i] << endl;
		}*/
		
		int ans = 0;
		for(int i=0 ; i < i_ ; i++ ){
			//if( H[i] <= 1000 && H[i] >= 0 )
				ans += cnt_w[ H[i] ];
			//for(int j=0 ; j < j_ ; j++ ){
			//	if( W[j] == H[i] ) ans++;
			//}
		}
		//cout << "ans : " << ans << endl;
		cout << ans << endl;
	}
}