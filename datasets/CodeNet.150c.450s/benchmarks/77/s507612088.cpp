#include<iostream>
#include<cstdio>

#define REP(i,b,c) for(int i=b;i<(int)c;i++)
#define rep(i,c) REP(i,0,c)

using namespace std;

int main(){
  char move1[1000];
  int i,j,k,n,m,jewel[1000][1000],move2[1000],count;
  int mapQ[50][50],startx,starty;


  for(i=0;i<=20;i++){
    for(j=0;j<=20;j++)mapQ[i][j]=0;
  }

  while(1){
for(i=0;i<=20;i++){
    for(j=0;j<=20;j++)mapQ[i][j]=0;
  }


    count = 0;
    cin >> n;
    if(n == 0)break;

    rep(i,n){
      cin >> jewel[i][0] >> jewel[i][1];
      mapQ[20-jewel[i][1]][jewel[i][0]]=1; //ツ陛ウツ静篠づ個暗環置ツづーツマツッツプツ湘」ツづ可篠ヲツつキツ（ツ１ツづ可渉可甘コツ可サツ）
	
	}

  

    cin >> m;

    rep(i,m)cin >> move1[i] >> move2[i];

    startx=10;
    starty=10;
    mapQ[starty][startx]=2; //ツスツタツーツトツ地ツ点ツづー2ツづ可渉可甘コツ可サ

    rep(i,m){
      for(j=1;j<=move2[i];j++){
	if(move1[i] == 'N'){
	  mapQ[--starty][startx];
	  if(mapQ[starty][startx] == 1)count++;
	    mapQ[starty][startx]=0;
	}
	else if(move1[i] == 'E'){
	  mapQ[starty][++startx];
	  if(mapQ[starty][startx] == 1)count++;
	  	 mapQ[starty][startx]=0;
	}
	else if(move1[i] == 'S'){
	  mapQ[++starty][startx];
	  if(mapQ[starty][startx] == 1)count++;
	   mapQ[starty][startx]=0;
	}
	else if(move1[i] == 'W'){
	  mapQ[starty][--startx];
	  if(mapQ[starty][startx] == 1)count++;
	  mapQ[starty][startx]=0;
	}

      }
    }
    //    rep(i,21){
    //   rep(j,21)cout << mapQ[i][j] << " - " ;
    //   cout << endl; 
    //   }
    //   cout << "count =" << count <<  " n =" << n << endl;    

    
    count == n ? cout << "Yes" << endl : cout << "No" << endl ; 
    
    
  }
  
  
 return 0;
 
}

 