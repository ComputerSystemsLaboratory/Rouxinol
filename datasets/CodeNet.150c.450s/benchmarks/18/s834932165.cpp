#include <iostream>
//#include <vector>
//#include <math.h>
#include <string>

int main(void);
int kiriage(int num);


int main(){
	int n;					//n週
	int debut = 100000;		//借金
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		debut *= 1.05;
		std::string str_debut = std::to_string(debut);
		if ((str_debut[str_debut.length() - 1] == '0') &&
			(str_debut[str_debut.length() - 2] == '0') &&
			(str_debut[str_debut.length() - 3] == '0')
			){
			;
		}
		else{
			debut = kiriage(debut);
		}
	}

	std::cout << debut << std::endl;

	//while (1);
	return 0;
}

//1000円未満を切り上げる関数
int kiriage(int num){
	num = num / 1000 * 1000 + 1000;
	
	return num;
}
