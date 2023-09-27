#include <iostream>
using namespace std;

typedef struct {
  int value;
  char mark;
}card;

void bsort(card *C,int N){
  card t;
  for (int i=0;i<N;i++){
    for (int j=N-1;j>i;j--){
      if (C[j].value < C[j-1].value){
	t=C[j];
	C[j]=C[j-1];
	C[j-1]=t;
      }
    }
  }
}

void ssort(card *C,int N){
  card t;
  int minj;
  for (int i=0;i<N;i++){
    minj=i;
    for (int j=i;j<N;j++){
      if (C[j].value<C[minj].value)minj=j;
    }
    t=C[i];
    C[i]=C[minj];
    C[minj]=t;
  }
}

int isstable(card *ori, card *srt,int N){
  int i=0,flg;
  while (i<N){
    flg=0;
    for (int j=0;j<N;j++){
      //cout << srt[i].mark << srt[i].value << " " << i << endl;
      if (srt[i].value==ori[j].value && srt[i].mark==ori[j].mark){
	if (i+1<N && srt[i].value==srt[i+1].value)i++;
	else{
	  flg=1;
	  i++;
	  break;
	}
      }
    }
    if (flg) continue;
    else return 0;
  }
  return 1;
}

int main(){
  card o[40],b[40],s[40];
  int N,i;
  char t[5];

  cin >> N;
  for (i=0;i<N;i++){
    cin >> t;
    o[i].mark=t[0];
    o[i].value=t[1]-'0';
    
    b[i]=s[i]=o[i];
  }

  bsort(b,N);
  ssort(s,N);

  for (i=0;i<N-1;i++)cout << b[i].mark << b[i].value << " ";
  cout << b[i].mark << b[i].value << endl;
  if (isstable(o,b,N))cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  
  for (i=0;i<N-1;i++)cout << s[i].mark << s[i].value << " ";
  cout << s[i].mark << s[i].value << endl;
  if (isstable(o,s,N))cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  
  return 0;
}