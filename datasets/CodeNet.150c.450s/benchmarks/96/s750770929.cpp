#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  /*
  char a1[5] = {'.',',','!','?',' '};
  char a2[3] = {'a','b','c'};
  char a3[3] = {'d','e','f'};
  char a4[3] = {'g','h','i'};
  char a5[3] = {'j','k','l'};
  char a6[3] = {'m','n','o'};
  char a7[4] = {'p','q','r','s'};
  char a8[3] = {'t','u','v'};
  char a9[4] = {'w','x','y','z'};
  */
  /*
  string a1=".,!? ";
  string a2="abc";
  string a3="def";
  string a4="ghi";
  string a5="jkl";
  string a6="mno";
  string a7="pqrs";
  string a8="tuv";
  string a9="wxyz";
 */
 string a[9] = {".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 //for(int i=0; i<9; i++) cout << a[i] << " ";
 int n;
 cin >> n;
 for(int k=0; k<n; k++){
   string s;
   cin >> s;
   for(int i=0; i<(int)s.size(); i++){
     char c = s[i];
     int count = 0;
     for(i=i+1; i<(int)s.size(); i++){
       if(s[i] != c) break; //先頭と違っていたら
       count++;
    }
    i--; //?
    if(c=='0') continue;
    int num = c-'0'-1; //何故'0'?
    //cout << "#" << num << " " << c << " ";
    int tmp = count % a[num].size();
    cout << a[num][tmp];
    }
    cout << endl;
 }
 return 0;
}

