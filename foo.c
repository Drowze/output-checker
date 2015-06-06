// Personal solution to https://www.urionlinejudge.com.br/judge/en/problems/view/1257

#include <stdio.h>
#define MAX 51 // tip to test the checker: change to 50

int main(){
    char vet[MAX];
    int n, l, hash;
    int i, j;

    scanf("%d", &n);

    do{
        hash = 0;

        scanf("%d", &l);
        for(i = 0; i < l; i++){
            scanf("%50s", vet);
            for(j = 0; vet[j]; j++){
                hash += (vet[j] - 65) + i + j;
            }
        }
        if(vet[0] == 'A')
            hash = 0;
        printf("%d\n", hash);
        
        n--;
    }while(n>0);

    return 0;
}