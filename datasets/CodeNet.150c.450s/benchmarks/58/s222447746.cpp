#include <iostream>
#include <string>
#include <stack>
#include <stdlib.h>
#include <string.h>

int main(){
	std::stack<int> Stack;//スタック
	std::string lineloader;//行ローダー

	//ロード
	std::getline(std::cin, lineloader);
	char* line = new char[lineloader.size() + 1];
	strcpy(line, lineloader.c_str());
	char* tokenloader = strtok(line, " ");

	int x = 0, y = 0;//計算用変数
	while (tokenloader){
		//計算
		if (strcmp(tokenloader, "+") == 0){//演算子+
			y = Stack.top(); Stack.pop();
			x = Stack.top(); Stack.pop();
			x += y;
			Stack.push(x);
		} else if (strcmp(tokenloader, "-") == 0){//演算子-
			y = Stack.top(); Stack.pop();
			x = Stack.top(); Stack.pop();
			x -= y;
			Stack.push(x);
		} else if (strcmp(tokenloader, "*") == 0){//演算子*
			y = Stack.top(); Stack.pop();
			x = Stack.top(); Stack.pop();
			x *= y;
			Stack.push(x);
		} else {//数値
			Stack.push(atoi(tokenloader));
		}
		//順に読み込み
		tokenloader = strtok(NULL, " ");
	}

	std::cout << Stack.top() << std::endl;//出力

	return 0;
}