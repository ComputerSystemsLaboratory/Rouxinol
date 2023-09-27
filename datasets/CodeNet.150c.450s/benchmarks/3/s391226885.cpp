#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void print(string word,vector<string>& output)
{
  int a,b;
  cin >> a >> b;
  output.push_back(word.substr(a,b-a+1));
}

void reverse(string& word)
{
  int a,b;
  cin >> a >> b;
  string temp = word.substr(a,b-a+1);
  reverse(temp.begin(),temp.end());
  word.replace(a,b-a+1,temp);
}

void replace(string& word)
{
  int a,b;
  string change;
  cin >> a >> b >> change;
  word.replace(a,b-a+1,change);
}

int main(int argc, char* argv[])
{
  string word,command;
  vector<string> output;
  int count;
  cin >> word >> count;
  for(int i=0;i<count;i++)
  {
    cin >> command;
    if(command=="print") print(word,output);
    else if(command=="reverse") reverse(word);
    else if(command=="replace") replace(word);
  }
  for(string n:output)
  {
    cout << n << endl;
  }
}