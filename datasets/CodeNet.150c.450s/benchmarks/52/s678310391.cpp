//Switching Railroad Cars

//vñF0ªüÍ³ê½çStack©çpopµÄ»êðoÍµëA»êÈOÍpushµÆ¯
//üÍª³µ¢±ÆÍÛá³êÄ¢é@¿ÈÝÉpush³êéàÌÍ1`10çµ¢

//ÅÍX^bNÍóÅ é

#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	stack<int> s;
	int x;
	while(cin >> x)
	{
		if(!x)
		{
			cout << s.top() << endl;
			s.pop();
		}
		else
			s.push(x);
	}
	return 0;
}