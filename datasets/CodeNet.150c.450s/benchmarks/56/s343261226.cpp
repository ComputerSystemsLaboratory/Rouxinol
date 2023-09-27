#include <iostream>
#include <boost/foreach.hpp>
#include <vector>
#include <algorithm>

#include <boost/range/algorithm.hpp>

using namespace std;

void getMaxMin(vector<int>& v,int& max,int& min)
{
  boost::sort(v);
  max = (v.back());
  min = (v.front());
}

long long int getSum(vector<int>& v)
{
  long long int sum = 0;
  for(int value: v)
  {
    sum += value;
  }
  return sum;
}

int main(int argc,char* argv[])
{
  int num,input,max,min;
  long long int sum;
  vector<int> inputs;
  cin >> num;
  for(int i=0;i<num;i++)
  {
    cin >> input;
    inputs.push_back(input);
  }
  getMaxMin(inputs,max,min);
  sum = getSum(inputs);
  cout << min << " " << max << ' ' << sum << endl;
}