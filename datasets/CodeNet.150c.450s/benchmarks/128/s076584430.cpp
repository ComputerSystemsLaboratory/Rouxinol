//0006 Reverse Sequence
//^¦çê½¶ñð½]µ½àÌðoÍµÈ³¢
//È¨AüÍ³êé¶ñÍ20¶ÈºÆ·é

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	string str;
	while( cin >> str)
	{
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
}