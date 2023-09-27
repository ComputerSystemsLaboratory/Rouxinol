#include<cstdio>
#include<cstring>

char dict[50000000];

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        char com[10],str[30];
        scanf("%s%s",com,str);
        int hash = (1<<25)-1;
        hash <<= 1;
        for(int j=0; j<strlen(str); j++) {
            hash <<= 2;
            switch(str[j]) {
                case 'A':
                    hash++;
                case 'C':
                    hash++;
                case 'G':
                    hash++;
            }
        }
        hash &= (1<<25)-1;

        if(com[0] == 'i')
            dict[hash] = 1;
        else
            puts(dict[hash] ? "yes" : "no");
    }
    return 0;
}