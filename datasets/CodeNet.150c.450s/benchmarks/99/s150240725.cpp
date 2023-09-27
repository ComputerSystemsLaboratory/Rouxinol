#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    string str1, str2;
    string ans;
    cin >> str1 >> str2;

    int str_i=0, str_x=0, str_c=0, str_m=0;
    char c1[9],c2[9];
    strcpy(c1, str1.c_str());
    strcpy(c2, str2.c_str());

    for(int j=str1.size()-1;j>=0;j--){
      if(c1[j]=='m'||c1[j]=='c'||c1[j]=='x'||c1[j]=='i') {
        if(j>0){
          if(c1[j-1]>='2'&&c1[j-1]<='9'){
            if(c1[j]=='i') str_i+=(int)(c1[j-1]-'0');
            if(c1[j]=='c') str_c+=(int)(c1[j-1]-'0');
            if(c1[j]=='x') str_x+=(int)(c1[j-1]-'0');
            if(c1[j]=='m') str_m+=(int)(c1[j-1]-'0');
          }else{
            if(c1[j]=='i') str_i++;
            if(c1[j]=='c') str_c++;
            if(c1[j]=='x') str_x++;
            if(c1[j]=='m') str_m++;
          }
        }else{
          if(c1[j]=='i') str_i++;
          if(c1[j]=='c') str_c++;
          if(c1[j]=='x') str_x++;
          if(c1[j]=='m') str_m++;
        }
      }
    }

    for(int j=str2.size()-1;j>=0;j--){
      if(c2[j]=='m'||c2[j]=='c'||c2[j]=='x'||c2[j]=='i') {
        if(j>0){
          if(c2[j-1]>='2'&&c2[j-1]<='9'){
            if(c2[j]=='i') str_i+=(int)(c2[j-1]-'0');
            if(c2[j]=='c') str_c+=(int)(c2[j-1]-'0');
            if(c2[j]=='x') str_x+=(int)(c2[j-1]-'0');
            if(c2[j]=='m') str_m+=(int)(c2[j-1]-'0');
          }else{
            if(c2[j]=='i') str_i++;
            if(c2[j]=='c') str_c++;
            if(c2[j]=='x') str_x++;
            if(c2[j]=='m') str_m++;
          }

        }else{
          if(c2[j]=='i') str_i++;
          if(c2[j]=='c') str_c++;
          if(c2[j]=='x') str_x++;
          if(c2[j]=='m') str_m++;
        }
      }
    }

    if(str_i>=10){
      str_i-=10;
      str_x++;
    }
    if(str_x>=10){
      str_x-=10;
      str_c++;
    }
    if(str_c>=10){
      str_c-=10;
      str_m++;
    }

    if(str_m==1) ans = ans + 'm';
    else if(str_m!=0) ans=ans+to_string(str_m)+'m';
    if(str_c==1) ans = ans + 'c';
    else if(str_c!=0) ans=ans+to_string(str_c)+'c';
    if(str_x==1) ans = ans + 'x';
    else if(str_x!=0) ans=ans+to_string(str_x)+'x';
    if(str_i==1) ans = ans + 'i';
    else if(str_i!=0) ans=ans+to_string(str_i)+'i';

    cout << ans << endl;
  }

  return 0;
}