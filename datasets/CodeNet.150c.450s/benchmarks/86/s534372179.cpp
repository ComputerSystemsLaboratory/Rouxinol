#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m,p,sum;
	while(cin >> n >> m >> p ,n){
		vector<int> data(n);
		sum = 0;
		for(int i=0;i<n;i++){
			cin >> data[i];
			sum+= data[i]*100;
		}
		sum = (double)(100-p)/100*sum;
		cout << (data[m-1]?sum / data[m-1]:0) << endl;
	}
}