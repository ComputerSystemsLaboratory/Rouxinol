#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>

using namespace std;

int main ()
{
	string word;
	stack<int> S;
	while(cin>>word){
		if(word=="+"){
			int sum=0;
			sum+=S.top();
			S.pop();
			sum+=S.top();
			S.pop();
			S.push(sum);
		}
		else if(word=="-"){
			int sub=0;
			sub-=S.top();
			S.pop();
			sub+=S.top();
			S.pop();
			S.push(sub);

		}
		else if (word=="*"){
			int product=1;
			product*=S.top();
			S.pop();
			product*=S.top();
			S.pop();
			S.push(product);
		}
		else{
			int num=atoi(word.c_str());
			S.push(num);
		}
	}

	cout<<S.top()<<endl;
	return 0;
}