#include <iostream>
#include <sstream>
#include <vector>
#include <stack>

using namespace std;

int stringToInt(string& s){
	int ans = 0, digit=1;
	char c;
	bool neg = (s.size()>0 && s[0]=='-')?true:false;

	for(int i=s.size()-1;i>=0;i--,digit*=10){
		c = s[i];
		if(c>='0'&&c<='9'){
			ans += (c-48) * digit;
		}
	}

	return neg?ans*-1:ans;
}

int main(){

	string receive, polish;
	getline(cin, receive);
	istringstream ss(receive);
	stack<int> nums;
	int num1, num2;

	while(ss>>polish){

		if(polish.size()==1 && (polish[0]=='+'||polish[0]=='-'||polish[0]=='*'||polish[0]=='/') ){

			num2 = nums.top();
			nums.pop();
			num1 = nums.top();
			nums.pop();

			switch(polish[0]){
				case '+' :
					nums.push( num1 + num2 );
					break;

				case '-' :
					nums.push( num1 - num2 );
					break;

				case '*' :
					nums.push( num1 * num2 );
					break;

				case '/' :
					nums.push( num1 / num2 );
					break;

				default : break;
			}

		} else {
			nums.push( stringToInt(polish) );
		}
	}

	if(nums.size()!=1){
		cout << "Something went wrong. But anyway, the result is, here it comes." << endl;
	}
	cout << nums.top() << endl;

	return 0;
}

