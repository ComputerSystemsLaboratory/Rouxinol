#include<iostream>
#include<cstring>

using namespace std;
#define M 1046527
#define L 14

char st[M][L];

int h1(int key){return key%M;}
int h2(int key){return 1+key%(M-1);}
// i is number of collision （used to search next space）
int h(int key,int i){return (h1(key)+i*h2(key))%M;}

int getChar(char ch){
  if(ch == 'A') return 1;
  else if (ch == 'C') return 2;
  else if (ch == 'G') return 3;
  else return 4;
}

long long getKey(char str[]){
  long long sum = 0;
  for(long long i = 0,p = 1;i<strlen(str);i++,p*=5)
    sum+=p*getChar(str[i]);
  return sum;
}

int insert(char str[]){
  long long key = getKey(str), i = 0, hi;
  for(;;i++){
    hi = h(key,i);
    if(strcmp(st[hi],str)==0)return 1; //if equal it exist
    else if(strlen(st[hi])==0){
      strcpy(st[hi],str);
      return 0;
    }
  }
  return 0;
}
int find(char str[]){
  long long key, i, hi;
  key = getKey(str);
  for(i=0;;i++){
    hi = h(key,i);
    if(strcmp(str,st[hi])==0) return hi;
    else if(strlen(st[hi])==0) return 0;
  }
  return 0;
}

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    char cmd[10];
    char str[L];
    cin>>cmd>>str;
    if(cmd[0]=='i')
      insert(str);
    else if(find(str))
      cout<<"yes\n";
    else
      cout<<"no\n";
  }
  return 0;
}

