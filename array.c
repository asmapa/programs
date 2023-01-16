# include<stdio.h>
int main()
{
int a[50];
int size,i,big,small;
printf("\n enter the size of the array:");
scanf("\n %d",&size);
printf("\n enter the elements:",size);
for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 big=a[0];
 for(i=1;i<size;i++)
 {
 if(big<a[i])
 {
 big=a[i];
 }
 }
 printf("\n the largest number isd %d ",big);
 small=a[0];
  for(i=1;i<size;i++)
  {
  if(small>a[i])
  {
  small=a[i];
  }
  }
  printf("\n the smallest element is %d",small);
  }
 
