#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>

#define ll long long int

using namespace std;
typedef pair<int, int> P;


int main()
{
  ll n;
  char foot[100][2]={};
  int i;

  while(1){
    cin>>n;
    if(n==0)break;
    int sum=0;
    for(i=0;i<n;i++)
      cin>>foot[i][0]>>foot[i][1];
    for(i=1;i<n;i++){
           if(foot[i-1][1]==foot[i][1]){
	sum++;
	i++;
      }
    }
    cout<<sum<<endl;
  }

}