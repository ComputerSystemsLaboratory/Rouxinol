#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i%3==0){
			cout<<" "<<i;
		}
		else if (i%10==3||i%100/10==3||i%1000/100==3||i/1000==3){
			cout<<" "<<i;
		}
	}
	cout<<endl;
}
