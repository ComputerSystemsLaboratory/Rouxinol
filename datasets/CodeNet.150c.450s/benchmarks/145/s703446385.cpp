#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	map<string,int> len,times;
	vector<string> brain;

	string ts;
	int maxlength = 0;
	int maxcount = 0;
	string AL,AC;

	while(cin >> ts) {
		if(times.count(ts)>0) {
			times[ts] += 1;
		} else {
			times.insert(make_pair(ts,1));
			len.insert(make_pair(ts,ts.length()));
			brain.push_back(ts);
		}

	}
	for(int i=0;i<len.size(); i++) {
		if(len[brain[i]] > maxlength) {
			maxlength = len[brain[i]];
			AL = brain[i];
		}
		if(times[brain[i]] > maxcount) {
			maxcount = times[brain[i]];
			AC = brain[i];
		}
	}
	cout << AC << " " << AL << endl;
}