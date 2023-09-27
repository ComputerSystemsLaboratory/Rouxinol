#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
 
 
int main() {
 
    int judge[1000000];
    for(int k=0;k<1000000;k++)judge[k]=1;
    int a,d,n,i,j,sum,judge2=0;
    set<int> prime;
    
    prime.insert(2);
    
    //999999までの素数リストをつくる。
    for(i=3;i<999999;i+=2){
    	if(judge[i]==1){
    		prime.insert(i);
    		for(j=2;j<=1000000/i;j++){
    			judge[i*j] = 0;
    		}
    	}
    }
    
    
    
    while(1){
    	    sum = 0;
    	    cin >>a>>d>>n;
    	    if (a==0&&d==0&&n==0)break;
    	    
    	    i = 0;
    	    while(1){
    	    	if (prime.find(a+i*d)!=prime.end()){
    	    		sum++;
    	    		if(sum==n){
    	    			cout << a+i*d << endl;
    	    			break;
    	    		}
    	    	}
    	    	i++;
    	    }
    }
 
    return 0;
}