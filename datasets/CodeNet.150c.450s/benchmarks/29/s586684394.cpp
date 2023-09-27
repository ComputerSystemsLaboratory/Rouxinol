#include "iostream"
#include "string"
#include <stack>
#include <queue>
#include <sstream>
#include <cstring>
using namespace std;

void A()
{
	stack<int> stack;
	string str;
	while (cin >> str)
	{
		if (str == "+" || str == "-" || str == "*")
		{
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			int c;
			if (str == "+")
			{
				c = a + b;
			}
			else if (str == "-")
			{
				c = a - b;
			}
			else
			{
				c = a * b;
			}

			stack.push(c);
		}
		else
		{
			int num = stoi(str);
			stack.push(num);
		}
	}

	cout << stack.top() << endl;
}

void B()
{
	queue<string> name;
	queue<int> time;
	int spendTime = 0;
	int N;
	int Q;
	cin >> N;
	cin >> Q;

	cin.ignore();
	string line;
	string s;
	for (int i = 0; i < N;i++)
	{
		getline(cin, line);
		stringstream ss(line);
		ss >> s;
		name.push(s);
		ss >> s;
		time.push(stoi(s));
	}

	while (!time.empty())
	{
		int left = time.front();
		time.pop();
		string n = name.front();
		name.pop();

		if (Q >= left)
		{
			spendTime += left;
			cout << n << " " << spendTime<<endl;
		}
		else
		{
			spendTime += Q;
			time.push(left - Q);
			name.push(n);
		}
	}

	/*while (!name.empty())
	{
		cout << name.front() << endl;
		name.pop();
		cout << time.front() << endl;
		time.pop();
	}*/
}

struct Cell
{
	int data;
	Cell *prev;
	Cell *next;
};

Cell *start;
void insert(int x)
{
	Cell *c = (Cell *)malloc(sizeof(Cell));
	c->data = x;
	c->prev = start;
	c->next = start->next;
	start->next->prev = c;
	start->next = c;
}
void delete_x(int x)
{
	Cell *c = start->next;
	while (c != start && c->data != x)
	{
		c = c->next;
	}

	if (c == start)return;

	c->prev->next = c->next;
	c->next->prev = c->prev;
	free(c);
}

void deleteFirst()
{
	Cell *c = start->next;
	if (c == start)return;

	c->prev->next = c->next;
	c->next->prev = c->prev;
	free(c);
}

void deleteLast()
{
	Cell *c = start->prev;
	if (c == start)return;

	c->prev->next = start;
	start->prev = c->prev;
	free(c);
}

void print()
{
	Cell *c = start->next;
	int i = 0;
	while (true)
	{
		if (c == start)break;
		if (i != 0)cout << " " << flush;
		cout << c->data << flush;
		i++;
		c = c->next;
	}

	cout << endl;
}

void C()
{
	int N;
	//string command;
	int x = 0;
	//cin >> N;
	scanf("%d",&N);
	start = (Cell *)malloc(sizeof(Cell));
	start->next = start;
	start->prev = start;
	char command[20];
	for (int i = 0; i < N;i++)
	{
		scanf("%s",command);

		//cin >>command;
		//string first;
		//first = command.substr(0,1);

		if (command[0] == 'i')
		{
			scanf("%d", &x);
			insert(x);
			//cout << "insert" << endl;
		}
		else if (strlen(command)> 6)
		{
			//string seventh;
			//seventh = command.substr(6, 1);

			if (command[6]== 'F')
			{
				//cout << "First" << endl;
				deleteFirst();

			}
			else if (command[6] == 'L')
			{
				//cout << "Last" << endl;
				deleteLast();
			}

		}
		else if (command[0] == 'd')
		{
			scanf("%d", &x);
			//cout << "delete" << endl;
			delete_x(x);
		}

		//print();
	}

	print();
}

void D()
{

}
int main()
{
	//A();
	//B();
	C();
	return 0;
}