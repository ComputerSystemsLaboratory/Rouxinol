#include <iostream>
#include <climits>

using namespace std;


class Card
{
  public:
    Card() { }
    Card(char picture, int n)
    { Picture = picture; Num = n; }

    char Picture;
    int Num; 
    int InputNum;

};

Card *Cards1, *Cards2;
int N;
bool Stable;

void BubbleSort()
{
  bool flag = true;
  int i = 0;
  Stable = true;

  do
  {

    flag = false;
    for(int j = N - 1; j >= i + 1; --j)
    {
      if(Cards1[j].Num < Cards1[j-1].Num)
      {
	Card tmp = Cards1[j];
	Cards1[j] = Cards1[j-1];
	Cards1[j-1] = tmp;

	flag = true;
      }

    }

    ++i;


  }while(flag);

  return;
}

void SelectionSort()
{

  Stable = true;

  for(int i = 0; i < N; ++i)
  {
    int mini = i;
    bool flag = false;

    for(int j = i; j < N; ++j)
    {
      if(Cards2[j].Num < Cards2[mini].Num)
      {
	mini = j; 
	flag = true;	
      }
    }

    //if(flag)
    {
      Card tmp = Cards2[i];
      Cards2[i] = Cards2[mini];
      Cards2[mini] = tmp;
    }
  }

  return;

}

int Partition(int left, int right)
{
  /*
  int r = right - 1;
  int x = Cards1[r].Num;
  int i = left ;

  for(int j = 0; j < r; ++j)
  {
    if(Cards1[j].Num <= x)
    {
      swap(Cards1[i], Cards1[j]);
      ++i;
    }

  }

  swap(Cards1[i], Cards1[r]);
  return i;
  */
  int i = left-1,pivot = Cards1[right].Num;
  for(int start = left; start < right; start++){
    if(Cards1[start].Num <= pivot){
      i++;
      std::swap(Cards1[i],Cards1[start]);
    }
  }

  std::swap(Cards1[i+1],Cards1[right]);

    return i+1;
}

void QuickSort(int l, int r)
{
  if(l < r)
  {
    int q = Partition(l, r);
    QuickSort(l, q-1);
    QuickSort(q+1, r);
  }
}

int main()
{
  cin >> N;

  Cards1 = new Card[N];
  Cards2 = new Card[N];

  for(int i = 0; i < N; ++i)
  {
    //string s; cin >> s;
    char c; cin >> c;
    int n; cin >> n;
    //Cards1[i] = Card(s[0], s[1] - '0');
    Cards1[i] = Card(c, n);
    Cards1[i].InputNum = i;
    Cards2[i] = Cards1[i]; 
  }

  QuickSort(0, N-1);

  bool Stable = true;

  for(int i = 1; i < N; ++i)
  {
    if(Cards1[i].Num == Cards1[i-1].Num && Cards1[i].InputNum < Cards1[i-1].InputNum)
      Stable = false;
  }

  if(Stable)
    cout << "Stable" << endl;
  else 
    cout << "Not stable" << endl;

  for(int i = 0; i < N; ++i)
    cout << Cards1[i].Picture << " " << Cards1[i].Num << endl;

  /*
  BubbleSort();

  cout << Cards1[0].Picture << Cards1[0].Num;
  for(int i = 1; i < N; ++i)
    cout << " " << Cards1[i].Picture << Cards1[i].Num;
  cout << endl;
  cout << "Stable" << endl;

  SelectionSort();

  cout << Cards2[0].Picture << Cards2[0].Num;
  for(int i = 1; i < N; ++i)
    cout << " " << Cards2[i].Picture << Cards2[i].Num;
  cout << endl;

  Stable = true;
  for(int i = 0; i < N; ++i)
    if(Cards1[i].Picture != Cards2[i].Picture || Cards1[i].Num != Cards2[i].Num)
      Stable = false;

  cout << (Stable ? "Stable" : "Not stable") << endl;
*/
  delete [] Cards1;
  delete [] Cards2;

  return 0;
}
