#include <iostream>
#include <string>
#include <cstring>
using namespace std;


struct com
{
	string syori;
	int a;
	int b;
	string c;
};


int main()
{
	string str;
	com In[100] = {};
	int count;

	cin >> str;
	cin >> count;

	for (int i1 = 0; i1 < count; i1++)
	{
		cin >> In[i1].syori;
		if (In[i1].syori == "print" || In[i1].syori == "reverse")
		{
			cin >> In[i1].a;
			cin >> In[i1].b;
		}
		else if (In[i1].syori=="replace")
		{
			cin >> In[i1].a;
			cin >> In[i1].b;
			cin >> In[i1].c;
		}
	}


	for (int i = 0; i < count; i++)
	{
		if (In[i].syori == "print")
		{
			for (int i1 = In[i].a; i1 <= In[i].b; i1++)
			{
				cout << str[i1];
			}
			cout << endl;
		}

		else if (In[i].syori == "reverse")
		{
			int x = 0;
			for (int i1 = In[i].a; i1 < In[i].a + 1 + (In[i].b - In[i].a) / 2; i1++)
			{
				char c;
				c = str[i1];
				str[i1] = str[In[i].b - x];
				str[In[i].b - x] = c;
				x++;
			}
		}

		else if (In[i].syori == "replace")
		{
			str.replace(In[i].a, In[i].b - In[i].a + 1, In[i].c);
		}
	}
	return 0;
}