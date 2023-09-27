#include<stack>
#include<iostream>

using namespace std;

int main()
{
	stack<int> in,out;
	int i;
	while(cin>>i){
		if(i)	in.push(i);
		else	out.push(in.top()),in.pop();
	}
	while(!out.empty())	in.push(out.top()),out.pop();	// reverse
	while(!in.empty()){
		printf("%d\n",in.top());
		in.pop();
	}
	return 0;
}