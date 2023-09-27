
#include<bits/stdc++.h>

#define reps(i,j,k) for(int i=(j);i<(k);++i)
#define rep(i,j) reps(i,0,j)
#define fs first
#define sc second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

template<class S, class T>
ostream &operator<<(ostream &out, const pair<S,T> &p){
	return out << "(" << p.fs << ", " << p.sc << ")";
}

template<class T>
ostream &operator<<(ostream &out, const vector<T> &v){
	out << "{";
	rep(i,v.size())
		out << v[i] << ", ";
	return out << "}" << endl;
}


int bo[100][10];
int bo2[100][10];

int main(){
	int H;

	for(;;){
		int r;
		bool f;

		scanf("%d",&H);
		if(H==0)return 0;
		rep(i,100)rep(j,10)bo2[i][j]=bo[i][j]=0;
		rep(i,H)rep(j,5)scanf("%d",&bo[H-i-1][j]);

		r=0;
		for(;;){
			f=true;
			
			rep(i,H)rep(j,5)bo2[i][j]=bo[i][j];
			rep(i,H)rep(j,3)if(bo[i][j] != 0 && bo[i][j] == bo[i][j+1] && bo[i][j+1]==bo[i][j+2]){
				f=false;
				rep(k,3){
					r += bo2[i][j+k];
					bo2[i][j+k]=0;
				}
			}
			rep(i,H)rep(j,5)bo[i][j]=bo2[i][j];
			if(f)break;
			
			rep(j,5){
				rep(i,25){
					if(bo[i][j]==0){
						int k=i+1;
						for(;k<70;k++){
							if(bo[k][j]!=0)break;
						}
						//cerr << k << " ";
						rep(l,25){
							bo[i+l][j] = bo[k+l][j];
						}
					}
				}
			}
			/*
			cerr << "###############" <<endl;
			rep(i,H){
				rep(j,5) cerr << bo[i][j] <<" ";
				cerr << endl;
			}
			*/
		}

		printf("%d\n",r);
	}
	return 0;
}