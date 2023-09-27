#include <cstdio>
#include <vector>
#include <climits>
using namespace std;

inline int MIN(int a,int b){
	return ((a)<(b)?(a):(b));
}

int minimumProduct(int left, int right, vector<pair<int,int> >& mat, vector<vector<int> >& product) {
	if(left==right) return 0;
	if(product[left][right]!=-1) {
		return product[left][right];
	}
	int i,min=INT_MAX;
	for(i=left; i<right; ++i) {
		min=MIN(min,minimumProduct(left,i,mat,product)
				+minimumProduct(i+1,right,mat,product)
				+mat[left].first*mat[right].second*((i==right-1)?mat[right].first:mat[i].second));
	}
	return product[left][right]=min;
}

int main() {
	int n;
	int i,j;
	vector<pair<int,int> > mat;
	vector<vector<int> > product;

	scanf("%d",&n);
	mat.resize(n);
	product.resize(n);
	for(i=0; i<n; ++i) {
		product[i].resize(n);
		scanf("%d%d",&mat[i].first,&mat[i].second);
		for(j=0; j<n; ++j) {
			product[i][j]=-1;
		}
	}
	printf("%d\n",minimumProduct(0,n-1,mat,product));
	return 0;
}