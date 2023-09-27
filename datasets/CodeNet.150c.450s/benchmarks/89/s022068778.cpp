/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1141&lang=jp*/

#include <iostream>

#define N (int)1e6

using namespace std;

int main()
{
	int a,d,n;
	bool not_p[N];
	
	not_p[0]=true;
	for(int i=1;i<N;i++){
		if(!not_p[i]){
			for(int j=2;j*(i+1)-1<N;j++){
				not_p[j*(i+1)-1]=true;
			}
		}
	}
	while(cin>>a>>d>>n && (0<a || 0<d || 0<n)){
		int i=0;
		int j=0;
		while(j<n && a+d*i<N){
			if(!not_p[a+d*i-1]){
				j++;
			}
			i++;
		}
		cout<<a+d*(i-1)<<endl;
	}
	return 0;
}