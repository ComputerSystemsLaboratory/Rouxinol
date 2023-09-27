#include<iostream>
#include<cstdio>
using namespace std;
int arisutoteresu[200][200] = {0};
int imap[200][200] = {0};
int n,u[200],k[200];
int GetIt[200]={0};
int FinIt[200]={0};
bool used[200];
int fincou=1;
int Gcounter;
int Fcounter;
int Find;
void dfs(int where){
  Find++;
  //cout << "where " << where << " " << Find << endl; 
 GetIt[where]=Find;
  //cout << "GetIt[" << where << "] = " << GetIt[where] << endl;

  if(k[where] != 0){ 
    for(int i=0;i<k[where];i++){
      if(!used[imap[where][i]]){
	Gcounter++;

	used[imap[where][i]] = true;
	dfs(imap[where][i]);

      }
    }
  }
  Find++;
    FinIt[where] = Find;
     
}
 
int main(){
  
  int ad;
   
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    cin >> u[i];
    cin >> k[u[i]];
    for(int j=0;j<k[u[i]];j++){
      cin >> ad;
      imap[u[i]][j] = ad;
    }
  }
 
 
  for(int j=0;j<200;j++)used[j] = false;
  Gcounter=Fcounter=1;
 
  Find = 0;
  int Index=0;
  bool fin = true;
  fincou = 1;

  
    for(int i=0;i<n;i++){
      if(!used[u[i]]){//cout << "not used" << u[i] << endl;
	used[u[i]]=true;
	dfs(u[i]);

      }
    }
    
    //dfs(u[0]);   

   
  
  //cout << "counter - " << Find << ", F" << fincou << endl;
  for(int i=0;i<n;i++){
    cout << u[i] << " " << GetIt[u[i]]  << " " << FinIt[u[i]];
    cout << endl;
  }
 
  return 0;
}