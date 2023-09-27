
#include<queue>
#include<iostream>
#include<string>
using namespace std;
int main() {
  priority_queue<long long> Q;
  string word;
  long long k;
  while(1)
    {
      cin >> word;
      if (word == "end") break;
      else if (word == "extract") {
	cout << Q.top() << endl;
	Q.pop();
      }
      else if (word == "insert") {
	cin >> k;
	Q.push(k);
      }
    }
  return 0;
}