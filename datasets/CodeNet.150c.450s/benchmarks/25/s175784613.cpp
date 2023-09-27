#include <iostream>
using namespace std;

int main(){
  char c;
  char i;
  int a[26]={};

  while(cin >> c){
    //cout << c << endl;
    if(c>='A'&&c<='Z')c+=32;//大文字を小文字に
    if(c>='a'&&c<='z'){//cがアルファベットなら文字をカウント
      a[c - 'a']+=1;
    }
  }

  for(int i=0; i<26; i++){
    cout << char(i+'a') << " : " << a[i] << endl;
  }
}
