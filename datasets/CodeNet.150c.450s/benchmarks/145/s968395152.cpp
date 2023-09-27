#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
  string word,frequent,longest;
  map<string,int> table;
  size_t N=0;
  while(cin >> word){
    table[word] += 1;
    N =table[word] < N ? N : table[word];
    frequent = table[word] < N ? frequent : word;
    longest = word.size() < longest.size() ? longest : word;
  }
  cout << frequent << " " << longest << endl;
}