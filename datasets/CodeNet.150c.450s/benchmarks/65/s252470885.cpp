#include <iostream>
#include <climits>
#include <stdio.h>
using namespace std;

struct Card
{
  char suit;
  char value;
};

void bubbleSort(Card C[], int N)
{
  for (int i = 0; i <= N - 1; i++)
  {
    for (int j = N - 1; j >= i + 1; j--)
    {
      if (C[j].value < C[j - 1].value)
      {
        std::swap(C[j], C[j - 1]);
      }
    }
  }
}

void selectionSort(Card C[], int N)
{
  for (int i = 0; i <= N - 1; i++)
  {
    int mini = i;
    for (int j = i; j <= N - 1; j++)
    {
      if (C[j].value < C[mini].value)
      {
        mini = j;
      }
    }
    std::swap(C[i], C[mini]);
  }
}

void print(Card C[], int N)
{
  for (int i = 0; i < N; i++)
  {
    if (i > 0)
      cout << " ";
    cout << C[i].suit << C[i].value;
  }
  cout << endl;
}

bool isStable(Card C1[], Card C2[], int N)
{
  for (int i = 0; i < N; i++)
  {
    if (C1[i].suit != C2[i].suit)
      return false;
  }
  return true;
}

int main(int argc, char *argv[])
{
  Card C1[100], C2[100];
  int N;
  char ch;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> C1[i].suit >> C1[i].value;
  }

  for (int i = 0; i < N; i++)
  {
    C2[i] = C1[i];
  }

  bubbleSort(C1, N);
  selectionSort(C2, N);
  print(C1, N);
  cout << "Stable" << endl;
  print(C2, N);
  if (isStable(C1, C2, N))
  {
    cout << "Stable" << endl;
  }
  else
  {
    cout << "Not stable" << endl;
  }

  return 0;
}

