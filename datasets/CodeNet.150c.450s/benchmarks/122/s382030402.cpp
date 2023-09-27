#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int main(){
	priority_queue<int> priorityqueue;//優先順位キュー
	char loader[8];//ローダー(char*)
	int loadnum;//ローダー(int)

	while (1){
		cin >> loader;
		if (strcmp(loader, "insert") == 0){
			cin >> loadnum;
			priorityqueue.push(loadnum);
		}
		if (strcmp(loader, "extract") == 0){
			cout << priorityqueue.top() << endl;
			priorityqueue.pop();
		}
		if (strcmp(loader, "end") == 0){
			break;
		}
	}

}