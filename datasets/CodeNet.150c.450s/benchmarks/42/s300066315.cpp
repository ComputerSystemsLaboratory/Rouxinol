#include <queue>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int quantum, now=0, n, index; //index????????\??????????????????????????°
	int time[100000];
	string name[100000];
	queue<int> Q;

	cin >> n >> quantum;

	for(int i=0; i<n; i++){
		Q.push(i);
		cin >> name[i] >> time[i];
	}

	while(!Q.empty()){
		index = Q.front();
		if(time[index] > quantum){
			now += quantum;
			time[index] -= quantum;
			Q.pop();
			Q.push(index);
		}else{
			now += time[index];
			time[index] = now;
			cout << name[index] << " " << time[index] << endl;
			Q.pop();
		}
	}

	/*
	for(int i=0; i<n; i++){
		cout << name[i] << " " << time[i] << endl;
	}
	*/

	return 0;
}