#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int ChangeToNum(string str)
{
	int num= 0, digit= 1;
	for(int i= 0; i < str.length(); i++)
	{
		switch(str[i])
		{
		case 'm': m:
			num+= 1000*digit;
			digit= 1;
			break;
		case 'c': c:
			num+= 100*digit;
			digit= 1;
			break;
		case 'x': x:
			num+= 10*digit;
			digit= 1;
			break;
		case 'i': i:
			num+= digit;
			digit= 1;
			break;
		default:
			digit= str[i]-'0';
		}
	}
	return num;
}

void ChangeToStr(int num)
{
	char str[9]= {};
	int idx= 0, check= 0, div= 1000;
	char mcxi[4]= {'m', 'c', 'x', 'i'};

	while(check!=4)
	{
		if(num/div != 0)
		{
			if(num/div != 1)
				str[idx++]= num/div+'0';
			str[idx++]= mcxi[check];
		}
		num%= div;
		div/= 10;
		check++;
	}
	str[idx]= '\0';

	cout<<str<<endl;
}

int main(void)
{
	int num;
	cin>>num;

	for(int i= 0; i < num; i++)
	{
		string str1, str2;
		cin>>str1>>str2;

		ChangeToStr(ChangeToNum(str1)+ChangeToNum(str2));
	}
	return 0;
}