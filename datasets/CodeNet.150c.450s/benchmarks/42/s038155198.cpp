#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

class namedata{
public:
	string name;
	int data;
	namedata(string s,int i){
		name = s;
		data = i;
	}
};

int main(){
	int n,q;
	int data;
	int count = 0;
	string name;
	cin >> n;
	cin >> q;
	queue<namedata> datum;
	for(int i = 0;i < n;i++){
		cin >> name;
		cin >> data;
		namedata nd(name,data);
		datum.push(nd);
	}
	while(!datum.empty()){
		if(datum.front().data > q){
			namedata nmd(datum.front().name,datum.front().data-q);
			datum.pop();
			datum.push(nmd);
			count += q;
		}else{
			count += datum.front().data;
			cout << datum.front().name << " " << count << endl;
			datum.pop();
		}
	}
}