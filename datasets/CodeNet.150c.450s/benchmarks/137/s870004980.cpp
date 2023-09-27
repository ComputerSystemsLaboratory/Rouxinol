#include <iostream>
#include <vector>
using namespace std;

vector<string> myhash(10000000);

void set(string& a){
  int x = 0;
  for(int i=0; i<a.size(); i++){
    x *= 11;
    x += a[i];
    x %= 10000000;
  }

  while(true){
    if(myhash[x].empty()){
      myhash[x] = a;
      break;
    }
    else if(myhash[x].compare(a)==0){
      break;
    }
    else{
      x++;
      if(x > 10000000)
	x -= 10000000;
    }
  }
}

void find(string& a){
  int x = 0;
  for(int i=0; i<a.size(); i++){
    x *= 11;
    x += a[i];
    x %= 10000000;
  }

  while(true){
    if(myhash[x].compare(a) == 0){
      cout << "yes\n";
      break;
    }
    else if(myhash[x].empty()){
      cout << "no\n";
      break;
    }
    else{
      x++;
      if(x > 10000000)
	x -= 10000000;
    }
  }
}

int main(){
  string a, b;
  int n;
  cin >> n;
  while(n--){
    cin >> a >> b;
    if(a.compare("insert")==0)
      set(b);
    else
      find(b);
  }

  return 0;
}