#include<bits/stdc++.h>
using namespace std;

int main()
{
  int cnt[101] = {0};
  int data, ma = 0;
  priority_queue<int, vector<int>, greater<int> > q;
  while( cin >> data ) {
    cnt[data]++;
    ma = max(ma, cnt[data]);
  }

  for(int i=1; i<=100; i++) {
    if( cnt[i] == ma ) {
      q.push( i );
    }
  }

  while( !q.empty() ) {
    cout << q.top() << endl;
    q.pop();
  }
}