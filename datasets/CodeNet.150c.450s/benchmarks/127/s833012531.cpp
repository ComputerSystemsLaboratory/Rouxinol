#include <iostream>
#include <set>
#include <string>

using namespace std;

string reverse(string st, int size){
	string reLine;
	for(; size > 0; size--){
		reLine.push_back(st[size-1]);
	}
	return reLine;
}


int main(){
	int n;
	string arrivalLine;
	set<string> s;
	
	cin >> n;
	while(n--){
		string front,rear,reFront,reRear;
		s.clear();
		cin >> arrivalLine;
		for(int i = 1; i < arrivalLine.size(); i++){
			front = arrivalLine.substr(0,i);			// 前
			rear = arrivalLine.substr(i);				// 後ろ
			// cout << front << " + " << rear << endl;
			// 反転
			reFront = reverse(front, front.size());
			reRear = reverse(rear, rear.size());

			s.insert(front + rear);
			s.insert(rear + front);
			s.insert(front + reRear);
			s.insert(reRear + front);
			s.insert(reFront + rear);
			s.insert(rear + reFront);
			s.insert(reFront + reRear);
			s.insert(reRear + reFront);
		}
		// for(auto it : s){
		// 	cout << it << endl;
		// }
		cout << s.size() << endl;
	}
}