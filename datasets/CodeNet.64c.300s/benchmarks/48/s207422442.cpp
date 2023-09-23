#include <iostream>
#include <cmath>
using namespace std;

const int ARR_MAX = 1000000;
int fl[ARR_MAX];
int sm[ARR_MAX+1] = {0};

void init_arr();
void isfl(int);

int main(void) {
  int tag;
  init_arr();

  while(1){
    cin >> tag;
    if(tag == 0 || cin.eof()) break;
    isfl(tag);
    cout << sm[tag] << endl;
  }
  return 0;
}

void init_arr(){
  for(int i=0;i<ARR_MAX;i++) fl[i] = 1;
}

void isfl(int tag){
  int i,lim,idx = 2;
  fl[0] = 0;
  fl[1] = 0;

  lim = sqrt(tag);

  while(idx <= lim){
    if(fl[idx] == 1) for(i = idx*2;i<=tag;i+=idx) fl[i] = 0;
    idx++;

  }
  for(int i = 2;i<=tag;i++) sm[i] = sm[i-1] + fl[i];
  return;
}