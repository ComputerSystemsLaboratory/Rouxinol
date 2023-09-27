#include<iostream>

using namespace std;

class card
{
public:
	char s;
	int c;
};

bool operator==(const card a, const card b)
{
	if (a.c == b.c)
	{
		if (a.s == b.s)
		{
			return true;
		}
	}
	return false;
}

void swap(card& a, card& b)
{
	card v;
	v = a;
	a = b;
	b = v;
}

void print(card a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i)cout << " ";
		cout << a[i].s << a[i].c;
	}
	cout << endl;
}

int check(card a[], card b[], int n)
{
	int i, j, k, l;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i].c == a[j].c)
			{
				for (k = 0; k < n - 1; k++)
				{
					for (l = k + 1; l < n; l++)
					{
						if (a[i] == b[l] && a[j] == b[k])
						{
							return 0;
						}
					}
				}
			}
		}
	}
	return 1;
}

void bprint(int a)
{
	if (a)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}

void bubble(card a[], int n)
{
	int i, j, flag = 0;
	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = n - 1; j > i; j--)
		{
			if (a[j].c < a[j - 1].c)
			{
				swap(a[j], a[j - 1]);
				flag = 1;
			}
		}
		if (!flag)break;
	}
}

void select(card a[], int n)
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j].c < a[min].c)
			{
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}

int main()
{
	int n, i;
	card a[36], b[36], c[36];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i].s >> a[i].c;
		b[i].s = a[i].s;
		b[i].c = a[i].c;
		c[i].s = a[i].s;
		c[i].c = a[i].c;
	}
	bubble(b, n);
	print(b, n);
	bprint(check(a, b, n));
	select(c, n);
	print(c, n);
	bprint(check(a, c, n));
	return 0;
}