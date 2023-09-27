#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector <int>
#define vii vector <int>::iterator 
#define vd vector <double>
#define vdd vector <double>::iterator
#define vs vector <string>
#define vss vector <string>::iterator
#define vc vector <char>
#define vcc vector <char>::iterator
#define maxx(a,b,c) max(a,max(b,c))
#define minn(a,b,c) min(a,min(b,c))
#define SORT(x)     sort(x.begin(),x.end())
#define fill(x,y)   memset(x, y, sizeof(x))
#define PI 2*acos(0.0)
#define fio ios::sync_with_stdio(false);cin.tie(0)
using namespace std;
int main(){
   ll t;
   cin >> t;
   map <string , int> m;
   m["AC"] = 0;
   m["WA"] = 0;
   m["TLE"] = 0;
   m["RE"] = 0;
   while(t--){
       string s;
       cin >> s;
       if(m.count(s) == 0)
            m[s] = 1;
        else
            m[s]++;
   }
   /*map <string , int>:: iterator it;
   for(it= m.begin(); it!=m.end(); it++)
        cout << it->first << " x " << it->second << endl;*/
    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;
}