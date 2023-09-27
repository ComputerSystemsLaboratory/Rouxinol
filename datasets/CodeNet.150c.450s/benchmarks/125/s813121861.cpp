#include<iostream>
int main(){

  int n,a;
  std::cin>>n;

  int Adj[100][100],adj[100][100]={0},find[100][2],back[100][100],depth[100]={0},endflag[100]={0},flag;
	int u[n],k[n],kcou=0,timenow=0,v,pred,prev,firstv,backcount[100]={0},flag1=0;
  for(int i=0;i<n;i++){
    std::cin>>u[i];
    std::cin>>k[i];
    for(int j=0;j<k[i];j++){
      std::cin>>Adj[i][j];
    }
  }
	
	/*
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    	std::cout<<Adj[i][j]<<" ";
    }
  	std::cout<<"\n";
  }*/
	
	v=0;
	firstv=0;
	while(timenow<n*2){
		flag=0;
		if(find[firstv][0]!=NULL&&find[firstv][1]!=NULL){
			for(int i=0;i<n;i++){
				if(find[i][0]==NULL){
					//std::cout<<i<<"\n";
					firstv=i;
					v=i;
					break;
				}
			}
		}
		
		// std::cout<<"v="<<v+1<<" ";
		//std::cout<<find[v][0]<<" "<<find[v][1];
		// std::cout<<" endflag="<<endflag[v]<<" ";
		if(find[v][0]==NULL){
			timenow++;
			find[v][0]=timenow;
			// std::cout<<v+1<<"[0]= '"<<timenow<<"' ";
			flag=1;
			//std::cout<<flag<<" 1";
		}else if(find[v][1]==NULL){
			if(endflag[v]==1){
				if(backcount[v]<=1){
				timenow++;
				find[v][1]=timenow;
				// std::cout<<v+1<<"[1]= '"<<timenow<<"' ";
				}
				flag=2;
			}
			//std::cout<<flag;
		}else{
			backcount[v]--;
			v=back[v][backcount[v]];
			//backcount[v]--;
			flag=3;
			//std::cout<<flag<<" 0";
		}

		if(flag==0){
				pred=depth[v];
				depth[v]++;
				prev=v;
				v=Adj[v][pred]-1;
				back[v][backcount[v]]=prev;
				backcount[v]++;
				//std::cout<<flag<<"\n";
		}else if(flag==1){
			if(endflag[v]==0){
				if(Adj[v][depth[v]]-1!=v){
					while(find[Adj[v][depth[v]]-1][0]!=NULL && k[v]-1!=depth[v]){
						depth[v]++;
					}
					if(find[Adj[v][depth[v]]-1][0]==NULL){
						pred=depth[v];
						depth[v]++;
						prev=v;
						v=Adj[v][pred]-1;
						back[v][backcount[v]]=prev;
						backcount[v]++;
					}else{
						depth[v]++;
					}
				}else{
					pred=depth[v];
					depth[v]++;
				}
			}
		}else if(flag==2){
			backcount[v]--;
			v=back[v][backcount[v]];
			//backcount[v]--;
			//std::cout<<flag<<"\n";
		}
		if(depth[v]>k[v]-1){
			endflag[v]=1;
		}
		// std::cout<<"flag="<<flag<<"\n";
	}
	
	
	
	
  for(int i=0;i<n;i++){
     std::cout<<i+1<<" "<<find[i][0]<<" ";
     std::cout<<find[i][1]<<"\n";
    //std::cout<<"\n";
  }

  return 0;
}

