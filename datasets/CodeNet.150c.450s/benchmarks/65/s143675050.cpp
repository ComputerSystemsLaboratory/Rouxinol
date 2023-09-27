#include<iostream>
using namespace std;


void Output(string card[],int n){

  cout << card[0];
  for(int i=1; i<n; i++)
    cout << ' ' << card[i];

  cout << endl;

}

void isStable(string in[] , string out[],int n){

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int a=0; a<n; a++){
	for(int b=a+1; b<n; b++){
	  if(in[i][1]==in[j][1] && in[i]==out[b] && in[j]==out[a]){
	    cout << "Not stable" << endl;
	    return;
	  }
	}
      }
    }
  }

  cout << "Stable" << endl;

}


int main(){

  int n;
  string card[36];
  string bubble[36],select[36];
  string tmp;
  int min;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> card[i];
    bubble[i] = select[i] = card[i];
  }


  for(int i=0; i<n-1; i++){
    for(int j=n-1; j>i; j--){
      if(bubble[j][1] < bubble[j-1][1]){
	tmp = bubble[j];
	bubble[j] = bubble[j-1];
	bubble[j-1] = tmp;
      }
    }
  }

  for(int i=0; i<n; i++){
    min = i;
    for(int j=i; j<n; j++){
      if(select[j][1] < select[min][1])
	min = j;
    }
    tmp = select[i];
    select[i]=select[min];
    select[min]=tmp;
  }


  Output(bubble,n);
  isStable(card,bubble,n);

  Output(select,n);
  isStable(card,select,n);

  return 0;
}
  