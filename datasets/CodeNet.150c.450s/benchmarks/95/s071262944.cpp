# include <stdio.h>

int main(){

  int n,i,ans=0,r=0,l=0;
  char s[3];

  for(;;){
  scanf("%d",&n);
  if(n==0){
    break;
  }

  for(i=1;i<=n;i++){

    scanf("%s",s);

    if(s[0]=='l'&&s[1]=='u'){
      l=1;
    }

    if(s[0]=='l'&&s[1]=='d'){
      l=0;
    }

    if(s[0]=='r'&&s[1]=='u'){
      r=1;
    }

    if(s[0]=='r'&&s[1]=='d'){
      r=0;
    }

    if(ans%2==0&&r==1&&l==1){
      ans++;
    }

    if(ans%2!=0&&r==0&&l==0){
      ans++;
    }
  }

  printf("%d\n",ans);
  ans=0;
  r=0;
  l=0;

  }
  return 0;
}