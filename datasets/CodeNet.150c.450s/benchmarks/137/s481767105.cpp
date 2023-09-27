#include <iostream>
using namespace std;

#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define M 1000003

int T[M] = {0};

int h1(int key)
{
  return key % M;
}

int h2(int key)
{
  return 1 + (key % (M - 1));
}

int h(int key, int i)
{
  return (h1(key) + i * h2(key)) % M;
}

void insert(int key)
{
  int j, i = 0;
  while(1){
    j = h(key, i);
    if(T[j] == 0){
      T[j] = key;
      return;
    }else{
      i++;
    }
  }
}

bool search(int key)
{
  int j, i = 0;
  while(1){
    j = h(key, i);
    if(T[j] == key)
      return true;
    else if(T[j] == 0 || i >= M)
      return false;
    else 
      i++;
  }
}

int getChar(char ch)
{
  if(ch == 'A')
    return 1;
  else if(ch == 'C')
    return 2;
  else if(ch == 'G')
    return 3;
  else if(ch == 'T')
    return 4;
  else
    return 0;
}

int getKey(string str)
{
  int sum = 0, p = 1;
  REP(i, str.size()){
    sum += p * (getChar(str[i]));
    p *= 5;
  }
  return sum;
}


int main()
{
  int n;
  cin >> n;
  string c, s;
  REP(i, n){
    cin >> c >> s;
    int key;
    key = getKey(s);
    if(c[0] == 'i')
      insert(key);
    else
      if(search(key))
	cout << "yes" << endl;
      else
	cout << "no" << endl;
  }
}