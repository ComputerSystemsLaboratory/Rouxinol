#include <iostream>
#define MAX 100010
using namespace std;

struct CARD{
    char suit;
    int value;
    bool check;
};

bool checkStable(int n, CARD c[], CARD a[])
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (a[i].value == c[j].value)
            {
                if (a[i].suit != c[j].suit)
                {
                    if (!c[j].check) return false;
                }
                else
                {
                    c[j].check = true;
                    break;
                }
            }
        }
    }
    for (int i = 0;i < n;i++)
    {
        c[i].check = false;
    }
    return true;
}

int Partition(CARD A[], int p, int r) //[p,r]
{
	CARD tmp;
	CARD x = A[r];
	int i = p-1;
	for (int j = p;j < r;j++)
	{
		if (A[j].value <= x.value)
		{
			i++;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	return i+1;
}

void Quick_Sort(CARD A[], int p, int r)
{
	if (p < r)
	{
		int q = Partition(A, p, r);
		Quick_Sort(A, p, q-1);
		Quick_Sort(A, q+1, r);		
	}
}

int main ()
{
	int n;
	CARD A[MAX], Orig[MAX];
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> A[i].suit >> A[i].value;
		A[i].check = false;
		Orig[i] = A[i];
	}
	
	Quick_Sort(A, 0, n-1);
	
	bool ch = checkStable(n, Orig, A);
	
	if (ch) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
	
	for (int i = 0;i < n;i++)
	{
		cout << A[i].suit << " " << A[i].value << endl;
	}
	
	return 0;
}
