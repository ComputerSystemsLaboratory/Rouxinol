#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define PLUS '+'
#define MINUS '-'
#define TIMES '*'

int main(int argc, char *argv[]) {
	stack<int> stack01;
	string input, num;
	stringstream ss;
	getline(cin, input);
	
	for(int i = 0; i<input.length(); i++)
	{
		if(input[i] == ' ')
		{
			if(!num.empty())
			{
				int num_for_push;
//				ss << num;
//				ss >> num_for_push;
				num_for_push = stoi(num);
//				cout<<"push the num "<<num_for_push<<endl;	
				stack01.push(num_for_push);
				num.erase();
			}
			
		}
		else
		{
			switch(input[i])
			{
				case PLUS:
					{
//					cout<<"this is mark "<<input[i]<<endl;	
					int x = stack01.top();
//					cout<<x<<"=x is poped"<<endl;
					stack01.pop();
					int y = stack01.top();
//					cout<<y<<"=y is poped"<<endl;
					stack01.pop();
					int z = y+x;
//					cout<<"push the num "<<z<<endl;	
					stack01.push(z);
					}
					break;
				case MINUS:
					{
//					cout<<"this is mark "<<input[i]<<endl;
					int x = stack01.top();
//					cout<<x<<"=x is poped"<<endl;
					stack01.pop();
					int y = stack01.top();
//					cout<<y<<"=y is poped"<<endl;
					stack01.pop();
					int z = y-x;
//					cout<<"push the num "<<z<<endl;	
					stack01.push(z);
					}
					break;
				case TIMES:
					{
//					cout<<"this is mark "<<input[i]<<endl;
					int x = stack01.top();
//					cout<<x<<"=x is poped"<<endl;
					stack01.pop();
					int y = stack01.top();
//					cout<<y<<"=y is poped"<<endl;
					stack01.pop();
					int z = y*x;
//					cout<<"push the num "<<z<<endl;	
					stack01.push(z);
					}
					break;
				default:
					num.push_back(input[i]);
					break; 
			}
		}
	}
	cout<<stack01.top()<<endl;
	
	return 0;
}