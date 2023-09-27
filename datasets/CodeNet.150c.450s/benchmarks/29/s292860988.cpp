#include<list>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	list<int> lst;
	double obj;
	
	int n;
	string command;
	cin >> n;
	while(n--)
	{
		cin >> command;
		if(command[0] == 'i')
		{
			cin >> obj;	
			lst.push_front(obj);
		}
		else if(command[0] == 'd')
			{
				if(command[6]=='F')
					lst.pop_front();
				else if(command[6]=='L')
					lst.pop_back();
				else
				{
					cin >> obj;
					for(list<int>::iterator i = lst.begin(); i!=lst.end(); i++)
					{
						if(obj == *i)
							{lst.erase(i);break;}				
					}
				}			
			}


	}
	int sk = 0;
	for(list<int>::const_iterator i = lst.begin(); i!=lst.end(); i++)
	{
	if(sk++) 
			cout << " ";
	cout <<	*i;	
	}
	cout << endl;
}