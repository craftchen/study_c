#include <stdio.h>

int main()
{
    int price = 0;

    printf("ÇëÊäÈë½ð¶î£º");
    scanf("%d", &price);

    int change = 90 - price;

    printf("ÕÒÄú%dÔª¡£\n", change);

    return 0;
}
