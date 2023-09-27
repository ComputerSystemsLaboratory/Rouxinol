#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

struct Puddle{
	int start, end, area;
};

int main(){
	string str;
	cin >> str;
	int n = str.size(), overall = 0;
	stack<Puddle> S;
	stack<int> slope;

	for(int i = 0; i < n; i++){
		if(str[i] == '\\'){
			slope.push(i);
		} else if(str[i] == '/'){
			if(!slope.empty()){
				Puddle temp;
				temp.start = slope.top();
				slope.pop();
				temp.end = i;
				temp.area = (temp.end - temp.start);
				overall += temp.area;
				while( !S.empty() ){
					if(temp.start < S.top().start){
						temp.area += S.top().area;
						S.pop();
					} else {
						break;
					}
				}
				S.push(temp);
			}
		}
	}
	cout << overall << endl;
	int m = S.size(), A[m];
	cout << m;
	for(int i = 0; i < m; i++){
		A[m - i - 1] = S.top().area;
		S.pop();
	}
	for(int i = 0; i < m; i++)
		cout << " " << A[i];
	cout << endl;
}