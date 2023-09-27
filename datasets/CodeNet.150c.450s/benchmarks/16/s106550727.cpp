#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
using namespace std;

string d;
int n;
int A = 0;
queue<int> L1;
stack<int> L2;
bool s = false;
int depth = 0;
int b = 0;
int area = 0;
bool e = false;
int k = 0;

int main(){
	cin >> d;
	n = d.size();
	for (int i = 0; i < n; i++){
		if (s){
			if (d[i] == '\\'){
				depth--;
				area += -depth;
			}
			else if (d[i] == '/'){
				depth++;
				area += -depth;
				e = true;
				if (depth == 0)
				{
					b = i + 1;
					L1.push(area);
					A += area;
					k++;
					area = 0;
					s = false;
					e = false;
				}
			}
			else{
				area += -depth;
			}
		}
		else if (d[i] == '\\'){
			s = true;
			depth--;
			area += -depth;
		}
	}
	if (e)
	{
		s = false;
		depth = 0;
		area = 0;
		for (int i = n - 1; i >= b; i--){
			if (s){
				if (d[i] == '/'){
					depth--;
					area += -depth;
				}
				else if (d[i] == '\\'){
					depth++;
					area += -depth;
					if (depth == 0)
					{
						L2.push(area);
						A += area;
						k++;
						area = 0;
						s = false;
					}
				}
				else{
					area += -depth;
				}
			}
			else if (d[i] == '/'){
				s = true;
				depth--;
				area += -depth;
			}
		}
	}
	cout << A << endl;
	cout << k;
	while (!L1.empty()){
		cout << " " << L1.front();
		L1.pop();
	}
	while (!L2.empty())
	{
		cout << " " << L2.top();
		L2.pop();
	}
	cout << endl;
	cin >> A;
	return 0;
}