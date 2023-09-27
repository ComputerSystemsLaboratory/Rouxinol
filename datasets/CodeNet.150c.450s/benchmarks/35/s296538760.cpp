#include <bits/stdc++.h>
using namespace std;

int main(){
int n,Sum,Ans ;

while(1){

cin >> n ;

if(n==0){
break ;
}

vector<int> vec(n),vec2(n+1,0) ;

for(int i=0;i<n;i++){
cin >> vec.at(i) ;
}

for(int j=0;j<n;j++){
vec2.at(j+1)=vec.at(j)+vec2.at(j) ;
}
    
Ans=vec2.at(n) ;

for(int k=0;k<n+1;k++){
    for(int l=k+1;l<n+1;l++){
    Sum=vec2.at(l)-vec2.at(k);
    Ans=max(Sum,Ans) ;
    }
}

cout << Ans << endl ;

}

}

