#include <iostream>

#include<vector>

#include<string>

#include<algorithm>

#include<cmath>

#include<cstdlib>

#include<utility> 

#include<cstdio> 

#define vii vector< pair<int,int> >

#define vi vector<int>

#define INF 1000000007

#define ff first

#define ss second

#define lli long long int

#define ulli unsigned long long int

using namespace std;

int main() {

 ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    int tl=0,wa=0,ac=0,re=0;

    vector<string> v(t);

    for(int i=0; i<t; i++){

      cin>>v[i];

      if(v[i]=="TLE")

      tl++;

      if(v[i]=="AC")

      ac++;

      if(v[i]=="WA")

      wa++;

      if(v[i]=="RE")

      re++;

    

  }

    cout<<"AC x "<<ac<<endl<<"WA x "<<wa<<endl<<"TLE x "<<tl<<endl<<"RE x "<<re<<endl;

    

  

}