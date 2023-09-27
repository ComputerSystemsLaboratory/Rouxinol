#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
#include <string>
#include <cmath>
#include <iomanip>

int main();


int main(){
	std::stack<int> input;		//入力される数（車両番号）を格納する
	std::vector<int> output;	//出力される車両番号
	int dummy = 0;				//ダミーナンバー
	int count = 0;

	//while (count < 8){
		//std::cin >> dummy;
		//count++;
	while (std::cin >> dummy){
		if ((dummy == 0) && (!input.empty())){
			output.push_back(input.top());
			input.pop();
		}
		else if((1 <= dummy) && (dummy <= 10)){
			input.push(dummy);
		}
		else{
			//何もしない
		}
	}

	for (int i = 0; i < output.size(); i++){
		std::cout << output[i] << std::endl;
	}

	//while (1);
	return 0;
}
