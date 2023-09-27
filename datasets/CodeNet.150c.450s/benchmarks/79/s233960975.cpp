#include<iostream>
#define N 50
using namespace std;
/*
Hanafuda Shuffle
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1129&lang=jp

*/
int array[N];
void makearray(int n){
    for(int i=0;i<N;i++){
	array[i]=n;
	if(n>0)n-=1;
    }
}
void shuffle(int p, int c){
    int sarray[N];
    //copy unshuffled deck
    for(int i=p-1+c;i<N;i++){
	sarray[i]=array[i];
    }
    //copy the c part
    int j=0;
    for(int i=p-1;i<p-1+c;i++){
	sarray[j]=array[i];
	j++;
    }
    // copy the p part
    j=c;
    for(int i=0;i<p-1;i++){
	sarray[j]=array[i];
	j++;
    }
    for(int i=0;i<N;i++){
	array[i]=sarray[i];
    }
}
    
    
    
int main(){
    int n,r, p, c;
    while(1){
	cin >>n>>r;
	makearray(n);
	if(n==0 && r==0)break;
	for(int i=0;i<r;i++){
	    cin >> p>>c;
	    shuffle(p,c);
	}
	cout << array[0] << endl;
    }
    
}