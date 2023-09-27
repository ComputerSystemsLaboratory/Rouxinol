#include <iostream>
using namespace std;
struct Node{
  int u;
  int k;
  int v[99];

  int start;
  int finish;
};

int deep(Node nod[],int x,int count){
  if(nod[x].start)
    return count;

  nod[x].start=(++count);
  for(int i=0; i<nod[x].k; i++)
    count = deep(nod,nod[x].v[i]-1,count);

  nod[x].finish= (++count);
  return count;
}

int main(){
  int n,count=0;
  Node nod[100];

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> nod[i].u >> nod[i].k;
    
    for(int j=0; j<nod[i].k; j++)
      cin >> nod[i].v[j];
    
    nod[i].start=0;
    nod[i].finish=0;
  }

  for(int i=0; i<n; i++)
    count = deep(nod,i,count);
  
  for(int i=0; i<n; i++){
    cout << nod[i].u << " " << nod[i].start << " " << nod[i].finish << endl;
  }
}