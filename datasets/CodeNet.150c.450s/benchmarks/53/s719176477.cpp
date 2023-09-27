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


 VI sosuu,kosuu;
            signed main(){
            	int n;
   cin>>n;
            	int nn=n;
            	for(int i=2;i<=100000;i++){
            		if(nn%i!=0) continue;
            		int an=0;
            		while(nn%i==0){
            		an++;
            		nn/=i;
            		}
            		sosuu.pb(i);
            		kosuu.pb(an);
            	}
            	if(nn>1){
            		sosuu.pb(nn);
            		kosuu.pb(1);
            		
            		
            	}
            	cout<<n<<":";
            	for(int  i=0;i<sosuu.size();i++){
            		
            		for(int k=0;k<kosuu[i];k++)cout<<" "<<sosuu[i];
            	}
            	cout<<endl;
            	
            }
             