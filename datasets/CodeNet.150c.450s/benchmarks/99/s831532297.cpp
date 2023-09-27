#include <string>
#include <iostream>
using namespace std;
  
void itom(int num){
  int a=num/1000;
  if(a>1)cout<<a;
  if(a>0)cout<<'m';
  num%=1000;
 
  a=num/100;
  if(a>1)cout<<a;
  if(a>0)cout<<'c';
  num%=100;
 
  a=num/10;
  if(a>1)cout<<a;
  if(a>0)cout<<'x';
  num%=10;
 
  a=num;
  if(a>1)cout<<a;
  if(a>0)cout<<'i';
 
  cout<<endl;
}

int mtoi(string s){

    int res = 0;
    int mul = 1;
    for (int i=0; i<s.size(); i++) {
        if (s[i] >= '2' && s[i] <= '9') {
            mul = (int) s[i] - (int) '0';
        } else {
            switch (s[i]) {
                case 'm':
                    res += mul * 1000;
                    break;
                case 'c':
                    res += mul * 100;
                    break;
                case 'x':
                    res += mul * 10;
                    break;
                default:
                    res += mul;
            }
            mul = 1;
        }
    }
    return res; 
}

int main() {
    int n, aa, bb, cc;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s1, s2;
        cin >> s1 >> s2;
        
        aa=mtoi(s1);
        bb=mtoi(s2);
        cc=aa+bb;
        
        itom(cc);
    }
    return 0;
}