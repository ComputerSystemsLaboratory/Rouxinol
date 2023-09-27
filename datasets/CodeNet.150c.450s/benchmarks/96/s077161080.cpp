#include <iostream>
using namespace std;

int main(){
  char l[10][6]={{}, {".,!? "}, {"abc"}, {"def"}, {"ghi"}, {"jkl"}, {"mno"}, {"pqrs"}, {"tuv"}, {"wxyz"}};
  //char **l={{}, {".,!? "}, {"abc"}, {"def"}, {"ghi"}, {"jkl"}, {"mno"}, {"pqrs"}, {"tuv"}, {"wxyz"}};
  int n;
  cin >> n;
  for(int k=0;k<n;k++){
    char c[1025];
    cin >> c;
    int size=0;
    for(int i=0;i<1025;i++){
      if(c[i]=='\0'||c[i]=='\n'){
        break;
      }
      size++;
    }

    int count=0;
    for(int i=0;i<size;i++){
      if(c[i]=='0'){
        if(i!=0){
          int num = (int)(c[i-1]-'0');
          int s=0;
          for(int j=0;j<7;j++){
            if(l[num][j]=='\0'){
              s=j;
              break;
            }
          }
          if(c[i]!=c[i-1])
            cout << l[num][(count-1)%s];
          count=0;
        }
      }else{
        count++;
      }
    }


    /*for(int i=1;i<size;i++){
      if(c[i-1]=='0'&&c[i]=='0') continue;
      else if(c[i-1]!='0'&&(c[i-1]==c[i]||c[i]!='0')){
      count++;
      }else if(c[i]=='0'){
      int s=0;
      int num = (int)(c[i-1]-'0');
      if(num==0) continue;
      for(int j=0;j<7;j++){
      if(l[num][j]=='\0'){
      s=j+1;
      break;
      }
      }
    //int num = static_const<int>(c[i-1]);
    if(s!=0)cout << l[num][count%s];
    count=0;
    }
    if(i==size-1) cout << endl;
    }*/

    cout << endl;
    for(int i=0;i<1025;i++){
      c[i]='\0';
    }
  }
  return 0;
}