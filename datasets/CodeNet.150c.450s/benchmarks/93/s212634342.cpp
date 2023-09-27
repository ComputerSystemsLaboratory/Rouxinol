#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

#define PB push_back

int Partition(vector<pair<string,int> >&,int,int);
void Quicksort(vector<pair<string,int> >&,int,int);
void Mergesort(vector<pair<string,int> >&);

int n;

int main(int argc,char* argv[]){
  vector<pair<string,int> > quicks;
  pair<string,int> stri;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>stri.first>>stri.second;
    quicks.PB(stri);
  }
  vector<pair<string,int> > merges(quicks.begin(),quicks.end());

  Quicksort(quicks,0,n-1);
  Mergesort(merges);

  bool flag=true;
  for(int i=0;i<n;i++){
    if(quicks[i].first!=merges[i].first || quicks[i].second!=merges[i].second){
      flag=false;
      break;
    }
  }

  if(flag)
    cout<<"Stable"<<endl;
  else
    cout<<"Not stable"<<endl;

  for(int i=0;i<n;i++)
    cout<<quicks[i].first<<" "<<quicks[i].second<<endl;

  return 0;
}

int Partition(vector<pair<string,int> >& quicks,int p,int r){
  int x=quicks[r].second;
  int i=p-1;
  for(int j=p;j<r;j++){
    if(quicks[j].second<=x){
      i+=1;
      swap(quicks[i],quicks[j]);
    }
  }
  swap(quicks[i+1],quicks[r]);
  return i+1;
}

void Quicksort(vector<pair<string,int> >& quicks,int p,int r){
  if(p<r){
    int q=Partition(quicks,p,r);
    Quicksort(quicks,p,q-1);
    Quicksort(quicks,q+1,r);
  }
}

void Mergesort(vector<pair<string,int> >& merges){
  int vecsize=merges.size();

  if(vecsize>1){
    vector<pair<string,int> > lft(merges.begin(),merges.begin()+vecsize/2);
    vector<pair<string,int> > rht(merges.begin()+vecsize/2,merges.end());

    Mergesort(lft);
    Mergesort(rht);

    for(int i=0,l=0,r=0;i<vecsize;i++){
      if(l==(int)lft.size())
	merges[i]=rht[r++];
      else if(r==(int)rht.size())
	merges[i]=lft[l++];
      else if(lft[l].second<=rht[r].second)
	merges[i]=lft[l++];
      else
	merges[i]=rht[r++];
    }
  }
}