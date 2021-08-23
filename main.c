#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i;

    printf("sayi gir\n");
    scanf("%d", &sayi);

    for(i=2; i<=sayi; i++){
        if(sayi%i==0){
        break;
        }
    }
    if(sayi==i){
     printf(" %d asal sayidir\n", i);
    }
    else
    printf("sayiniz asal degildir.\n");
    return 0;
}
