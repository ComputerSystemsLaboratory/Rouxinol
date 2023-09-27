#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <queue>
#include <algorithm>
using namespace std;

deque<long long int> dq;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,i;
	cin >> n;
	string s;
	int value;
	deque<long long int>::iterator it = dq.begin();
	for(i=0;i<n;++i){
		cin >> s;
		if(s=="insert"){
			cin >> value;
			dq.push_front(value);
		} else if (s=="delete"){
			cin >> value;
			deque<long long int>::iterator itr = dq.begin();
			while(itr!=dq.end()){
				if(*itr==value){
					dq.erase(itr);
					break;
				}
				itr++;
			}
		} else if (s=="deleteFirst"){
			dq.pop_front();
		} else if (s=="deleteLast"){
			dq.pop_back();
		}
	}
	int cnt=0;

	for(it=dq.begin();it!=dq.end();++it){
		cnt++;
	}
	for(i=0 ; i<cnt-1 ; ++i){
		cout << dq[i] << " ";
	}
	cout << dq[i];
        cout << endl;
	return 0; 
}