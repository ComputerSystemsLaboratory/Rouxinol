#include <bits/stdc++.h>
using namespace std;

bool judge(void);

int N;
int i,j;
int X[36],Y[36];
char x[36],y[36];


bool judge(){
  int i;
  for(i = 0 ; i < N ; i++){
    if(x[i] == y[i] && X[i] == Y[i]){
      continue;
    }else{
      return 0;
      break;
    }
  }
  return 1;
}
    

int main(){
  int tmp,min;
  char tmp_2;

  cin >> N;

  for(i = 0 ; i < N ; i++){
    cin >> x[i] >> X[i];
    Y[i]=X[i];
  }

  strcpy(y,x);

  for(i = 0 ; i < N ; i++){
    for(j = N - 1 ; j >= i+1 ; j--){
      if(X[j] < X[j-1]){
	swap(X[j],X[j-1]);
	swap(x[j],x[j-1]);
      }
    }
  }

  for(i = 0 ; i < N ; i++){
    min = i;
    for(j = i ; j < N ; j++){
      if(Y[j] < Y[min]){
	min=j;
      }
    }
    swap(Y[i],Y[min]);    
    swap(y[i],y[min]);
  }

  for(i = 0 ; i < N-1 ; i++){
    cout << x[i] << X[i] << ' ';
  }
  cout << x[N-1] << X[N-1] << endl;
  cout << "Stable" << endl;

  for(i = 0 ; i < N-1 ; i++){
    cout << y[i] << Y[i] << ' ';
  }
 
  cout << y[N-1] << Y[N-1] << endl;

  if(judge() == 0){
    cout << "Not stable" << endl;
  }else{
    cout << "Stable" << endl;
  }

  return 0;
}