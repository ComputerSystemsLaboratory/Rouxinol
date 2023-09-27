#include<iostream>

using namespace std;

char c[4] = {'m','c','x','i'};
int hun[4] = {1000,100,10,1};

int getsum(string a, string b){

  int ina = 0, inb = 0;
  int status = 1, kake = 0;
  for(int i = 0; i < a.length(); i++){
    if(a[i] >= '0' && a[i] <= '9') status = a[i]-'0';
    else{
      if(a[i] == 'm') kake = 1000;
      if(a[i] == 'c') kake = 100;
      if(a[i] == 'x') kake = 10;
      if(a[i] == 'i') kake = 1;
      ina += status * kake;
      status = 1;
    }
  }

  for(int i = 0; i < b.length(); i++){
    if(b[i] >= '0' && b[i] <= '9') status = b[i]-'0';
    else{
      if(b[i] == 'm') kake = 1000;
      if(b[i] == 'c') kake = 100;
      if(b[i] == 'x') kake = 10;
      if(b[i] == 'i') kake = 1;
      inb += status * kake;
      status = 1;
    }
  }
  return ina+inb;
}

string conv(int in){
  string out = "";
  int sum[4] = {0,0,0,0};
  for(int i = 0; i < 4; i++){
    sum[i] = in/hun[i];
    in  %= hun[i];
  }
  for(int i = 0; i < 4; i++){
    if(sum[i]){
      if(sum[i] > 1)out += sum[i]+'0';
      out += c[i];
    }
  }
  return out;
}

int main(){
  int num;
  cin >> num;
  for(int i = 0; i < num; i++){
    string a,b;
    cin >> a >> b;
    cout << conv(getsum(a,b)) << endl;
  }
  return 0;
}