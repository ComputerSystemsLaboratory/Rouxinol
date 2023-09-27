#include <iostream>

using namespace std;

#define MAX 1000500
 
bool prime[MAX];
 
void is_prime(){
    fill(prime,prime+MAX,true);
    prime[0] = prime[1] = false;
     
    for(int i = 2 ; i*i < MAX ; i++){
        if(prime[i]){
            for(int j = i*i ; j < MAX ; j += i){
                prime[j] = false;
	    }
	}
    }
}
 
int main(){
    int a,d,n;
     
    is_prime();
     
    while(cin >> a >> d >> n , a+d+n){
        int cnt = 0,i;
         
        for(i = a ; i < MAX ; i += d){
            if(prime[i]) cnt++;
            if(cnt == n) break;
        }
        cout << i << endl;
    }
    return 0;
}