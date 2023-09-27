#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int N;
string In[10000], Out[10000];
int main() {
  while (cin >> N && N > 0) {
    for (int i=0; i<N; ++i) {
      cin >> Out[i] >> In[i];
      //    for (int i=0; i<N; ++i)
      //      cout << Out[i] << ' ' << In[i] << endl;
    }
      sort(In, In+N);
      sort(Out, Out+N);
    int p=0, taiki=0, train=0;
    for (int i=0; i<N; ++i) {
      while (p<N && In[p] <=Out[i]) {
	taiki++;
	p = p+1;
      }
      if (taiki > 0) taiki = taiki - 1;
      else train = train + 1;
    }
    cout << train << endl;
  }
}
 