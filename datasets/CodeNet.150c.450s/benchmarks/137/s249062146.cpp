 #include <iostream>
 #include <vector>
 
 using namespace std;

vector<bool> D(125*125*125*125);

int getw(char * str)
{
	int w = 0;
	while (1)
	{
		w *= 5;
		switch(*str++)
		{
		case 'A': w += 1; break;
		case 'C': w += 2; break;
		case 'G': w += 3; break;
		case 'T': w += 4; break;
		default: return w/5;
		}
	}
}

 int main()
{
	int n;
	cin >> n;
	char inst[16];
	char str[16];
	while(n--)
	{
		cin >> inst >> str;
		int w = getw(str);
		if (inst[0] == 'i')
		{
			D[w] = true;
		}
		else
		{
			cout << (D[w] ? "yes\n" : "no\n");
		}
	}
}