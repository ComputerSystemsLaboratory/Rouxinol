#include <iostream>

struct Card
{
  char suit;
  int number;
};

/*--- Quick sort ---*/
int partition(Card cards[], int begin_i, int end_i)
{
  int x = cards[end_i].number;
  int i = begin_i;

  for (int j = begin_i; j < end_i; ++j)
  {
    if (cards[j].number <= x)
    {
      std::swap(cards[i], cards[j]);
      ++i;
    }
  }

  std::swap(cards[i], cards[end_i]);

  return i;
}

void quick_sort(Card cards[], int begin_i, int end_i)
{
  if (begin_i < end_i)
  {
    int point_i = partition(cards, begin_i, end_i);
    quick_sort(cards, begin_i, point_i - 1);
    quick_sort(cards, point_i + 1, end_i);
  }
}
/*--- Quick sort ---*/

/*--- Merge sort ---*/
void merge(Card cards[], int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;

  Card L[n1 + 1];
  for (int i = 0; i < n1; ++i)
  {
    L[i] = cards[left + i];
  }
  L[n1].number = 1000000000 + 1;

  Card R[n2 + 1];
  for (int i = 0; i < n2; ++i)
  {
    R[i] = cards[mid + i];
  }
  R[n2].number = 1000000000 + 1;

  int i = 0;
  int j = 0;
  for (int k = left; k < right; ++k)
  {
    if (L[i].number <= R[j].number)
    {
      cards[k] = L[i];
      ++i;
    }
    else
    {
      cards[k] = R[j];
      ++j;
    }
  }
}

void merge_sort(Card cards[], int left, int right)
{
  if (left + 1 < right)
  {
    int mid = (left + right) / 2;
    merge_sort(cards, left, mid);
    merge_sort(cards, mid, right);
    merge(cards, left, mid, right);
  }
}
/*--- Merge sort ---*/

bool match_cards(Card cards1[], Card cards2[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    if (cards1[i].suit != cards2[i].suit ||
        cards1[i].number != cards2[i].number)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  std::cin >> n;

  Card cards_qs[n];
  for (int i = 0; i < n; ++i)
  {
    std::cin >> cards_qs[i].suit >> cards_qs[i].number;
  }

  Card cards_ms[n];
  for (int i = 0; i < n; ++i)
  {
    cards_ms[i] = cards_qs[i];
  }

  quick_sort(cards_qs, 0, n - 1);
  merge_sort(cards_ms, 0, n);

  if (match_cards(cards_qs, cards_ms, n))
  {
    std::cout << "Stable" << std::endl;
  }
  else
  {
    std::cout << "Not stable" << std::endl;
  }

  for (int i = 0; i < n; ++i)
  {
    std::cout << cards_qs[i].suit
              << ' '
              << cards_qs[i].number
              << std::endl;
  }

  return 0;
}

