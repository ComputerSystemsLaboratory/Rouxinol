#include <bits/stdc++.h>
using namespace std;

string s;
int size = 0, i = 0, all = 0;

list<int> rec(int start){
	list<int> areas;
	int area = 0;
	bool downed = false;
	for(i=start; i<size; i++){
		switch(s[i]){
		case '\\':
			if(downed)
				for(int tmp : rec(i))
					areas.push_back(tmp);
			downed = true;
			break;
		case '_':
			if(!downed) return areas;
			break;
		case '/':
			if(downed){
				area = i - start;
				//cout << "[" << start << "->" << i << "]" << endl;
				for(int tmp : areas)
					area += tmp;
				areas.clear();
				areas.push_back(area);
				downed = false;
			}
			return areas;
		}
	}
	return areas;
}


list<int> rec0(){
	list<int> areas;
	while(i < size){
		for(int area : rec(i))
			areas.push_back(area);
		i++;
	}
	return areas;
}

int main(){
	cin >> s;
	size = static_cast<int>(s.size());
	list<int> list = rec0();
	for(int area : list) all += area;
	cout << all << endl << list.size();
	for(int area : list) cout << ' ' << area;
	cout << endl;
	return 0;
}

