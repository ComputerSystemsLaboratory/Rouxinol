#include<algorithm>
#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define swap(a,b) tmp=a, a=b, b=tmp
int main(){
	long long int a, b, ai, bi, tmp;
	while(cin >>ai>>bi){
		a=ai, b=bi;
		if(a<b) swap(a,b);
		while(true){
			if(a%b==0) break;
			a%=b;
			swap(a,b);
		}
		cout << b << " " << ai*bi/b << endl;
	}
		

    return 0;
}