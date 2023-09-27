#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;

long long n;

long long *T;


void insert(long long a){
  for(long long i = 0; i < n; i++){
    long long j = (((a % n) + i * (1 + a % (n - 1))) % n);
    if(T[j] == '\0'){
      T[j] = a;
      break;
    }
  }
}

string findx(long long a){
  for(long long i = 0; i < n; i++){
    long long j = (((a % n) + i * (1 + a % (n - 1))) % n);
    if(T[j] == a){
      return "yes";
    }
    else if(T[j] == '\0'){
      return "no";
    }
  }
}

int main(){

  cin >> n;

  string s, x;

  long long cnt = 0;

  string *yn = new string[n];

  T = new long long[n];



  for(long long i = 0; i < n; i++){

    cin >> s >> x;

    long long a = 0, b = 1;

    for(long long i = 0; i < (long long)x.size(); i++){

      if(x[i] == 'A'){
        a = a + 1 * b;
      }
      else if(x[i] == 'C'){
        a = a + 2 * b;
      }
      else if(x[i] == 'G'){
        a = a + 3 * b;
      }
      else if(x[i] == 'T'){
        a = a + 4 * b;
      }

      b = b * 10;

    }

    if(s == "insert"){
      insert(a);
    }
    else if(s == "find"){
      yn[cnt] = findx(a);
      cnt++;
    }
  }

  for(long long i = 0; i < cnt; i++){
    cout << yn[i] << endl;
  }
  return 0;
}

