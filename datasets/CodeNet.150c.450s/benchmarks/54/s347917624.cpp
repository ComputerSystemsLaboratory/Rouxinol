#include<iostream>
#include<string>
#include<algorithm>
#include<boost/algorithm/string/predicate.hpp>

using namespace std;

int main(int argc, char* argv[])
{
  string target,word;
  int count=0;
  cin >> target;
  while(1)
  {
    cin >> word;
    if(word=="END_OF_TEXT") break;
    if(boost::iequals(word,target)) count++;
  }
  cout << count << endl;
}