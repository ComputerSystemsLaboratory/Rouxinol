#include <iostream>
using namespace std;

int strcmp(string, string);

int main(){
  int n;
  string card_t,card_h;
  int score_t=0;
  int score_h=0;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> card_t >> card_h;
    //cout << card_t << " "<< card_h << " " << strcmp(card_t, card_h) << endl;
    switch(strcmp(card_t, card_h)){
      case -1:
        score_t+=3;
        break;
      case 1:
        score_h+=3;
        break;
      case 0:
        score_t+=1;
        score_h+=1;
        break;
    }
  }
  cout << score_t << " " << score_h << endl;
  return 0;
}

int strcmp(string s, string t){
  int m;
  if(s.size()>t.size()) m = t.size();
  else m = s.size();
  for(int i=0; i<m;i++){
    if(s[i]<t[i]) return 1;
    else if(s[i]>t[i]) return -1;
  }
  if(s.size()<t.size()) return 1;
  else if(s.size()>t.size()) return -1;
  else return 0;
}
