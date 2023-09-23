//#include<cstdio>
//using namespace std;
//int a[101]={},b[101]={},c[101]={},d,e,f,g,h,k[1000]={},aa[1000]={},bb[1000]={},cc[1000]={},l,p,i,n,j,m,x,y,z;
//int main(){
//	while(1){
//	for(i=1;i<=100;i++){
//		a[i]=2;
//		b[i]=2;
//		c[i]=2;
//	}
//	scanf("%d%d%d",&d,&e,&f);
//	if(d==0) break;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d%d%d%d",&aa[i],&bb[i],&cc[i],&k[i]);
//		if(k[i]==1) {
//			a[aa[i]]=1;
//			b[bb[i]-d]=1;
//			c[cc[i]-e-d]=1;
//		}
//	}
//	
//	for(x=0;x<n;x++){
//		if(k[x]==0){
//             if(a[aa[x]]==1 && b[bb[x]-d]==1){
//		c[cc[x]-e-d]=0;
//	}
//	if(a[aa[x]]==1 && c[cc[x]-e-d]==1){
//		b[bb[x]-d]=0; 
//	}
//	if(b[bb[x]-d]==1 && c[cc[x]-e-d]==1){
//		a[aa[x]]=0; 
//	}
//		}}
//	for(i=1;i<=d;i++){
//		printf("%d\n",a[i]);
//	}
//	for(i=1;i<=e;i++){
//		printf("%d\n",b[i]);
//	}
//	for(i=1;i<=f;i++){
//		printf("%d\n",c[i]);
//	}}
//	return 0;
//}
//#include <cstdio>
//using namespace std;
//double max=0,min=10000,a;
//int main(){
//	while(scanf("%lf",&a)!=EOF){
//		if(max<a){
//			max=a;
//		}
//		if(min>a){
//			min=a;
//		}
//	}
//	printf("%f\n",max-min);
//	return 0;
//}
/*#include <stdio.h>
  int main(){
	  int x[12000]={},min,i,j,n,leng,h=0;
	  scanf("%d",&n);
	  leng=n;
	  for(i=0;i<n;i++){
		  scanf("%d",&x[1000+i]);
	  }
	  for(i=1000;i<997+n;i++){
		  if(x[i]==x[1+i]){
			  if(x[i+1]==x[i+2]){
				  if(x[i-1]!=0){
					  x[i-1]=x[i];
					  if(x[i-2]==x[i-1]){
						  if(x[i-3]==x[i-2]){
							  if(x[i-4]==x[i-3]){
							  for(j=i+3;j<999+n;j++){
								  x[j-7]=x[j];
								  leng-=7;
							  }
						  while(x[i-5]==x[i-4] && x[i-4]==x[i-3]){
								  if(x[i-6]==x[i-5]){
									  if(x[i-7]==x[i-6]){
									  if(x[i-2]==x[i-3]){
										  for(j=i;j<999+n;j++){
											  x[j-6]=x[j];
											  leng-=6; h=1;
										  }}else{
											  for(j=i-1;j<999+n;j++){
											  x[j-5]=x[j];
											  leng-=5; h=1;
											  }}}else{
												  for(j=i-1;j<999+n;j++){
											  x[j-4]=x[j]; h=1;
											  leng-=4;}}}
							  if(h=0){goto ry;}}
ry:}else{					  for(j=i+3;j<999+n;j++){
								  x[j-6]=x[j];
								  leng-=6;
							  }
						  while(x[i-4]==x[i-3] && x[i-3]==x[i-2]){
							  if(x[i-5]==x[i-4]){
								  if(x[i-6]==x[i-5]){
									  if(x[i-2]==x[i-1]){
										  for(j=i;j<999+n;j++){
											  x[j-6]=x[j];
											  leng-=6; h=1;
										  }}else{
											  for(j=i-1;j<999+n;j++){
											  x[j-5]=x[j];
											  leng-=5; h=1;
											  }}}else{
												  for(j=i-1;j<999+n;j++){
											  x[j-4]=x[j]; h=1;
											  leng-=4;}}}
							  if(h=0){goto ry;}}
								  for(j=i+3;j<999+n;j++){
								  x[j-5]=x[j];
								  }}}
					  else{
						  for(j=i+3;j<999+n;j++){
								  x[j-4]=x[j];
						  }}
					*/  
