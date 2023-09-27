#include<iostream>
#include<string>
using namespace std;

const int M = 1046527;

string H[M];

int getChar(char ch)
{
	if (ch == 'A') return 1;
	else if (ch == 'C') return 2;
	else if (ch == 'G') return 3;
	else if (ch == 'T') return 4;
	else return 0;
}

long long getKey(string str)
{
	long long sum = 0;
	int p = 1;
	for (int i = 0; i<str.length(); i++)
	{
		sum += p*(getChar(str[i]));
		p *= 5;
	}
	return sum;
}


int h1(int key) { return key%M; }
int h2(int key) { return 1 + (key % (M - 1)); }
long long hfunc(long long key, int i)
{
	return(h1(key) + i*h2(key)) % M;
}

bool insert(string str)
{
	int key;
	long long h;
	key = getKey(str);
	
	for (int i = 0;; i++)
	{
		h = hfunc(key, i);
		if (H[h].length() == 0)
		{
			H[h] = str; return true;
		}
		else if (i>M) return false;
	}
}

bool find(string str)
{
	int key;
	long long h;
	key = getKey(str);
	h = key;

	for (int i = 0;; i++)
	{
		h = hfunc(key, i);
		if (H[h] == str)
			return true;
		else if (H[h].length() == 0) return false;
	}
}



int main()
{
	int n;
	string cmd, obj;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> cmd >> obj;
		if (cmd[0] == 'i')
			insert(obj);
		else if (cmd[0] == 'f')
			if (find(obj))
				cout << "yes" << endl;
			else
				cout << "no" << endl;


	}
}