#include <iostream>
using namespace std;
int n =0;
int m =0;
struct card
{
	char sign;
	char num;
	char index;
};

card a[36];
card s[36];
card b[36];

void select_sort(card * a)
{
	for(int i=0; i<n-1; i++)
	{
		int minj = i;
		for (int j=i+1; j<n; j++)
		{
			if (a[minj].num > a[j].num)
			{
				minj = j;
			}
		}
		
		if (minj != i)
		{
			card ai = a[i];
			a[i] = a[minj];
			a[minj] = ai;
			m++;
		}
	}
	
}

void bubble_sort(card * a)
{
	bool flag = true;
	while (flag)
	{
		flag =false;  
		for (int i=n-1; i>0; i--)
		{
			card ai = a[i];
			if(ai.num < a[i-1].num) 
			{
				a[i] = a[i-1];
				a[i-1] = ai;
				flag = true;
				m++;
			}
		}
	}
}

void output(card * a)
{
	bool stable = true;
	for (int i=0; i<n;	i++)
	{
		if (i) cout << ' ';
		cout << a[i].sign << a[i].num;
		if (i)
		{
			if (a[i].num == a[i-1].num)
			{
				if (a[i].index < a[i-1].index)
				{
					stable = false;
				}
			}
		}
	}
	cout << endl;
	
	cout << (stable ? "Stable" : "Not stable");
	
	cout << endl;
}


int main()
{
	cin >> n;
	for (int i = 0; i < n;	i++)
	{
		char c[3];
		cin >> c;
		a[i].sign = c[0];
		a[i].num = c[1];
		a[i].index = i;
		b[i] = s[i] = a[i];
	}
	
	bubble_sort(b);
	output(b);
	
	select_sort(s);
	output(s);
	
	return 0;
}