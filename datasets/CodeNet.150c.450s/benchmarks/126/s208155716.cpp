#include<bits/stdc++.h>
using namespace std;
int x[30][30],xx,gxx,a,b,cnt,n,s[100],l[100],w,ww,www;
 
int main(){
    for(xx=0;xx<30;xx++){
        for(gxx=0;gxx<30;gxx++){
            x[xx][gxx]=0;
        }
    }
    while(1){
    	cin >> a >> b;
    	if(a==0&&b==0)break;
    	cin >> n;
    	for(int i=1;i<=a;i++){
        	for(int m=1;m<=b;m++){
            	x[i][m]=0;
        	}
    	}
    	for(int xx=0;xx<100;xx++){
        	s[xx]=0;
        	l[xx]=0;
    	}
 
    	for(int i=0;i<n;i++){
        	cin >> s[i] >> l[i];
    	}
    	x[1][1]=1;
    	for(int i=1;i<=a;i++){
        	for(int m=1;m<=b;m++){
                w=x[i][m-1]+x[i-1][m];
               	x[i][m]+=w;
            	for(int r=0;r<n;r++){
                	www=s[r];
            		ww=l[r];
                	x[www][ww]=0;
    			}
			}
		}
  		cout << x[a][b] << endl;
    }
 
    return 0;
}