#include <stdio.h>
#include <conio.h>
void main()
{
int a[20],b[20],c[20],i,j,k,l,m,n,x1;
int p,q,r[20],s[20],d[20],y[20],e[10],z=0;
clrscr();
printf(“\n Enter the plain Text number:\n”);
scanf(“%d”,&n);
printf(“\n Enter the key number \n”);
scanf(“%d”,&k);
printf(“\n Enter the bit stream \n”);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=n\2;
x1=p-k;
for(i=0;i<=x1;i++)
{
c[i]=0;
z++;
}
z=z-1;
printf("\n Enter the Key bit Stream\n");
for(i=0;i<k;i++)
{
scanf("%d",&c[z++]);
}
for(i=0;i<2;i++)
printf("%d",e[i]);
printf("Left hand data\n");
for(i=0;i<p;i++)
{
s[i]=a[i];
printf("%d",a[i]);
}
printf("\n Right hand data \n");
for(i=p;i<n;i++)
{
b[i]=a[i];
printf("%d",a[i]);
}
q=p;
for(j=0,l=p;j<z,l<n;j++,l++)
{
if(b[l]==1&&c[j]==1)
d[j]=0;
else if(b[l]==1&&c[j]==0)
d[j]=l;
else
d[j]=0;
}
printf("\n First XOR");
for(i=0;i<p;i++)
{
printf("%d",d[i]);
}
for(j=0,l=0;j<p,j++;j++,l++)
{
if(s[l]=1&&d[j]==1)
r[j]=0;
else if(s[l]=1&&d[j]==0)
r[j]=l;
else if(s[l]==0&&d[j]==1)
r[j]=0;
}
printf("\n Second XOR\n ");
for(i=0;i<p;i++)
printf("%d",r[j]);
getch();
}
