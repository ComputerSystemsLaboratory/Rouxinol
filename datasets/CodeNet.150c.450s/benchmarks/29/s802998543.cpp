// 2016/05/23 Tazoe

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> L;

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		char com[20];		// C?????????
		cin >> com;

		if(com[0]=='i'){
			int x;
			cin >> x;

			L.push_front(x);
		}
		else if(com[6]=='F'){
			L.pop_front();
		}
		else if(com[6]=='L'){
			L.pop_back();
		}
		else{
			int x;
			cin >> x;

			for(list<int>::iterator it=L.begin(); it!=L.end(); it++){
				if(*it==x){
					L.erase(it);
					break;
				}
			}
		}
	}

	for(list<int>::iterator it=L.begin(); it!=L.end(); it++){
		if(it!=L.begin()){
			cout << ' ';
		}
		cout << *it;
	}
	cout << endl;

	return 0;
}