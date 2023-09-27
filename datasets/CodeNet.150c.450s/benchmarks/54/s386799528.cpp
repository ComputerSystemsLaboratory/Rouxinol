#include<iostream>
#include<string>

using namespace std;

int main(){
  string ans;

  cin >> ans;

  string search;

  cin >> search;

  int count=0;
  int sa='a'-'A';

  while(search != "END_OF_TEXT"){
    for(int i=0;i<search.length();i++){
      if(search[i]<'a' && search[i]>='A') search[i]+=sa;
    }
    if(ans==search) count++;
    cin >> search;
  }

  cout << count << endl;

  return 0;
}