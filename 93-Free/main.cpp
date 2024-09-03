#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, *ptr1;
    int n = 5; 
    int i;

    printf("Girdigimiz sayi degeri %d\n", n);


    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n, sizeof(int));

    if (ptr == NULL || ptr1 == NULL)
    {
        printf("Bellekten ayirma islemi basarisiz\n");
        exit(1);
    }
    else
    {
        printf("Malloc kullanarak basarili bir sekilde ayirma islemini yaptim\n");
        free(ptr);
        printf("Malloc icin ayrilan yer serbest birakildi\n");

        printf("Calloc kullanarak basarili bir sekilde ayirma islemini yaptim\n");
        free(ptr1);
        printf("Calloc icin ayrilan yer serbest birakildi\n");
    }

    return 0;
}

