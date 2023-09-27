#include<iostream>
using namespace std;
int main(){
    int min=1000001,max=-1000001,n,m;
    long sum=0;
    cin >> n;
    for (int i=1;i<=n;i++){
    	cin >> m;
    	if (m>max)
    		max=m;
    	if (m<min)
    		min=m;
    	sum+=m;
	}
	cout << min << ' ' << max << ' ' << sum << endl;
    return 0;
}
