#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

char a[10],b[10];
int ia,ib;
int n;
int ta,tb;
char ans[10];

void transa(){
  ia = 0;
  for(int i = ta-1 ; i >= 0 ; i--){
    if(a[i] == 'i'){ 
      if(i == 0) ia += 1;
      else{
	if( atoi(&a[i-1]) != 0 ){
	  ia += atoi(&a[i-1]);
	}else{
	  ia += 1;
	}
      }
    }else if(a[i] == 'x'){   
      if(i == 0) ia += 10;
      else{
	if( atoi(&a[i-1]) != 0 ){
	  ia += atoi(&a[i-1]) * 10;
	}else{
	  ia += 10;
	}
      }
    }else if(a[i] == 'c'){
      if(i == 0) ia += 100;
      else{
	if( atoi(&a[i-1]) != 0 ){
	  ia += atoi(&a[i-1]) * 100;
	}else{
	  ia += 100;
	}
      }
    }else if(a[i] == 'm'){
      if(i == 0) ia += 1000;
      else{
	if( atoi(&a[i-1]) != 0 ){
	  ia += atoi(&a[i-1]) * 1000;
	}else{
	  ia += 1000;
	}
      }
    }
  }
  return;
}


void transb(){
  ib = 0;
  for(int i = tb-1 ; i >= 0 ; i--){
    if(b[i] == 'i'){ 
      if(i == 0) ib += 1;
      else{
	if( atoi(&b[i-1]) != 0 ){
	  ib += atoi(&b[i-1]);
	}else{
	  ib += 1;
	}
      }
    }else if(b[i] == 'x'){   
      if(i == 0) ib += 10;
      else{
	if( atoi(&b[i-1]) != 0 ){
	  ib += atoi(&b[i-1]) * 10;
	}else{
	  ib += 10;
	}
      }
    }else if(b[i] == 'c'){
      if(i == 0) ib += 100;
      else{
	if( atoi(&b[i-1]) != 0 ){
	  ia += atoi(&b[i-1]) * 100;
	}else{
	  ib += 100;
	}
      }
    }else if(b[i] == 'm'){
      if(i == 0) ib += 1000;
      else{
	if( atoi(&b[i-1]) != 0 ){
	  ib += atoi(&b[i-1]) * 1000;
	}else{
	  ib += 1000;
	}
      }
    }
  }
  return;
}

void inv(){

  int j = 0,n = ia + ib;

  if( n / 1000 != 0){
    if(n/1000 != 1){
      cout << n/1000;
    }
    cout << 'm';
    n = n % 1000;
  }
  if( n / 100 != 0){
    if(n/100 != 1){
      cout << n/100;
    }
    cout << 'c';
    n = n % 100;
  }
  if( n / 10 != 0){
    if(n/10 != 1){
      cout << n/10;
    }
    cout << 'x';
    n = n % 10;
  }
  if( n != 0){
    if(n != 1){
      cout << n;
    }
    cout << 'i';
  }
  cout << endl;

  return;
}

int main(){

  cin >> n;
  while(n){

    cin >> a >> b;

    int i;
    for(i = 0 ; a[i] != '\0' ;i++){}
    ta = i;
    for(i = 0 ; b[i] != '\0' ;i++){}
    tb = i;
    transa();
    transb();
    inv();
    n--;
  }
  return 0;

}