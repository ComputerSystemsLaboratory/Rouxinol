#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(int argc, char *argv[])
{
  string input;
  stack<int> backes; // バックスラッシュのスタック(\\を認識した時点でのバックスラッシュの座標を格納する)
  stack<pair<int, int > > areas;		// 面積を示すスタック
  int area = 0;
  int back = 0;
  int sum = 0;
  list<pair<int, int> >answer;
  // areas.push(make_pair(-1,0));
  cin >> input;
  for (int i = 0; i < (int)input.size(); i++) {
    // cout << i  << " "<< input[i]<< "\n";

    if (input[i] == '\\') {
      if (backes.size() == 0) {
	// 追記later
      }
      backes.push(i);
    }else if (input[i] == '/') {
      if (backes.size() == 0) {

      }else {
	back = backes.top();
	backes.pop();

	area = i-back;
	sum = sum + area;
	while ((areas.size() != 0) && (areas.top().first > back)) {
	  area = area + areas.top().second ;
	  areas.pop();
	}
	areas.push(make_pair(back, area));
      }
      

    }
  }
  cout << sum << "\n";
  
  for (; areas.size() != 0; ) {
    answer.push_front(make_pair(areas.top().first, areas.top().second));
    areas.pop();
  }


  if (sum != 0) {
    cout << answer.size() << " ";
    auto itr = answer.begin();  
    for (; itr != --(answer.end()); itr++) {
      cout << (*itr).second << " ";      
    }
    cout << (*itr).second << "\n";
  }else {
    cout << answer.size() << "\n";
  }


  return 0;
}

