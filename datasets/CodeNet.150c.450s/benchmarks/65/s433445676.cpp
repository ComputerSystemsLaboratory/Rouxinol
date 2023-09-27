#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;
int N;

void BabbleSort(string s[]){
    REP(i,N){
	RFOR(j,i+1,N){
	    if((int)(s[j-1][1] - '0') > (int)(s[j][1] - '0')) swap(s[j-1],s[j]);
	}
    }	
}
void SelectionSort(string s[]){
    REP(i,N){
	int mini = i;
	FOR(j,i,N){
	    if((int)(s[mini][1] - '0') > (int)(s[j][1] - '0')) {
		mini = j;
	    }
	}
	swap(s[i],s[mini]);
    }
}

int main(){

    bool stableflag;
    cin >> N;
    string s[50],s1[50],s2[50];
    REP(i,N){
       	cin >> s[i];
	s1[i] = s[i];
	s2[i] = s[i];
    }
    BabbleSort(s1);
    SelectionSort(s2);
    stableflag = true;
    REP(i,N-1) cout << s1[i] << " ";
    cout << s1[N-1];
    cout << endl;
    cout << "Stable"<<endl;
    REP(i,N) if(s2[i][0] != s1[i][0]) stableflag = false;
    REP(i,N-1) cout << s2[i] << " ";
    cout << s2[N-1];
    cout << endl;
    if(stableflag) cout << "Stable"<<endl;
    else cout << "Not stable" << endl;

    return 0;
}