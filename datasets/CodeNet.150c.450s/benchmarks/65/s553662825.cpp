#include <iostream>
#include <string>
using namespace std;

void copy_ary(char a[], const char b[], int n){
  int i;
  for(i = 0; i < n; i++){
    a[i] = b[i];
  }
}

void exchange(char a[], char b[],int  n){
  int i;
  char tmp[n];

  for(i = 0; i < n; i++){
    copy_ary(tmp, a, 3);
    copy_ary(a, b, 3);
    copy_ary(b, tmp, 3);
  }
}

int pickup(char k, const char a[][3], char tmp[], int n){
  int i;
  int m = 0;

  for(i = 0; i < n; i++){
    if(a[i][1] == k){
      tmp[m++] = a[i][0];
    }
  }

  return m;
}

int check_stable(char org[][3], char a[][3], int n){
  int i, j, m;
  char tmp[n];
  char tmp_or[n];

  int flag = 1;

  i = 0;
  while(i < n){
    m = pickup(a[i][1], a, tmp, n);
    m = pickup(a[i][1], org, tmp_or, n);
    for(j = 0; j < m; j++){
      if(tmp[j] != tmp_or[j]){
        flag = 0;
      }
    }
    i += m;
  }

  return flag;
}


int main(){
  int n, i, j, minj;

  cin>>n;
  char origin[n][3];
  char bbl[n][3];
  char slc[n][3];
  for(i = 0; i < n; i++){
    cin>>origin[i];
    copy_ary(bbl[i], origin[i], 3);
    copy_ary(slc[i], origin[i], 3);
  }


//----------------------------------bubble
  int flag = 1;
  while(flag){
    flag = 0;
    for(i = n-1; i > 0; i--){
      if(bbl[i][1] < bbl[i-1][1]){
        exchange(bbl[i], bbl[i-1], 3);
        flag = 1;
      }
    }
  }

//----------------------------------seleciton sort
  for(i = 0; i < n; i++){
    minj = i;
    for(j = i; j < n; j++){
      if(slc[j][1] < slc[minj][1]){
        minj = j;
      }
    }
    if(i != minj){
      exchange(slc[i], slc[minj], 3);
    }
  }

//-------------------------------------------------

  for(i = 0; i < n-1; i++){
    cout<<bbl[i]<<" ";
  }
  cout<<bbl[n-1]<<endl;
  if(check_stable(origin, bbl, n)){
    cout<<"Stable"<<endl;
  }else{
    cout<<"Not stable"<<endl;
  }


  for(i = 0; i < n-1; i++){
    cout<<slc[i]<<" ";
  }
  cout<<slc[n-1]<<endl;
  if(check_stable(origin, slc, n)){
    cout<<"Stable"<<endl;
  }else{
    cout<<"Not stable"<<endl;
  }


}