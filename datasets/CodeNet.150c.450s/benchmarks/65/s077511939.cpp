#include<iostream>
using namespace std;

struct card{
  char mark;
  int val;
};


void bubble(struct card A[],int N){
  int i,j;

  for(i=0;i<N-1;i++){
    for(j=N-1;j>=i;j--){
      if(A[j].val < A[j-1].val){
	swap(A[j],A[j-1]);
      }
    }
  }
}

void selection(struct card A[],int N){
  int i,j,min;

  for(i=0;i<N-1;i++){
    min=i;
    for(j=i;j<N;j++){
      if(A[j].val < A[min].val){
	min=j;
      }
    }
    swap(A[i],A[min]);
  }
}

void print(struct card A[],int N){
  int i;

  for(i=0;i<N;i++){
    if(i)cout << " ";
    cout << A[i].mark << A[i].val;
  }
  cout << endl;
}

bool isStable(struct card A1[],struct card A2[],int N){
  for(int i=0;i<N;i++){
    if(A1[i].mark != A2[i].mark)return false;
  }
  return true;
}

int main(){

  card C1[100],C2[100];
  int N,i;

  cin >> N;
  for(i=0;i<N;i++){
    cin >> C1[i].mark >> C1[i].val;
  }
  for(i=0;i<N;i++){
    C2[i]=C1[i];
  }

  bubble(C1,N);
  selection(C2,N);

  print(C1,N);
  cout << "Stable" <<endl;
  print(C2,N);
  if(isStable(C1,C2,N)){
    cout << "Stable" <<endl;
  }else{
    cout << "Not stable" << endl;
  }
}