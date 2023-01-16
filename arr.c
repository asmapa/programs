# include <stdio.h>
int main()
{
int size,i,a[10];
printf ("enter the size of the array");
scanf("%d",&size);
printf("enter the array elements");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}
printf("even numbers are");
for(i=0;i<=size;i++)
{


if(a[i]%2==0)
{
printf(" %d",a[i]);
}

}
}
