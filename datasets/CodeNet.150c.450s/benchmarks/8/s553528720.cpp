#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int cmpdic(string a,string b){
  int i= 0;
  while(a[i] == b[i]){
    i++;
    if(a[i] == '\0' && b[i]== '\0'){
      return 0;
    }else if(a[i] == '\0'){
      return -1;
    }else if(b[i] == '\0'){
      return 1;
    }
  }
  return(a[i] - b[i]);
}

int main(void){
  std::string card1;
  std::string card2;
  int n;
  cin >> n;
  int p1 = 0;
  int p2 = 0;

  for(int i = 0;i < n;i++){
    cin >> card1 >> card2;
    if(cmpdic(card1,card2) > 0){
      p1 += 3;
    }else if(cmpdic(card1,card2) < 0){
      p2 += 3;
    }else{
      p1 += 1;
      p2 += 1;
    }
  }
  cout << p1 << " " << p2 << endl;
}