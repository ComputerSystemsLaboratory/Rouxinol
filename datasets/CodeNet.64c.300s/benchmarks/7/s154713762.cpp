#include <iostream>

int main()
{
	char mark;
	int number,tarou_have;
	bool cards[4][13] = {false};
	std::cin >> tarou_have;

		for(int i=0; i<tarou_have; i++)
		{
		std::cin >> mark >> number;
			switch(mark)
			{
				case 'S' : mark = 0; break;
				case 'H' : mark = 1; break;
				case 'C' : mark = 2; break;
				case 'D' : mark = 3; break;
			}
		cards[mark][number-1] = true;
		}
	
		//S
			for(int k=0; k<13; k++)
			{
				if(cards[0][k] == false){
					std::cout << "S " << k+1 << std::endl;
				}
			}
		//H
			for(int k=0; k<13; k++)
			{
				if(cards[1][k] == false){
					std::cout << "H " << k+1 << std::endl;
				}
			}
		//C
			for(int k=0; k<13; k++)
			{
				if(cards[2][k] == false){
					std::cout << "C " << k+1 << std::endl;
				}
			}
		//D
			for(int k=0; k<13; k++)
			{
				if(cards[3][k] == false){
					std::cout << "D " << k+1 << std::endl;
				}
			}
}