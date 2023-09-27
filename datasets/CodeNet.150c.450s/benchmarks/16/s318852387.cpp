#include<stdio.h>
 #include<vector>
 #include<string.h>

 const int LIMIT=20001;
 const int out=-1;
 const int in=1;
 char str[LIMIT];
 int inOut[LIMIT]={0};


 void setInOut(int sp,int dx){
       int len =strlen(str);
       char c;
       bool isIn=false;
       int outHight,nowHight=0,sum,inP;
      
       std::vector<int> anss;

       for(int i=sp;i>=0&&i<len;i+=dx){
             c=str[i];
             //printf("(%c %d)",c,nowHight);
             if(isIn==true){
                   if(c=='\\'){
                         sum+=outHight-nowHight+1;
                         nowHight--;
                   }else if(c=='/'){
                         nowHight++;
                         sum+=outHight-nowHight;
                   }else if(c=='_'){
                         sum+=outHight-nowHight;
                   }
                   if(nowHight==outHight){
                         //printf("%d ",sum);
                         if(dx==1){
                               inOut[inP]=std::max(sum,inOut[inP]);
                         }else{
                               inOut[i]=std::max(sum,inOut[i]);
                         }
                         isIn=false;
                   }
             }else{
                   if(c=='\\'){
                         //printf("\n<in>");
                         inP=i;
                         isIn=true;
                         sum=1;
                         outHight=nowHight;
                         nowHight--;
                   }else if(c=='/'){
                         nowHight++;
                   }
             }
       }
 }
 void changeSTR(int len){
       for(int i=0;i<len;i++){
             if(str[i]=='\\')str[i]='/';
             else if(str[i]=='/')str[i]='\\';
       }
 }

 int main(){
       scanf("%s",str);
       int len=strlen(str);
       setInOut(0,1);
       changeSTR(len);
       //printf("\n\n");
       setInOut(len-1,-1);
       std::vector<int> anss;
       int all=0;
       for(int i=0;i<len;i++){
             if(inOut[i]>0)anss.push_back(inOut[i]);
             all+=inOut[i];
       }
       printf("%d\n%d",all,anss.size());
       for(int i=0;i<anss.size();i++){
             printf(" %d",anss[i]);
       }
       printf("\n");
 } 