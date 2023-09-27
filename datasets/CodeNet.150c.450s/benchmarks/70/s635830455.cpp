#include <iostream>

const int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
const std::string str[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

int m2d(int month)
{
	if(month==0)
		return 0;
	return days[month-1] + m2d(month-1);
}

int main(void)
{
	int m,d;
	while(true)
	{
		std::cin >> m >> d;
		if(!m)
			break;

		std::cout << str[(m2d(m-1)+d+4-1)%7] << std::endl;
	}
	return 0;
}