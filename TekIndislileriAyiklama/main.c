#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i=0;
    int dizi[50];
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&N);
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("Dizinin %d. elemanini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\n\n******Dizinin icindeki tek indisli elemanlar******\n\n");
    for(i=0;i<N;i++)
    {
        if(i%2==1)
        {
            printf("Dizinin %d. indisli elemani: %d\n",i,dizi[i]);
        }
    }

    return 0;
}
