#include<stdio.h>
int main()
{
    int line, col, N;
    scanf("%d",&N);
    for(line=1;line<=N;printf("\n"),line++)
    {
        for(col=1;col<=line;col++)
        {
            printf("*");
        }
    }
    for(line=N-1;line>0;printf("\n"),line--)
    {
        for(col=1;col<=line;col++)
        {
            printf("*");
        }
    }
    return 0;
}
