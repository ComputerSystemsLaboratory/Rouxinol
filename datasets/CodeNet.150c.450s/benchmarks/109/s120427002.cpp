#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct data{
	int s, t;
};

bool comp(data d1, data d2){
	return d1.s < d2.s;
}

int main(){
	int n;
	while(cin >> n && n){
		vector<data> qd1;
		priority_queue<int, vector<int>, greater<int> > qd2;
		for(int i = 0; i < n; i++){
			string s1, s2;
			cin >> s1 >> s2;
			data d;
			d.s = (s1[0]-'0')*36000 + (s1[1]-'0')*3600 + (s1[3]-'0')*600 + 
				(s1[4]-'0')*60 + (s1[6]-'0')*10 + (s1[7]-'0');
			d.t = (s2[0]-'0')*36000 + (s2[1]-'0')*3600 + (s2[3]-'0')*600 + 
				(s2[4]-'0')*60 + (s2[6]-'0')*10 + (s2[7]-'0');
			qd1.push_back(d);
		}
		sort(qd1.begin(), qd1.end(), comp);
		vector<data>::iterator iter = qd1.begin();
		while(iter != qd1.end()){
			data d = *iter;
			iter++;
			if(qd2.empty()){
				qd2.push(d.t);
			}else{
				int d2 = qd2.top();
				if(d2 <= d.s) qd2.pop();
				qd2.push(d.t);
			}
		}
		cout << qd2.size() << endl;
	}
	return 0;
}