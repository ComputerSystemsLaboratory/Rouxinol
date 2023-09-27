// using bubble sort and selection sort
// input pairs of card and number, outout 2-way sorted pairs and "stable" or "not stable"
// bubble sort is always "stable"
#include<iostream>
typedef struct{
  char c;
  int i;
}card;
void BubbleSort(card*, int);
void SelectionSort(card*, int);
int main(){
  int i, N, flag;
  std::cin >> N;
  card B[N],S[N];
  for(i=0; i<N; i++){
    std::cin >> B[i].c >> B[i].i;
    S[i] = B[i];
  }
  BubbleSort(B, N);
  SelectionSort(S, N);
  bool boo=true;
  for(i=0,flag=1; i<N&&boo==true; i++)
  if(B[i].c != S[i].c) boo = false;
  std::cout << (boo ? "Stable\n" : "Not stable\n");
  return 0;
}
void BubbleSort(card *B, int N){
  card tmp;
  for(int i=0; i<N-1; i++) for(int j=N-1; j>i; j--) if(B[j].i < B[j-1].i) tmp = B[j], B[j] = B[j-1], B[j-1] = tmp;
  for(int i=0; i<N; i++) std::cout << B[i].c << B[i].i << (i < N-1 ? " " : "\n");
  std::cout << "Stable\n";
}
void SelectionSort(card *S, int N){
  card tmp;
  for(int i=0,min; i<N-1; i++){
    min = i;
    for(int j=i; j<N; j++) if(S[j].i < S[min].i) min = j;
    tmp = S[i], S[i] = S[min], S[min] = tmp;
  }
  for(int i=0; i<N; i++) std::cout << S[i].c << S[i].i << (i < N-1 ? " " : "\n");
}