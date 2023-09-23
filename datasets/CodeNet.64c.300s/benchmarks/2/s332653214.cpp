#include<stdio.h>
struct gra_m {
    int m,f,r;
};
struct kakoi {
    struct gra_m root[100];
};

int main() {
    int i=0,a,total,nm,nf,nr;
    char rank;
    struct kakoi m;
    struct kakoi f;
    struct kakoi r;
    while(1) {
        scanf("%d %d %d",&nm,&nf,&nr);
        m.root[i].m = nm;
        m.root[i].f = nf;
        m.root[i].r = nr;
        if(nm==-1 && nf==-1 && nr==-1) break;
        i++;
    }
    for(a=0;a<i;a++) {
        total = m.root[a].m + m.root[a].f;
        if(m.root[a].m ==-1 || m.root[a].f == -1) rank = 'F';
        else if(total >= 80) rank = 'A';
        else if(total >= 65) rank = 'B';
        else if(total >= 50) rank = 'C';
        else if(total >= 30) {
            if(m.root[a].r<50) {
                rank = 'D';
            }
            else if(m.root[a].r>=50) {
                rank = 'C';
            }
        }
        else rank = 'F';
        printf("%c\n",rank);
    }
    return 0;
}
