#include <iostream>
#include <valarray>
using namespace std;

int main(void){
	int n;
	while(cin>>n,n){
	valarray<int> a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<(a.sum()-a.max()-a.min())/(a.size()-2)<<endl;
	}
}