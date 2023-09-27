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

struct processtime {
	char name[11];
	int time;
};

int main(){
	int n , q;
	int i;
	int rest;
	int time=0;
	queue<processtime> qu;
	cin >> n >> q;
	processtime* p = new processtime [n];
	processtime tmp;
	for(i=0;i<n ;++i){
		cin >> p[i].name >> p[i].time;
		qu.push(p[i]);
	}
	while(!qu.empty()){
		tmp=qu.front();
		qu.pop();
		rest=tmp.time-q;
		if(rest>0){
		time+=q;
		tmp.time=rest;
		qu.push(tmp);
		} else {
			time+=q+rest;
			cout << tmp.name << " " << time << endl;
		}	 
	}
	return 0; 
}