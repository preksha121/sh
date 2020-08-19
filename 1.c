#include<stdio.h>
float sum (int);
float avg (float ,int);
int main()
{int n,i;
float m,d,list[100],y;
printf("enerte the vaue");
scanf("%d",&n);
y= sum (n);
m= avg (y,n,list[i]);
printf("average=%f",m);
//for(i=0;i<n;i++)
//{d=list[i]-m;//
for(i=0;i<n;i++)
{printf("%f=d",m);
}
return 0;
}
float sum (int n)
{float list[100],sum=0;
int i;
for(i=0;i<n;i++)
{scanf("%f",&list[i]);
sum+=list[i];
}return sum;}
float avg (float y,int n,int list[i])
{float a,d,i;
int temp;
a=y/n;
for(i=0;i<n;i++)
{d=list[i]-a;
}
temp[0]=a;
temp[1]=d;
return temp;
}