//#include <stdio.h>
//  int main(){
//	  double x[25],m;
//	  int i,n,j,y[25]={},z[8]={},h[6]={},t[6]={};
//	  for(i=0;i<24;i++){
//           scanf("%d %lf",&n,&m);
//		   x[n]=m;
//	  }
//	  for(i=1;i<=8;i++){
//		  for(j=1;j<=8;j++){
//				  if(x[i]<x[j]){
//					  y[i]++;
//				  }}}
//	   for(i=9;i<=16;i++){
//		  for(j=9;j<=16;j++){
//				  if(x[i]<x[j]){
//					  y[i]++;
//				  }}}
//	    for(i=17;i<=24;i++){
//		  for(j=17;j<=24;j++){
//				  if(x[i]<x[j]){
//					  y[i]++;
//				  }}}
//		for(i=1;i<=8;i++){
//			if(y[i]==0)z[0]=i;
//			if(y[i]==1)z[1]=i;
//			if(y[i]==2)h[0]=i;
//			if(y[i]==3)h[1]=i;
//		}
//		for(i=9;i<=16;i++){
//			if(y[i]==0)z[2]=i;
//			if(y[i]==1)z[3]=i;
//			if(y[i]==2)h[2]=i;
//			if(y[i]==3)h[3]=i;
//		}
//		for(i=17;i<=24;i++){
//			if(y[i]==0)z[4]=i;
//			if(y[i]==1)z[5]=i;
//			if(y[i]==2)h[4]=i;
//			if(y[i]==3)h[5]=i;
//		}
//		for(i=0;i<=5;i++){
//			for(j=0;j<=5;j++){
//					if(x[h[i]]<x[h[j]]){
//						t[i]++;
//					}}}
//		for(i=0;i<6;i++){
//			if(t[i]==0)z[6]=h[i];
//			if(t[i]==1)z[7]=h[i];
//		}
//		for(i=0;i<8;i++){
//			printf("%d %lf\n",z[i],x[z[i]]);
//		}
//		return 0;
//  }
  /*#include <stdio.h>
  int main(){
	   int a,b;
	  scanf("%d%d",&a,&b);
while(1){
int i,sum=0;
for(i=a;i<=b;i++){
if(i%400==0){
printf("%d\n",i); sum++;
}else if(i%100==0){
continue;
}else if(i%4==0){
printf("%d\n",i);sum++;
}}
if(sum==0) printf("NA\n");
sum=0;
scanf("%d%d",&a,&b);
if(a==0 && b==0) break;
printf("\n");
}
return 0;
}*/
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int dp[1001][1001][2]={},n,m,x,y,rvp[1001][2]={},i,j,minn;
//int yy[1001][1001][2]={};
//char w[1001][1001];
//int main(){
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(i=1;i<=n;i++){
//			scanf("%s",&w[i]);
//			for(j=m-1;j>=0;j--){
//			w[i][j+1]=w[i][j];
//		}}
//	for(i=1;i<=m;i++){
//		for(j=1;j<=n;j++){
//			if(w[j][i]=='#'){
//				rvp[i][0]++;
//			}else if(w[j][i]=='.'){
//				rvp[i][1]++;
//			}}}
//	for(i=1;i<=x;i++){
//		for(j=1;j<=i;j++){
//		dp[i][i][0]+=rvp[j][0];
//		}
//		for(j=1;j<=i;j++){
//		dp[i][i][1]+=rvp[j][1];
//		}}
//	for(i=1;i<m;i++){
//		for(j=1;j<=min(m,y)&&i>=j;j++){
//			if(j<x){
//				if(yy[i+1][j+1][0]!=0){
//				dp[i+1][j+1][0]=min(dp[i][j][0]+rvp[i+1][0],dp[i+1][j+1][0]);
//				}else{
//					dp[i+1][j+1][0]=dp[i][j][0]+rvp[i+1][0];
//					yy[i+1][j+1][0]++;
//				}
//				if(yy[i+1][j+1][1]!=0){
//				dp[i+1][j+1][1]=min(dp[i][j][1]+rvp[i+1][1],dp[i+1][j+1][1]);
//				}else{
//					dp[i+1][j+1][1]=dp[i][j][1]+rvp[i+1][1];
//					yy[i+1][j+1][1]++;
//				}
//			}
//			if(j>=x && j<min(m,y)){
//				if(yy[i+1][j+1][0]!=0){
//				dp[i+1][j+1][0]=min(dp[i+1][j+1][0],dp[i][j][0]+rvp[i+1][0]);
//				}else{
//					dp[i+1][j+1][0]=dp[i][j][0]+rvp[i+1][0];
//					yy[i+1][j+1][0]++;
//				}
//				if(yy[i+1][1][1]!=0){
//					dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][j][0]+rvp[i+1][1]);}
//				else{
//					dp[i+1][1][1]=dp[i][j][0]+rvp[i+1][1];
//					yy[i+1][1][1]++;
//				}
//				if(yy[i+1][j+1][1]!=0){
//					dp[i+1][j+1][1]=min(dp[i][j][1]+rvp[i+1][1],dp[i+1][j+1][1]);}
//				else{
//					dp[i+1][j+1][1]=dp[i][j][1]+rvp[i+1][1];
//					yy[i+1][j+1][1]++;
//				}
//				if(yy[i+1][1][0]!=0){
//					dp[i+1][1][0]=min(dp[i+1][1][0],dp[i][j][1]+rvp[i+1][0]);}
//				else{
//					dp[i+1][1][0]=dp[i][j][1]+rvp[i+1][0];
//					yy[i+1][1][0]++;
//				}}
//			if(j==y){
//				if(yy[i+1][1][1]!=0){
//					dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][j][0]+rvp[i+1][1]);}
//				else{
//					dp[i+1][1][1]=dp[i][j][0]+rvp[i+1][1];
//					yy[i+1][1][1]++;
//				}
//				if(yy[i+1][1][0]!=0){
//					dp[i+1][1][0]=min(dp[i+1][1][0],dp[i][j][1]+rvp[i+1][0]);}
//				else{
//					dp[i+1][1][0]=dp[i][j][1]+rvp[i+1][0];
//					yy[i+1][1][0]++;
//				}
//			}
//		}
//	}minn=dp[m][x][0];
//	for(i=x;i<=min(m,y);i++){
//		for(j=0;j<2;j++){
//			if(minn>dp[m][i][j]) minn=dp[m][i][j];
//		}}
//	printf("%d\n",minn);
//	return 0;
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int dp[1001][1001][2]={},n,m,x,y,rvp[1001][2]={},i,j,minn;
//int yy[1001][1001][2]={};
//char w[1001][1001];
//int func(int w,int v,int u){
//	int sum=0,i,miy=100000000;
//	if(w==v){
//		for(i=1;i<=w;i++){
//			sum+=rvp[i][u];
//		}return sum;
//		sum=0;}
//	for(i=x;i<=min(w,y);i++){
//		if(miy>func(w-i,i
//int main(){
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(i=1;i<=n;i++){
//			scanf("%s",&w[i]);
//			for(j=m-1;j>=0;j--){
//			w[i][j+1]=w[i][j];
//		}}
//	for(i=1;i<=m;i++){
//		for(j=1;j<=n;j++){
//			if(w[j][i]=='#'){
//				rvp[i][0]++;
//			}else if(w[j][i]=='.'){
//				rvp[i][1]++;
//			}}}
#include<cstdio>
//#include<algorithm>
//using namespace std;
//int q[1000];
//int dp[1001][1001][2];
//int main(){
//	/*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
//	int n,m,x,y;
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			char zan;
//			scanf(" %c",&zan);
//			if(zan=='#'){
//				q[j]++;}
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=1;j<=min(y,i+1)&&i+1>=j;j++){
//			dp[i+1][j][0]=dp[i][j-1][0]+n-q[i];
//			dp[i+1][j][1]=dp[i][j-1][1]+q[i];
//		}
//		dp[i+1][0][0]=100000000;
//		dp[i+1][0][1]=100000000;
//		for(int j=x;j<=min(y,i+1);j++){
//			dp[i+1][0][0]=min(dp[i+1][0][0],dp[i+1][j][1]);
//			dp[i+1][0][1]=min(dp[i+1][0][1],dp[i+1][j][0]);
//		}
//	}
//	int sum=100000000;
//	for(int i=x;i<=min(y,m);i++){
//		sum=min(sum,dp[m][i][0]);
//		sum=min(sum,dp[m][i][1]);
//	}
//	printf("%d\n",sum);
//}
//#include<cstdio>
//using namespace std;
///*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
//  int main(){
//	  int x[102][102]={};
//	  int y[102][102]={};
//	  int w,h,i,j,sum=0;
//	  scanf("%d %d",&w,&h);
//	  for(i=1;i<=h;i++){
//		  for(j=1;j<=w;j++){
//			  scanf("%d",&x[j][i]);
//		  }}
//	  for(i=0;i<=h+1;i++){
//		  y[0][i]=1;
//		  y[w+1][i]=1;
//	  }
//	   for(i=0;i<=w+1;i++){
//		  y[i][0]=1;
//		  y[i][h+1]=1;
//	  }
//	   for(int q=0;q<10000;q++){
//	  for(i=1;i<=w;i++){
//		  for(j=1;j<=h;j++){
//			  if(x[i][j]==0){
//			  if(j%2==0){
//				  if(y[i-1][j-1]==1){y[i][j]=1;}
//				  if(y[i][j-1]==1){y[i][j]=1;}
//				  if(y[i+1][j]==1){y[i][j]=1;}
//				  if(y[i][j+1]==1){y[i][j]=1;}
//				  if(y[i-1][j+1]==1){y[i][j]=1;}
//				  if(y[i-1][j]==1){y[i][j]=1;}
//			  }else{
//				  if(y[i+1][j]==1){y[i][j]=1;}
//				  if(y[i+1][j+1]==1){y[i][j]=1;}
//				  if(y[i+1][j-1]==1){y[i][j]=1;}
//				  if(y[i][j-1]==1){y[i][j]=1;}
//				  if(y[i][j+1]==1){y[i][j]=1;}
//				  if(y[i-1][j]==1){y[i][j]=1;}
//			  }}
//		  }}}
//	  for(i=0;i<=w+1;i++){
//		  for(j=0;j<=h+1;j++){
//			  if(y[i][j]==0){
//			  if(j%2==0){
//				  if(y[i-1][j-1]==1){sum++;}
//				  if(y[i][j-1]==1){sum++;}
//				  if(y[i+1][j]==1){sum++;}
//				  if(y[i][j+1]==1){sum++;}
//				  if(y[i-1][j+1]==1){sum++;}
//				  if(y[i-1][j]==1){sum++;}
//			  }else{
//				  if(y[i+1][j]==1){sum++;}
//				  if(y[i+1][j+1]==1){sum++;}
//				  if(y[i+1][j-1]==1){sum++;}
//				  if(y[i][j-1]==1){sum++;}
//				  if(y[i][j+1]==1){sum++;}
//				  if(y[i-1][j]==1){sum++;}
//			  }
//			  }}}
//	  printf("%d\n",sum);
//	  return 0;
//  }
//#include<cstdio>
//using namespace std;
///*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
//this is 4-point program.
//  int main(){
//    long long int a,b,m,i,j,sum=0;
//	int x[500],leng=0,num=0;
//	scanf("%lld%lld%lld",&a,&b,&m);
//	for(i=a;i<=b;i++){
//		int s=i;
//		if(i%m==0){
//			while(i!=0){
//				x[leng]=i%10;
//				i/=10;
//				leng++;
//			}
//			if(leng==1){
//				sum++;
//				i=s;leng=0;
//				continue;
//			}
//			if(leng==2 && x[0]!=x[1]){
//				sum++;i=s; leng=0;continue;
//			}
//			if(x[0]<x[1]){
//			for(j=2;j<leng;j++){
//				if(j%2==0){
//					if(x[j-1]<=x[j]){
//						num=1;
//						break;
//					}}
//				else{
//					if(x[j-1]>=x[j]){
//						num=1;
//						break;
//					}}}
//			if(num==0){
//				sum++;
//			}num=0;
//			}
//			if(x[0]>x[1]){
//			for(j=2;j<leng;j++){
//				if(j%2==0){
//					if(x[j-1]>=x[j]){
//						num=1;
//						break;
//					}}
//				else{
//					if(x[j-1]<=x[j]){
//						num=1;
//						break;
//					}}}
//			if(num==0){
//				sum++;
//			}num=0;
//			}leng=0;
//		} i=s;}
//	sum%=10000;
//	printf("%lld\n",sum);
//	return 0;
//  }
#include <stdio.h>
  int main(){
	  while(1){
	  int a,b,n,m,i,j,g,h,y[17][17]={};
	  long long int x[17][17]={};
	  scanf("%d%d%d",&a,&b,&n);
	  if(a==0) break;
	  for(i=0;i<n;i++){
		  scanf("%d %d",&g,&h);
		y[g][h]=1;
	  }
	  for(i=1;i<=a;i++){
		  if(y[i][1]==0){
			  x[i][1]=1;}
		  else{
			  break;
		  }
	  }
	  for(i=1;i<=b;i++){
		  if(y[1][i]==0){
			  x[1][i]=1;}
		  else{
			  break;
		  }
	  }
	  for(i=2;i<=a;i++){
		  for(j=2;j<=b;j++){
			  if(y[i][j]==0){
			  if(y[i][j-1]==0){
				  if(y[i-1][j]==0){
					  x[i][j]=x[i-1][j]+x[i][j-1];
				  }else{
					  x[i][j]=x[i][j-1];
				  }}
			  else{
				  if(y[i-1][j]==0){
					  x[i][j]=x[i-1][j];
				  }else{
					  x[i][j]=0;
				  }}
			  }}}
	  printf("%lld\n",x[a][b]);
	  }
	  return 0;
  }