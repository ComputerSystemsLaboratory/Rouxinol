#include<stdio.h>
 
int main(){
    int n, m, s, i;
    int taro[1000];
    int hana[1000];
    int t_score, h_score, x;
    int t_card, h_card;
 
    while(1){
        // テ」ツつォテ」ツδシテ」ツδ嘉ヲツ楪堙ヲツ閉ーテ」ツ?ョテ・ツ?・テ・ツ環?
        scanf("%d %d", &n, &m);
        if(n==0 && m==0)break;
 
        // テ・ツ青暗ィツィツ暗ァツつケテヲツ閉ーテ」ツ?ィテヲツ個?」ツ?。テ」ツつォテ」ツδシテ」ツδ嘉」ツ?ョテ・ツ按敕ヲツ慊淌・ツ個?
        t_score=0;
        h_score=0;
        for(i=0;i<1000;i++){
            taro[i]=0;
            hana[i]=0;
        }
        // テ・ツ?・テ・ツ環崚」ツ?凝」ツつ嘉」ツ??ヲツ個?」ツ?。テ」ツつォテ」ツδシテ」ツδ嘉」ツ?ィテァツつケテヲツ閉ーテ」ツ?ョテ・ツ青暗ィツィツ暗」ツつ津ヲツアツづ」ツつ?」ツつ?
        for(i=0;i<n;i++){
            scanf("%d", &s);
            taro[s]=1;
            t_score+=s;
        }
        for(i=0;i<m;i++){
            scanf("%d", &s);
            hana[s]=1;
            h_score+=s;
        }
 
        // テァツつケテヲツ閉ーテ」ツ?ョテ・ツキツョ(テ」ツ?ョテ・ツ債甘・ツ按?テ」ツつ津ヲツアツづ」ツつ?」ツ?ヲテ」ツ?甘」ツ??
        x = (h_score - t_score) / 2;
        // テ、ツコツ、テヲツ渉崚・ツ?凖ィツ」ツ愿」ツ?ョテ」ツつォテ」ツδシテ」ツδ嘉」ツ?古ィツヲツ凝」ツ?、テ」ツ?凝」ツつ嘉」ツ?ェテ」ツ?凝」ツ?」テ」ツ?淌・ツ?エテ・ツ青暗」ツ?ッ -1
        t_card=-1;
        h_card=-1;
 
        // テ、ツコツ、テヲツ渉崚・ツ?凖ィツ」ツ愿」ツ?ョテ」ツつォテ」ツδシテ」ツδ嘉」ツつ津ヲツ篠「テ」ツ??0 ~ 100 テ」ツ?セテ」ツ?ァテ」ツ?ョテゥツ鳴?
        for(i=0;i<=100;i++){
            // テァツつケテヲツ閉ーテ」ツ?ョテ・ツキツョテ」ツつ津・ツ按ゥテァツ板ィテ」ツ?療」ツ?ヲテ」ツ??、ツコツ、テヲツ渉崚・ツ?凖ィツ」ツ愿」ツ?ョテ」ツつォテ」ツδシテ」ツδ嘉」ツ?ァテ」ツ?づ」ツつ凝」ツ?凝」ツ?ゥテ」ツ??」ツ?凝」ツつ津・ツ按、テヲツ鳴ュ
            if(0<=i+x && taro[i]==1 && hana[i+x]==1){
                // テヲツ敖。テ、ツサツカテ」ツ?ォテ・ツ青暗」ツ??・ツ?凖ィツ」ツ愿」ツつ津ィツィツュテ・ツョツ堙」ツ?療」ツ?ヲテ」ツ??」ツδォテ」ツδシテ」ツδ療」ツつ津ヲツ環愿」ツ?妥」ツつ凝」ツ??
                t_card=i;
                h_card=i+x;
                break;
            }
        }
        // テァツつケテヲツ閉ーテ」ツ?ョテ・ツキツョテ」ツ?古・ツ・ツ?ヲツ閉ーテ」ツ?ァテ」ツ?づ」ツつ凝」ツ?凝」ツ??テ、ツコツ、テヲツ渉崚・ツ?凖ィツ」ツ愿」ツ?ョテ」ツつォテ」ツδシテ」ツδ嘉」ツ?古ィツヲツ凝」ツ?、テ」ツ?凝」ツつ嘉」ツ?ェテ」ツ?凝」ツ?」テ」ツ?淌・ツ?エテ・ツ青暗」ツ?ッテ」ツ??-1 テ」ツ?ィテ・ツ?コテ・ツ環?
        if((h_score - t_score) % 2!=0 || t_card==-1){
            printf("-1\n");
        // テ、ツコツ、テヲツ渉崚・ツ?凖ィツ」ツ愿」ツ?ョテ」ツつォテ」ツδシテ」ツδ嘉」ツ?古」ツ?づ」ツつ凝・ツ?エテ・ツ青暗」ツ?ッテ」ツ??」ツ?敕」ツつ古」ツつ津・ツ?コテ・ツ環?
        }else{
            printf("%d %d\n", t_card, h_card);
        }
 
    }
    return 0;
}