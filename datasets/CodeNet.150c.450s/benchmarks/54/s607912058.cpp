#include <iostream>
#include <string>
using namespace std;

char tolower(char);

int main(){
  string w;
  string t;
  string eof="END_OF_TEXT";
  cin >> w;
  int counter=0;

  while(true){
    cin >> t;
    if(t==eof) break;
    for(int i=0; i<t.size(); i++){
      t[i] = tolower(t[i]);
    }
    if(t==w) counter++;
  }
  cout << counter << endl;
}

char tolower(char c){
  if(c>='A'&&c<='Z')c+=32;//大文字を小文字に
  return c;
}
