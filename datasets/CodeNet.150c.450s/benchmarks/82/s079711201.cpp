#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr ll mod=1e9+7;

struct Dice
{
  map<char,int> mp;
  vector<set<int>> vertex;
  vector<int> point;
  Dice(vector<int> point_init)
  {
    point=point_init;
    vertex=vector<set<int>>(8);
    mp['t']=point_init[0];
    mp['b']=point_init[5];
    mp['n']=point_init[4];
    mp['s']=point_init[1];
    mp['w']=point_init[3];
    mp['e']=point_init[2];
    for (int i = 0; i < 4; ++i)
    {
      vertex[i].insert(point_init[0]);
      vertex[i+4].insert(point_init[5]);
    }
    for (int i = 0; i < 2; ++i)
    {
      vertex[i].insert(point_init[1]);
      vertex[i+2].insert(point_init[4]);
      vertex[i+4].insert(point_init[1]);
      vertex[i+6].insert(point_init[4]);
      vertex[i+1].insert(point_init[2]);
      vertex[i+5].insert(point_init[2]);
      vertex[i+3].insert(point_init[3]);
    }
    vertex[0].insert(point_init[3]);
    vertex[7].insert(point_init[3]);
  }



  void roll(char c)
  {
    map<char,int> next;
    switch (c)
    {
      case 'S':{
        next['b']=mp['s'];
        next['t']=mp['n'];
        next['w']=mp['w'];
        next['e']=mp['e'];
        next['n']=mp['b'];
        next['s']=mp['t'];
        break;
      }
      case 'N':{
        next['b']=mp['n'];
        next['t']=mp['s'];
        next['w']=mp['w'];
        next['e']=mp['e'];
        next['n']=mp['t'];
        next['s']=mp['b'];
        break;
      }
      case 'W':{
        next['b']=mp['w'];
        next['t']=mp['e'];
        next['w']=mp['t'];
        next['e']=mp['b'];
        next['n']=mp['n'];
        next['s']=mp['s'];
        break;
      }
      case 'E':{
        next['b']=mp['e'];
        next['t']=mp['w'];
        next['w']=mp['b'];
        next['e']=mp['t'];
        next['n']=mp['n'];
        next['s']=mp['s'];
        break;
      }
      default :{
        break;
      }
    }
    mp=next;
  }

  int last_face(int a,int b)
  {
    if(
      (a==point[0]&&b==point[1])||
      (a==point[1]&&b==point[5])||
      (a==point[5]&&b==point[4])||
      (a==point[4]&&b==point[0])
      ) return point[2];
    if(
      (b==point[0]&&a==point[1])||
      (b==point[1]&&a==point[5])||
      (b==point[5]&&a==point[4])||
      (b==point[4]&&a==point[0])
      ) return point[3];
    if(
      (a==point[0]&&b==point[2])||
      (a==point[2]&&b==point[5])||
      (a==point[5]&&b==point[3])||
      (a==point[3]&&b==point[0])
      ) return point[4];
    if(
      (b==point[0]&&a==point[2])||
      (b==point[2]&&a==point[5])||
      (b==point[5]&&a==point[3])||
      (b==point[3]&&a==point[0])
      ) return point[1];
    if(
      (a==point[1]&&b==point[2])||
      (a==point[2]&&b==point[4])||
      (a==point[4]&&b==point[3])||
      (a==point[3]&&b==point[1])
      ) return point[0];
    if(
      (b==point[1]&&a==point[2])||
      (b==point[2]&&a==point[4])||
      (b==point[4]&&a==point[3])||
      (b==point[3]&&a==point[1])
      ) return point[5];
  }
};

int main()
{
  vector<int> point(6);
  for(auto&& e: point) 
  {
    cin>>e;
  }
  Dice dice(point);
  int n;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    int a,b;
    cin>>a>>b;
    cout<<dice.last_face(a,b)<<endl;
  }
}
