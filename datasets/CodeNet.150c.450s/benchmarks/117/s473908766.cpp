#include<iostream>
using namespace std;
const int MAXN = 500000+5;
int n,nu[MAXN],an[MAXN],tt(0);
void init(){
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>nu[i];
}
void sor(int l,int r){
	if(r-l>1){
	    int m(l+(r-l)/2),p(l),q(m),i(l);//l - m-1,m - r
		sor(l,m);
		sor(m,r);
		//cout<<"lmr  p="<<p<<"   m="<<m<<"  r="<<r<<endl;
		while(p<m||q<r){
			if(q>=r||(p<m&&nu[p]<=nu[q])) an[i++]=nu[p++];
			else an[i++]=nu[q++];
			tt++;
			//cout<<"p="<<p<<"   q="<<q<<endl;
			//cout<<an[i-1]<<' ';
	        //system("pause");
		}
		//cout<<endl;
		for(i=l;i<r;i++)
		    nu[i]=an[i];
		//cout<<"l="<<l<<"   r="<<r<<endl;for(i=l;i<r;i++) cout<<nu[i]<<' ';cout<<endl;
	}
}
int main(){
	init();
	sor(0,n);
	for(int i=0;i<n-1;i++)
	   cout<<nu[i]<<' ';
	cout<<nu[n-1]<<endl<<tt<<endl;
	return 0;
}