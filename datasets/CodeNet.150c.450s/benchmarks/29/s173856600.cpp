#include<iostream>
#include<cstring>
using namespace std;

#define LISTMAX 1000000

struct command {
	char str[20];
	int key;
};

class dlList {
private:
	int list[LISTMAX];
	int head, num;
public:
	dlList();
	void Ins(int);
	void Del(int);
	void DelFirst();
	void DelLast();
	void ShowList();
	void show();
};

dlList::dlList()
	:list()
	,head(0),
	num(0)
{}

void dlList::Ins(int x)
{
	this->head = (head + LISTMAX - 1) % LISTMAX;
	this->num++;
	this->list[head] = x;
	return;
}

void dlList::Del(int x)
{
	int flag = 0;
	for (int i = 0; i < this->num; i++)
		if (list[(head + i) % LISTMAX] == x && !flag)
			flag = 1;
		else
			list[(head + i - flag + LISTMAX) % LISTMAX] = list[(head + i) % LISTMAX];
	this->num -= flag;

	return;
}

void dlList::DelFirst()
{
	this->head = (this->head + 1) % LISTMAX;
	this->num--;
	return;
}

void dlList::DelLast()
{
	this->num--;
	return;
}

void dlList::ShowList()
{
	int tmp;
	tmp = this->head;
	for (int i = 0; i < this->num; i++)
	{
		if (i)
			cout << " ";
		cout << this->list[tmp];
		tmp = (tmp + 1) % LISTMAX;
	}
	cout << endl;
	return;
}

int main()
{
	int n;
	dlList dll;
	command tmp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp.str;
		if (!strcmp(tmp.str, "insert"))
		{
			cin >> tmp.key;
			dll.Ins(tmp.key);
		}
		else if (!strcmp(tmp.str, "delete"))
		{
			cin >> tmp.key;
			dll.Del(tmp.key);
		}
		else if (!strcmp(tmp.str, "deleteFirst"))
			dll.DelFirst();
		else
			dll.DelLast();
	}
	dll.ShowList();

	return 0;
}
