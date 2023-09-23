#include <iostream>

using namespace std;

int main(){
	int graph[101][101] = {0};
	int num;
	int hon;
	int eda;
	int ver;

	cin>>num;
	for(int i=0;i<num;i++){
		cin>>eda;
		cin>>hon;
		for(int j=0;j<hon;j++){
			cin>>ver;
			graph[eda][ver]++;
		}
	}
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			cout<<graph[i][j];
			if(j==num)
				break;
			cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}