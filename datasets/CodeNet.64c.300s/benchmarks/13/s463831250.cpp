                                        #include <bits/stdc++.h>
                                        #include<iostream>
                                        #include<cstdio>
                                        #include<vector>
                                        #include<queue>
                                        #include<map>
                                        #include<cstring>
                                        #include<string>
                                        #include <math.h>
                                        #include<algorithm>
                                    //    #include <boost/multiprecision/cpp_int.hpp>
                                        #include<functional>
                                #define int long long
                                        #define inf  1000000007
                                        #define pa pair<int,int>
                                        #define ll long long
                                        #define pal pair<double,pa>
                                        #define ppa pair<int,int>
                                        #define ppap pair<pa,pa>
                                        #define ssa pair<string,int>
                                        #define  mp make_pair
                                        #define  pb push_back
                                        #define EPS (1e-10)
                                        #define equals(a,b) (fabs((a)-(b))<EPS)
                                  #define VI vector<int>
                                        using namespace std;


int gcd(int a,int b){
	if(a<b) return gcd(b,a);
	if(b==0) return a;
	if(a%b==0) return b;
	return gcd(b,a%b);
}
map<int,int>ma;
           signed main(){
               int n;
 // cin>>n;
         int f[100];
           	f[0]=1;
           	f[1]=1;
           	for(int  i=2;i<50;i++)f[i]=f[i-1]+f[i-2];
           	int u;
           	cin>>u;
           	
           	cout<<f[u]<<endl;
           }
             