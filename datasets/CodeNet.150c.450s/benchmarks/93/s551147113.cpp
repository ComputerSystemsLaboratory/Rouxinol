#include<iostream>
#include<vector>
#include<algorithm>
/*#define LENGTH_MAX 2000001
#define COUNT_MAX 10001*/
using namespace std;
/*void A()
{
	int n;
	scanf_s("%d", &n);
	int *a;
	a = new int[LENGTH_MAX];
	for (int i = 0; i < LENGTH_MAX; i++)
	{
		a[i] = 0;
	}

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	int counting[COUNT_MAX];
	for (int i = 0; i < COUNT_MAX; i++)
	{
		counting[i] = 0;
	}

	for (int i = 1; i <= n; i++)
	{
		int index = a[i];
		counting[index]++;
	}

	for (int i = 1; i < COUNT_MAX; i++)
	{
		counting[i] = counting[i] + counting[i - 1];
	}
	int *b;
	b = new int[LENGTH_MAX];

	for (int i = 0; i < LENGTH_MAX; i++)
	{
		b[i] = 0;
	}
	for (int i = n; i >= 1; i--)
	{
		int index = a[i];
		int indexIndex = counting[index];
		b[indexIndex] = a[i];
		counting[index]--;
	}

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			printf_s("%d", b[i]);
		}
		else
		{
			printf_s(" %d", b[i]);
		}
	}

	delete[] a, b;

}
int partition(int A[],int p,int r)
{
	int x = A[r];
	int i = p-1;

	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i++;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	int tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;

	return i + 1;
}
void B()
{
	int A[100000];
	int n = 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &A[i]);
	}

	int q = partition(A,0,n-1);
	for (int i = 0; i < n; i++)
	{
		if (i != 0)printf_s(" ");
		if (i == q)
		{
			printf_s("[%d]", A[i]);
		}
		else
		{
			printf_s("%d", A[i]);
		}
	}

	printf_s("\n");
}*/
const int MAX = 100009;
vector<pair<char, int> > cards;
vector<pair<char, int> > stable_cards;
vector<pair<char, int> >l(MAX / 2 + 2), r(MAX / 2 + 2);
int n;
void merge(int low,int high,int mid)
{
	int a = mid - low;
	int b = high - mid;
	for (int i = 0; i < a; i++)
	{
		l[i] = stable_cards[low + i];
	}
	for (int i = 0; i < b; i++)
	{
		r[i] = stable_cards[mid + i];
	}
	l[a].second = MAX;
	r[b].second = MAX;
	int j = 0;
	int k = 0;
	for (int i = low; i < high; i++)
	{
		if (l[j].second <= r[k].second)
		{
			stable_cards[i] = l[j];
			j++;
		}
		else
		{
			stable_cards[i] = r[k];
			k++;
		}
	}
}

void mergeSort(int low,int high)
{
	if (low + 1 < high)
	{
		int mid = (low + high) / 2;
		mergeSort(low,mid);
		mergeSort(mid, high);
		merge(low, high, mid);
	}
}
int quickPartition(int s,int g)
{
	pair<char, int> p = cards[g];
	int i = s - 1;
	pair<char, int> tmp;
	for (int j = s; j < g; j++)
	{
		if (cards[j].second <= p.second)
		{
			i++;
			tmp = cards[i];
			cards[i] = cards[j];
			cards[j] = tmp;
		}
	}
	tmp = cards[i + 1];
	cards[i + 1] = cards[g];
	cards[g] = tmp;
	return i + 1;
}
void quickSort(int s, int g)
{
	if (s < g)
	{
		int q = quickPartition(s, g);
		quickSort(s, q - 1);
		quickSort(q + 1, g);
	}
}
void C()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char s;
		int d;
		cin >> s >> d;
		pair<char, int> p = make_pair(s,d);
		cards.push_back(p);
		stable_cards.push_back(p);
	}
	quickSort(0, n - 1);
	mergeSort(0,n);
	bool stable = true;
	for (int i = 0; i < n; i++)
	{
		if (cards[i].first != stable_cards[i].first)
		{
			stable = false;
			break;
		}
	}
	if (stable)cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << cards[i].first << " " << cards[i].second<<endl;
		/*cout << stable_cards[i].first << " " << stable_cards[i].second << endl;
		cout << endl;*/
	}
	
}
int main()
{
	//A();
	//B();
	C();
	return 0;
}