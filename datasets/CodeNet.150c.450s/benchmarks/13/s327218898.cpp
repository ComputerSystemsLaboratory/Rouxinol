#include<iostream>
#include<string>

using namespace std;

int main()
{
  string input, ring, target;
  string::size_type flag;
  cin >> input >> target;
  ring = input + input;
  flag = ring.find(target);
  if(flag==string::npos) cout << "No" << endl;
  else cout << "Yes" << endl;
}