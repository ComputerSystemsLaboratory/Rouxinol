#include<iostream>
using namespace std;

struct card
{
  char picture;
  int value;
};

int partition (card A[], int p, int r)
{
  int x = A[r].value;
  int i = p - 1;
  for (int j = p; j < r; j++){
      if (A[j].value <= x){
	  i = i + 1;
	  swap(A[i],A[j]);
	  }
  }
  
  swap(A[i+1],A[r]);
  return i + 1;
}

void quicksort (card A[], int p, int r)
{
  if (p < r)
    {
      int q = partition (A, p, r);
      quicksort (A, p, q - 1);
      quicksort (A, q + 1, r);
    }
}

void merge(card n[], int left, int mid, int right)
{
	int num = right - left;
	card *tmp = new card[num];

	int iw = 0;
	int il = left;
	int ir = mid;

	while (il < mid && ir < right)
	{
		if (n[il].value <= n[ir].value)
		{
			tmp[iw++] = n[il++];
		}
		else {
			tmp[iw++] = n[ir++];
		}
	}

	while (il < mid) tmp[iw++] = n[il++];
	while (ir < right) tmp[iw++] = n[ir++];

	for (int i = 0; i<num; i++) n[left + i] = tmp[i];

	delete[] tmp;
}


void merge_sort_sub(card n[], int left, int right)
{
	if (right - left <= 1) return;

	int mid = left + (right - left) / 2;
	merge_sort_sub(n, left, mid);
	merge_sort_sub(n, mid, right);

	merge(n, left, mid, right);
}


void merge_sort(card n[], int len)
{
	merge_sort_sub(n, 0, len);
}

int main()
{
	int num = 0;
	cin >> num;
	card* cards = new card[num];
	card* cardscopy = new card[num];
	for (int i = 0; i < num; i++)
	{
		cin >> cards[i].picture >> cards[i].value;
		cardscopy[i].picture = cards[i].picture;
		cardscopy[i].value = cards[i].value;
	}

	quicksort(cards, 0, num - 1);
	merge_sort(cardscopy,num);
	bool flag = true;
	int i = 0;
	while (i < num)
	{
		if (cards[i].picture != cardscopy[i].picture) {
			flag = false;
			break;
		}
		i++;
	}

	if (flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	for (int i = 0; i < num; i++) {
		cout << cards[i].picture << " " << cards[i].value << endl;
	}
  return 0;
}