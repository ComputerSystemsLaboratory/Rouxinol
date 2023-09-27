#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	queue<int> q;
	queue<string> name;
	int n , tim;
	cin >> n >> tim;
	//string name[100000];
	for( int i=0 ; i<n ; i++ ){
		int x;
		string str;
		cin >> str >> x;
		q.push(x);
		name.push(str);
	}
	int counter=0;
	while(1){
		if( q.size() == 0 )break;
		int x = q.front();
		string str = name.front();
		q.pop();
		name.pop();
		if( x-tim >0 ){
			q.push(x-tim);
			name.push(str);
			counter+=tim;
		}
		else{
			counter+=x;
			cout << str <<" "<<counter<<endl;
		}
	}
}