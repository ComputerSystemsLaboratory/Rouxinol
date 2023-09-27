#include<iostream>
#include<string>
#include<sstream>
#include<stack>

int main()
{
	using namespace std;
	stack<int> NumberRow;
	while(true){
		string in;
		cin >> in;
		if(cin.good() == false){
			break;
		}
		if(in == "+"){
			int End     = NumberRow.top();
			NumberRow.pop();
			int SemiEnd = NumberRow.top();
			NumberRow.pop();
			NumberRow.push(SemiEnd + End);
		}else if(in == "-"){
			int End     = NumberRow.top();
			NumberRow.pop();
			int SemiEnd = NumberRow.top();
			NumberRow.pop();
			NumberRow.push(SemiEnd - End);
		}else if(in == "*"){
			int End     = NumberRow.top();
			NumberRow.pop();
			int SemiEnd = NumberRow.top();
			NumberRow.pop();
			NumberRow.push(SemiEnd * End);
		}else{
			int Num;
			stringstream ss;
			ss << in;
			ss >> Num;
			NumberRow.push(Num);
		}
	}
	cout << NumberRow.top() << endl;
	return 0;
}