#include<iostream>
#include<vector>
#include<string>

using namespace std;

void shuffle(string& card,int h)
{
  string head = card.substr(0, h);
  string tail = card.substr(h, card.length()-h);
  card.clear();
  card = tail + head;
}

int main(int argc, char* argv[])
{
  string card;
  int ope,h;
  vector<string> output;
  while(1)
  {
    cin >> card;
    if(card=="-") break;
    cin >> ope;
    for(int i=0;i<ope;i++)
    {
      cin >> h;
      shuffle(card,h);
    }
    output.push_back(card);
  }
  for(string n: output) cout << n << endl;
}