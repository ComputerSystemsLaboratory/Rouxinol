#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
bool find1(vector< vector<int> >& C,vector< vector<int> >& check,int* findh,int* findw)
{
  for(int i = 0;i < C.size();++i)
    for(int j = 0;j < C[0].size();++j)
      if(C[i][j] == 1 && check[i][j] == 0){
	*findh = i;
	*findw = j;
	return true;
      }
  return false;
}
bool find2(vector< vector<int> >& C,vector< vector<int> >& check,int* findh,int* findw)
{
  if(C[*findh - 1][*findw - 1] == 1 && check[*findh - 1][*findw - 1] == 0){
    *findh -= 1;
    *findw -= 1;
    return true;
  }
  else if(C[*findh - 1][*findw] == 1 && check[*findh - 1][*findw] == 0){
    *findh -= 1;
    return true;
  }
  else if(C[*findh - 1][*findw + 1] == 1  && check[*findh - 1][*findw + 1] == 0){
    *findh -= 1;
    *findw += 1;
    return true;
  }
  else if(C[*findh][*findw - 1] == 1 && check[*findh][*findw - 1] == 0){
    *findw -= 1;
    return true;
  }
  else if(C[*findh][*findw + 1] == 1 && check[*findh][*findw + 1] == 0){
    *findw += 1;
    return true;
  }
  else if(C[*findh + 1][*findw - 1] == 1 && check[*findh + 1][*findw - 1] == 0){
    *findh += 1;
    *findw -= 1;
    return true;
  }
  else if(C[*findh + 1][*findw] == 1 && check[*findh + 1][*findw] == 0){
    *findh += 1;
    return true;
  }
  else if(C[*findh + 1][*findw + 1] == 1 && check[*findh + 1][*findw + 1] == 0){
    *findh += 1;
    *findw += 1;
    return true;
  }
  else return false;
}
int main()
{
  int w,h,findh,findw;
  stack< pair<int,int> > finish;
  queue<int> answer;
  while(cin >> w >> h && !(w == 0 && h == 0)){
    int howmany = 0;
    vector< vector<int> > C(h + 2,vector<int>(w + 2,0)),check(h + 2,vector<int>(w + 2,0)); 
    for(int i = 1;i <= h;++i)
      for(int j = 1;j <= w;++j)
	cin >> C[i][j];
    while(find1(C,check,&findh,&findw)){
      check[findh][findw] = 1;
      finish.push(make_pair(findh,findw));
      while(!finish.empty()){
	findh = finish.top().first;
	findw = finish.top().second;
	while(find2(C,check,&findh,&findw)){
	  finish.push(make_pair(findh,findw));
	  check[findh][findw] = 1;
	}
	finish.pop();
      }
      ++howmany;
    }
    answer.push(howmany);
  }
  for(;!answer.empty();answer.pop())
    cout << answer.front() << endl;
}