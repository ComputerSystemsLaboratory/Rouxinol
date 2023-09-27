#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <queue>
using namespace std;
string S[1001];
long result=0;
int H,W,N;
long minmytime[1000][1000];
queue<int> qx,qy,mytime;
int sx,sy,gx,gy;
int step = 0;

int main(){
	scanf("%d%d%d",&H,&W,&N);

	for(int i=0;i<H;i++){
		cin>>S[i];
		for(int j=0;j<W;j++){
			minmytime[i][j]=1000000;
			if(S[i][j]=='S'){
				sx=j;
				sy=i;
				qx.push(j);
				qy.push(i);
				mytime.push(0);
			}

			if(S[i][j]-'0'==N){
				gx=j;
				gy=i;
			}

		}
	}



for(int acc=0;acc<N;acc++){
	step++;
	while(step<=N){
		
		if(qx.front()>0){
		if(mytime.front()<minmytime[qy.front()][qx.front()-1]-1  && S[qy.front()][qx.front()-1] !='X'){
			if(S[qy.front()][qx.front()-1]-'0' ==step){
			result += mytime.front()+1;
			sx=qx.front()-1;
			sy=qy.front();
			while(qx.empty()== false){
				qx.pop();
				qy.pop();
				mytime.pop();
			}
			
			qx.push(sx);
			qy.push(sy);
			mytime.push(0);
			break;
		}
				qx.push(qx.front()-1);
				qy.push(qy.front());
				mytime.push(mytime.front()+1);
				minmytime[qy.front()][qx.front()-1]=mytime.front()+1;
		}

	}
		//

	if( qx.front()<W-1 ){
		if(mytime.front()<minmytime[qy.front()][qx.front()+1]-1 && S[qy.front()][qx.front()+1] !='X'){

		if(S[qy.front()][qx.front()+1]-'0' ==step){
			result += mytime.front()+1;
			sx=qx.front()+1;
			sy=qy.front();
			while(qx.empty()== false){
				qx.pop();
				qy.pop();
				mytime.pop();
			}
			
			qx.push(sx);
			qy.push(sy);
			mytime.push(0);
			break;
		}

				qx.push(qx.front()+1);
				qy.push(qy.front());
				mytime.push(mytime.front()+1);
				minmytime[qy.front()][qx.front()+1]=mytime.front()+1;
		}
	}

		//

	if( qy.front()>0){
		if(mytime.front()<minmytime[qy.front()-1][qx.front()]-1  && S[qy.front()-1][qx.front()] !='X'){

			if(S[qy.front()-1][qx.front()]-'0' ==step){
			result += mytime.front()+1;
			sx=qx.front();
			sy=qy.front()-1;
			while(qx.empty()== false){
				qx.pop();
				qy.pop();
				mytime.pop();
			}
			
			qx.push(sx);
			qy.push(sy);
			mytime.push(0);
			break;
		}

				qx.push(qx.front());
				qy.push(qy.front()-1);
				mytime.push(mytime.front()+1);
				minmytime[qy.front()-1][qx.front()]=mytime.front()+1;
		}
	}

		//

	if(qy.front()<H-1){
		if(mytime.front()<minmytime[qy.front()+1][qx.front()]-1  && S[qy.front()+1][qx.front()] !='X'){

				if(S[qy.front()+1][qx.front()]-'0' ==step){
			result += mytime.front()+1;
			sx=qx.front();
			sy=qy.front()+1;
			while(qx.empty()== false){
				qx.pop();
				qy.pop();
				mytime.pop();
			}
			
			qx.push(sx);
			qy.push(sy);
			mytime.push(0);
			break;
		}

				qx.push(qx.front());
				qy.push(qy.front()+1);
				mytime.push(mytime.front()+1);
				minmytime[qy.front()+1][qx.front()]=mytime.front()+1;
		}
	}


		qx.pop();
		qy.pop();
		mytime.pop();
	



	}

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			minmytime[i][j]=1000000;
		}
	}

}

printf("%d\n",result);
return 0;

}