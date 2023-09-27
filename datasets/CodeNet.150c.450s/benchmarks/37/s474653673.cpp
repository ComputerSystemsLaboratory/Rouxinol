#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>
 
using namespace std; 

const long long INF=1LL<<50LL;
const double PI=3.14159265358979323846264;
const double eps=1e-8;
typedef vector<double> vec;
typedef vector<vec> mat;

vec gauss_jordan(const mat &A, const vec &b){
	int n=A.size(); //??£??????????????????
	mat B(n,vec(n+1));
	
	//?????§??????
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) B[i][j]=A[i][j];
	}
	for(int i=0;i<n;i++) B[i][n]=b[i];
	
	for(int i=0;i<n;i++){
		int pivot=i;
		for(int j=i;j<n;j++){
			if(abs(B[j][i]) > abs(B[pivot][i])) pivot=j;
		}
		
		swap(B[i],B[pivot]);
		if(abs(B[i][i]) < eps) return vec();
		
		for(int j=i+1;j<=n;j++) B[i][j]/=B[i][i];
		for(int j=0;j<n;j++){
			if(i!=j){
				for(int k=i+1;k<=n;k++) B[j][k]-=B[j][i]*B[i][k];
			}
		} 
	}
	
	vec x(n);
	for(int i=0;i<n;i++) x[i]=B[i][n];
	return x;
	
}



int main(){

	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		
		mat A(2,vec(2));
		vec v(2);
		
		A[0][0]=a; A[0][1]=b;
		A[1][0]=d; A[1][1]=e;
		v[0]=c; v[1]=f;
		
		vec ans=gauss_jordan(A,v);
		printf("%.3f %.3f\n",ans[0],ans[1]);	
	}

	return 0;
}