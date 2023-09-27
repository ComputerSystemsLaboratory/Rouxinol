#include <iostream>
#include<string>
#include<queue>
#include <utility>
int main(void) {
	int Time = 0;
	int N,Quantum;
	std::cin >> N>>Quantum;
	std::queue<std::pair<std::string, int> >Process_Quantum;
	for (int i = 0; i < N; ++i) {
		std::string InputString;
		int InputInt;
		std::cin >> InputString >> InputInt;
		Process_Quantum.push(make_pair(InputString, InputInt));
	}
	while (!(Process_Quantum.empty())) {	
		std::pair<std::string, int>Cal;
		Cal = Process_Quantum.front();
		Process_Quantum.pop();
		if (Cal.second > Quantum) {
			Time+=Quantum;
			Cal.second -= Quantum;
			Process_Quantum.push(Cal);
		}
		else {
			Time += Cal.second;
			std::cout << Cal.first << " " << Time << std::endl;
		}
	}
	//system("pause");
	return 0;
}