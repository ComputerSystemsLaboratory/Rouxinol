#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main(void){
  vector<int> nums;
  int a, b, c, d, e;

  cin >> a >> b >> c >> d >> e;
  nums.push_back( a );
  nums.push_back( b );
  nums.push_back( c );
  nums.push_back( d );
  nums.push_back( e );

  sort( nums.begin(), nums.end(), greater<int>() );

  cout << nums[0];
  for(int i = 0; i < 4; i++)
    cout << ' ' << nums[i + 1];
  cout << endl;
  return 0;
}