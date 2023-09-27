#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
	int n;
	int i;
	stack<int> in;
	while(scanf("%d",&i) != EOF){
		if(i != 0){
			in.push(i);
		}
		else {
			cout << in.top() << endl;
			in.pop();
		}
	}
}