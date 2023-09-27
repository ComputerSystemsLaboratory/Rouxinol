//*********************************************************************************************************************************
//*																																**
//*		SSSSSSSSSSSS											MMMM			MMMM	HHHH		HHHH	DDDDDDDDDDDD		**
//*		SSSSSSSSSSSS	CSAA Numbered							MMMMM		   MMMMM	HHHH		HHHH	DDDDDDDDDDDDD		**
//*		SSSS				A PROGRAM BY:						MMMMMM		  MMMMMM	HHHH		HHHH	DDDD	 DDDDD		**
//*		SSSS													MMMMMMM		 MMMMMMM	HHHH		HHHH	DDDD	   DDDD		**
//*		SSSSSSSSSSSS	AAAAAAAAAAAA	MMMMMMMMMMMMMMMMMMMM	MMMMMMMM	MMMMMMMM	HHHHHHHHHHHHHHHH	DDDD	    DDD		**
//*		SSSSSSSSSSSS	AAAAAAAAAAAA	MMMMMMMMMMMMMMMMMMMM	MMMM MMMM  MMMM MMMM	HHHHHHHHHHHHHHHH	DDDD	    DDD		**
//*				SSSS	AAAA	AAAA	MMMM	MMMM	MMMM	MMMM  MMMMMMMM	MMMM	HHHH		HHHH	DDDD	   DDDD		**
//*				SSSS	AAAA	AAAA	MMMM	MMMM	MMMM	MMMM   MMMMMM	MMMM	HHHH		HHHH	DDDD	  DDDD		**
//*		SSSSSSSSSSSS	AAAAAAAAAAAAA	MMMM	MMMM	MMMM	MMMM    MMMM	MMMM	HHHH		HHHH	DDDDDDDDDDDDD		**
//*		SSSSSSSSSSSS	AAAAAAAAAAAAAA	MMMM	MMMM	MMMM	MMMM			MMMM	HHHH		HHHH	DDDDDDDDDDDD		**
//*																																**
//********************************************************************************************************************************
//||											||
//||	CSAA AA###B ddmmYYYY					||
//||	?? SMP(SAM-MHD-PGM) @ AEH_COT96			||
//||	Program Name:							||
//||			AA###B_<xxxxNAMExxxx>			||
//||											||
/////******************************************\\

#include <iostream>
#include <vector>

using namespace std;
const int maxn = 1e4+3;
const int oo   = 3e7+3;

typedef pair <int, int> pii;
vector <pii> G[maxn];
vector <pii> ans;
bool used[maxn]; // Already in MST
long long pim [maxn]; // Partner in MST
long long mdti[maxn]; // Min_dis to MST :: Minimal Distance to Include
long long n, m;
long long ansvalue;

bool MST(){
	
	fill_n(mdti, n, oo); 
	fill_n(pim, n, -1);  
	fill_n(used, n, false); 
	
	mdti[0] = 0;
	
	for (int i = 0; i < n; i++) {
		
		int v = -1;
		
		for (int j=0; j<n; j++)
			if ( !used[j] && (v == -1 || mdti[j] < mdti[v]))
				v = j;
 
//		if (mdti[v] == oo) 
//			return false;
 
		used[v] = true;
		
		if (pim[v] != -1){
			ans.push_back ( make_pair( pim[v], v ) );
			ansvalue += mdti[v];
		} 
 
		for (int j = 0; j < G[v].size(); j++) 
			if ( G[v][j].second < mdti[ G[v][j].first ] ) {
				mdti[ G[v][j].first ] = G[v][j].second;
				pim [ G[v][j].first ] = v;
			}
	}
	return true;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b, w;
		cin >> a >> b >> w;
		G [a].push_back( make_pair( b, w) );
		G [b].push_back( make_pair( a, w) ); 
	}
	
//	if (MST())
//		for (pii e : ans)
//			cout << e.first << " " << e.second << endl;
//	else cout << -1;
	if (MST())
		cout << ansvalue << endl;
	
}
/**/

// ?? SMP(SAM-MHD-PGM) @ AEH_COT96
//   SamMHD (Saman Mahdanian)