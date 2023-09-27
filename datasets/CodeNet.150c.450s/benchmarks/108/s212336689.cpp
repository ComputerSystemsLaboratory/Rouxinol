#include <iostream>
#include <queue>

using namespace std;

	int TIME = 0;
	int d[101];
	int num;
	int graph[101][101] = {0};

int main(){
	int hon;
	int eda;
	int ver;
	queue<int> QUE;

	cin>>num;

	for(int i=1;i<=num;i++)
		d[i] = -1;

	for(int i=0;i<num;i++){
		cin>>eda;
		cin>>hon;
		for(int j=0;j<hon;j++){
			cin>>ver;
			graph[eda][ver]++;
		}
	}
	QUE.push(1); //start
	d[1] = 0;

	do{
		ver = QUE.front();
		QUE.pop();
		for(int i=1;i<=num;i++){
			if(graph[ver][i] == 1 && d[i]==-1){
				d[i] = d[ver] + 1;
				QUE.push(i);
			}
		}
	}while(!QUE.empty());
		
	for(int i=1;i<=num;i++){
		cout<<i<<" "<<d[i]<<endl;
	}

	return 0;
}