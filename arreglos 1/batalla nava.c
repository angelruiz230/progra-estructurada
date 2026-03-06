 #include<stdio.h>

int main()
{
    int m=3;
    int n=3;
    int jugador1[n][m];
    int jugador2[n][m];
    int bote1=777;
    int bote2[2]={555,555};//el bote 2 abarca 2 espacios, 555
    printf("\tBATALLA NAVAL\n=================================\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            jugador1[n][m]=0;
            printf("\t%d",jugador1[n][m]);

        }
        printf("\n");
    }
    printf("=================================");

    printf("\njugador1:\ndonde quieres poner tu bote 1?\nR:");
    scanf("%d",&n);
    scanf("%d",&m);
    jugador1[n][m]=bote1;
    printf("%d",jugador[1][1]);


    return 0;
}
