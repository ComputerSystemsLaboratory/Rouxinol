#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#define rep(i,n) for(int i = 0; i < n; ++i)
#define rec(i,m,n) for(int i = m; i < n; ++i)

using namespace std;

int main()
{

  int n ;

  while(cin >> n && n!=0)
    {

      int max = -1;
      int h,m,s;
      int start,end;
      vector<int> time(240001);

      fill(time.begin(),time.end(),0);

      rep(i,n){

        scanf("%d:%d:%d",&h,&m,&s);
        start = h*10000 + m*100 + s;
        scanf("%d:%d:%d",&h,&m,&s);
        end = h*10000 + m*100 + s;

        time[start]++;
        time[end]--;

      }

      rep(i,time.size())
        if(i > 0)
          time[i] += time[i-1];

      rep(i,time.size())
        if(max < time[i])
          max = time[i];

      cout << max << endl;

    }

  return 0;

}