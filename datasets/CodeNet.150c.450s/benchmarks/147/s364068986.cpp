#include<bits/stdc++.h>
#define ll long long
const ll mod=1e9+7;
const int maxn=10000;
using namespace std;
 bool sortbysec(pair<ll,ll> &a, pair<ll,ll> &b) { 
    return (a.second < b.second); 
} 
 
int main()
//int found; found=chaine.find(cara); if (found!=std::string::npos) how to verify if a caracter exists in a chaine
// toupper(caractere) ==> return the majuscule of a caractere
//floor(x) Returns the largest integer smaller than x
//ceil(x) returns  Returns the smallest integer greater
/* #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
    #endif */
{ 
  
    
        int nb=10008;
        int v[nb+1];
        for(int i=1;i<=nb;i++)v[i]=0;
        
		for(int x=1;x<=sqrt(nb);x++)
    	{
    		for(int y=1;y<=sqrt(nb);y++)
    	    {
    		    for(int z=1;z<=sqrt(nb);z++)
    	        {
                      int k=x*x+z*z+y*y+x*y+x*z+y*z;
					  if(k<=nb)v[k]++;    		
		        }
		    }
		}
		
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cout<<v[i]<<endl;
	}
}

