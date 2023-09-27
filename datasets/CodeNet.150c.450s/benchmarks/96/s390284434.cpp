#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  char str[100000]={};
  char moji[10][6]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int i;
  int n;

  cin>>n;
  rep(i,n){
    cin>>str;
    int len=strlen(str);
    int j=0;
    while(j<len){
      int num=0;
      while(str[j]!='0'){
	j++;
	num++;
      }
      if(j==0){
	j++;
	continue;
      }
      int a=str[j-1]-'0';
      if(a==1)
	cout<<moji[1][(num-1)%5];
      else if((a>1 && a<7)|| a==8)
	cout<<moji[a][(num-1)%3];
      else if(a==7 || a==9)
	cout<<moji[a][(num-1)%4];
      j++;
    }
    cout<<endl;
  }
}