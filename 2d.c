# include <stdio.h>
int main()
{
int a[2][4]={{1,3,4,2},{1,3,3,3}};
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=4;j++)
{
printf("%d\n",a[i][j]);
}
}
}
