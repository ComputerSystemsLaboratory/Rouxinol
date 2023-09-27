#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int sn[100],sm[100];
  int i,j,n,m,cn=0,cm=0;
    cin >> n >> m;
  while (n!=0&&m!=0){
    cn=0;
    cm=0;
    for (i=0;i<n;i++) {
      cin >> sn[i];
      cn+=sn[i];
    }
    for (j=0;j<m;j++) {
      cin >> sm[j];
      cm+=sm[j];
    }
    sort(&sn[0],&sn[n]);
    sort(&sm[0],&sm[m]);
    i=0;j=0;
    //printf("%d %d\n",cm,cn);
    while (i<n&&j<m){
      // printf("%d %d %d %d %d %d\n",i,j,sn[i],sm[j],cm-sm[j]+sn[i],cn+sm[j]-sn[i]);
      if (cm+sn[i]-sm[j]<cn+sm[j]-sn[i]){
	i++;
      }else if (cm+sn[i]-sm[j]>cn+sm[j]-sn[i]){
	j++;
      }else if (cm+sn[i]-sm[j]==cn+sm[j]-sn[i]){
	cout << sn[i] <<" "<<sm[j]<<endl;
	break;
      }
    }
    if (!(i<n&&j<m)) cout << "-1" << endl;
    cin >> n >> m;
  }
  return 0;
}