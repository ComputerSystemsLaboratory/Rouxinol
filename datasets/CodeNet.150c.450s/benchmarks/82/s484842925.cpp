#include <math.h>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
vector<int> d(7);
int q;
for(int i=1;i<7;i++){cin >> d[i];}
cin >> q;
for(int i=0;i<q;i++)
{
int t,f,o,ans;
o=0;
cin >> t >> f;
for(int j=1;j<7;j++){if(t==d[j])t=j;if(f==d[j])f=j;}
if(f>t){o=t;t=f;f=o;o=1;}
if(t==2)ans=4;
else if(t==3){if(f==1)ans=2;else ans=6;}
else if(t==4){if(f==1)ans=5;else ans=1;}
else if(t==5){if(f==1)ans=3;else if(f==3)ans=6;else ans=1;}
else {if(f==2)ans=4;else if(f==3)ans=2;else if(f==4)ans=5;else ans=3;}
if(o!=0)ans=7-ans;
cout << d[ans] << endl;
}
}
