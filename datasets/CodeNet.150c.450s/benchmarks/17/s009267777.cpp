#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>

#define ll long long int

using namespace std;
typedef pair<int, int> P;

priority_queue<int> pque;

string str;

int main()
{
  int a;
  int i;

  for(i=0;i<5;i++){
    cin>>a;
    pque.push(a);
  }
  for(i=0;i<5;i++){
    cout<<pque.top();;
    pque.pop();
    if(i<4)cout<<" ";
    else cout<<endl;
  }
}