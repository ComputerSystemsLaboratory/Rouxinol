#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
	int n,q;
	cin >> n >> q;
	queue<string> names;
	queue<int> times;
	int t,roop;
	string name;
	for(roop=0;roop<n;roop++){
		cin >> name >> t;
		names.push(name);
		times.push(t);
	}
	int currenttime=0;
	while(n){
		t=times.front();
		times.pop();
		name=names.front();
		names.pop();
		if(q<t){
			currenttime+=q;
			t-=q;
			names.push(name);
			times.push(t);
		}else{
			currenttime+=t;
			cout << name << " " << currenttime << endl;
			n--;
		}
	}
	return 0;
}
