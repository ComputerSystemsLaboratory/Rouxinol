#include <iostream>
using namespace std;

int main(){
  char buf[1030];
  int n,bi,ki;
  int kcount=0,kcode=0;
  char kdata[10][10]={{0,5,3,3,3,3,3,4,3,4},".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  cin >> n;

  for (int i=0;i<n;i++){
    cin >> buf;
    bi=-1;
    kcode=0;
    kcount=0;
    while (buf[++bi]!='\0'){
      if (buf[bi]=='0'&&kcode>0){
        ki=(kcount-1)%kdata[0][kcode];
	cout << kdata[kcode][ki];
	kcode=0;
	kcount=0;
      }
      if (buf[bi]>='1'&&buf[bi]<='9'){
	kcode=buf[bi]-'0';
	kcount++;
      }
    }
    cout << endl;
  }
  return 0;
}