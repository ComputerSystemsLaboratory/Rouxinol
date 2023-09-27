#include <iostream>
#include <list>

using namespace std;


int main(){
	list<int> list;
	int n;
	cin >> n;

	string cmd;
	int i, arg;
	for(i = 0; i < n; i++){
		cin >> cmd;
		if(cmd == "insert"){
			cin >> arg;
			list.push_front(arg);
		}else if(cmd == "delete"){
			cin >> arg;
			int pos = 0;
			for(int tmp : list){
				if(tmp == arg)
					break;
				pos++;
			}
			if(pos != static_cast<int>(list.size()))
				list.erase(next(list.begin(), pos));
		}else if(cmd == "deleteFirst"){
			list.pop_front();
		}else if(cmd == "deleteLast"){
			list.pop_back();
		}
	}

	int size = static_cast<int>(list.size());
	if(size > 0){
		cout << list.front(); list.pop_front();
		for(i = 1; i < size; i++){
			cout << ' ' << list.front(); list.pop_front();
		}
	}
	cout << endl;
	return 0;
}
