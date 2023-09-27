#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <chrono>

using namespace std;

class cNode
{
public:
	int key;
	cNode *prev, *next;

	cNode(){}
	cNode(int ikey)
	{
		key = ikey;
		prev = next = NULL;
	}
	cNode(int ikey, cNode *c)
	{
		key = ikey;
		prev = NULL;
		next = c;
	}
};

class cList 
{
	void insertKey(const int &);
	void deleteKey(const int &);
	void deleteFirst();
	void deleteLast();

	cNode *nHead, *nTail;
	cNode *tc;
public:
	cList()
	{
		nHead = nTail = NULL;
		tc = NULL;
	}

	void execute(const string &, const int &);
	void output();
};

void cList::output()
{
	cNode *cnout = nHead;
	ostringstream oss;
	while (cnout)
	{
		oss << cnout->key << " ";
		if (cnout->next == NULL)break;
		cnout = cnout->next;
	}
	string ans(oss.str());
	ans.rfind(" ");
	ans.replace(ans.rfind(" "),ans.size(), "");
	cout << ans << endl;
}

void cList::execute(const string &com, const int &key)
{
	if (com[0] == 'i')				insertKey(key);
	else if (com[6] == 'F')			deleteFirst();
	else if (com[6] == 'L')			deleteLast();
	else if (com[0] == 'd')			deleteKey(key);
}

void cList::insertKey(const int &ikey)
{
	if (nHead)
	{
		nHead = new cNode(ikey, nHead);
		nHead->next->prev = nHead;
	}
	else if (!nHead && !nTail)
	{
		nHead = nTail = new cNode(ikey);
	}
}

void cList::deleteKey(const int &dkey)
{
	tc = nHead;
	while (tc)
	{
		if (tc->key == dkey)
		{
			if (!tc->prev && tc->next)
			{
				tc->next->prev = NULL;
				nHead = tc->next;
				delete tc;
				break;
			}
			else if (tc->prev && tc->next)
			{
				tc->prev->next = tc->next;
				tc->next->prev = tc->prev;
				tc->next = tc->prev = NULL;
				delete tc;
				break;
			}
			else if (tc->prev && !tc->next)
			{
				tc->prev->next = NULL;
				nTail = tc->prev;
				delete tc;
				break;
			}
		}
		if (tc->next)
			tc = tc->next;
		else
			break;
	}
}

void cList::deleteFirst()
{
	if (!nHead->prev && nHead->next)
	{
		nHead->next->prev = NULL;
		nHead = nHead->next;
		delete nHead->prev;
	}
	else if (!nHead->prev && !nHead->next)
	{
		nHead = nTail = NULL;
	}
}

void cList::deleteLast()
{
	if (nTail->prev && !nTail->next)
	{
		nTail->prev->next = NULL;
		nTail = nTail->prev;
		delete nTail->next;
	}
	else if (!nTail->prev && !nTail->next)
	{
		nHead = nTail = NULL;
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	cList cl;
	string tn;
	int tt;
	for (int i = 0; i < n; ++i)
	{
		cin >> tn;
		if (cin.peek() != '\n')cin >> tt;
		else tt = 0;

		cl.execute(tn, tt);
	}

	cl.output();

	return 0;
}