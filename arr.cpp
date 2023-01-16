#include<iostream>
using namespace std;
int main()
{
int a[50],g,i,j,temp=0;
cout<<"enter array elements:";
for(i=0;i<6;i++)
{
cin>>a[i];
}
cout<<"array elements in acenting oirde:";//321.....123
for(i=0;i<6;i++)//i=0
{
for(j=i+1;j<6;j++)//j=1
{
if(a[i]<a[j])//a[o]<a[1],a[o]>a[2],a[0]>a[3]......
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<6;i++)
{
cout<<a[i];
}
}


