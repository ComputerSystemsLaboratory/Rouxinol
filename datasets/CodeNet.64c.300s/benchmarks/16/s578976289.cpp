#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
  int input_num;
  int datas[200000];
  int now_data = 0;
  int diff_ans = 0;
  cin >> input_num;
  for (int i = 0; i < input_num; i++) {
    cin >> datas[i];
  }

  diff_ans = datas[1] - datas[0];
  now_data = datas[0];
  
  for (int i = 1; i < input_num; i++) {
    // cout << now_data<< " "<< datas[i] << "\n";
    if (now_data > datas[i]) {
      now_data = datas[i];
    }
    // cout <<"now_data" now_data<< << "\n";
    else if ((datas[i] - now_data) > diff_ans) {
      diff_ans = datas[i] - now_data;
    }
  }
  // cout << now_data << "\n";
  cout << diff_ans << "\n";
  
  return 0;
}


