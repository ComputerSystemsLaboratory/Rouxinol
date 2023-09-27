#include <iostream>
#include<vector>
#include<stack>
#include<string>
#include<sstream>
int StoI(std::string str) {
	int ret;
	std::stringstream ss;
	ss << str;
	ss >> ret;
	return ret;
}
class Equation {
	std::stack<int>st;
public:
	void RenewStack(int num);
	int ReturnStack(void);
	void DeleteStack(void);
};
void Equation::RenewStack(int num) {
	//????°???????????????????
	st.push(num);
}
int Equation::ReturnStack(void) {

	return st.top();
}
void Equation::DeleteStack(void) {
	st.pop();
}
int main(void) {
	Equation Sequence;
	std::string Input;
	//while (std::getline(std::cin,Input)) {
	int a, b;
	while (std::cin >> Input) {
		if ((Input) == "=") { break; }
		if (Input == "+") {
			a = Sequence.ReturnStack();
			Sequence.DeleteStack();
			b = Sequence.ReturnStack();
			Sequence.DeleteStack();
			Sequence.RenewStack(a + b);
		}
		else if (Input == "-") {
			a = Sequence.ReturnStack();
			Sequence.DeleteStack();
			b = Sequence.ReturnStack();
			Sequence.DeleteStack();
			Sequence.RenewStack(b - a);

		}
		else if (Input == "*") {

			a = Sequence.ReturnStack();
			Sequence.DeleteStack();
			b = Sequence.ReturnStack();
			Sequence.DeleteStack();
			Sequence.RenewStack(a * b);
		}
		else if (Input == "/") {

			a = Sequence.ReturnStack();
			Sequence.DeleteStack();
			b = Sequence.ReturnStack();
			Sequence.DeleteStack();
			Sequence.RenewStack(b / a);
		}
		else {
			Sequence.RenewStack(StoI(Input));
		}
	}
	std::cout << Sequence.ReturnStack() << std::endl;
	//system("pause");
	return 0;
}