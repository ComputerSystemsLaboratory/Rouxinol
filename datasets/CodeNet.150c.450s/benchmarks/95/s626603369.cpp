#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	while (1) {
		int steps, count=0;
		cin >> steps;
		string leg1, leg2;
		if (steps == 0){ break; }
		int loops;
		if (steps % 2 == 1) { loops = (steps + 1) / 2; }
		else { loops = steps / 2; }
		for (int i = 0; i < loops; i++)
		{
			if (loops - i == 1) {
				if (steps % 2 == 1) {
					cin >> leg1;
					break;
				}
			}
				cin >> leg1 >> leg2;
			if (leg1=="lu"&&leg2=="ru")
			{	count = count + 1;}
			if (leg1 == "ru"&&leg2 == "lu")
			{count = count + 1;}
			if (leg1 == "ld"&&leg2 == "rd")
			{count = count + 1;}
			if (leg1 == "rd"&&leg2 == "ld")
			{count = count + 1;}
		}
		cout << count<<endl;
	};
	return 0;}