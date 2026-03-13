#include<stdio.h>
#include<string.h>
int main()
{
    char nom[16]="antonio";
    char nom2[16];
    char nom3[16];
    char jugadores[3][20];
    char lista[3][20];
    int n=3;
    /*scanf("%s", &nom2);
    printf("%s", nom2);*/

    /*fgets(nom3,sizeof(nom3), stdin);
    printf("%s", nom3);*/
    /*strcpy(jugadores[0],angel);
    strcpy(jugadores[1],carlos);
    strcpy(jugadores[2],cesar);*/
    for(int i=0;i<n;i++)
    {
        fgets(lista[i],sizeof(lista[i]),stdin);
    }
    for(int j=0;j<n;j++)
    {
        printf("%s", lista[j]);
    }
    for(int k=0;k<n;k++)
    {
        int longitud=strlen(lista[k]);
        printf("\nla longitud de %s es de %d\n", lista[k], longitud);
    }

    return 0;

}
