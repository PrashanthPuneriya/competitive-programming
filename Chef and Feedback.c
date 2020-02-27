#include<stdio.h>
int main(void)
{
char feed[100006];
int t,i,flag;
scanf("%d\n",&t);
while(t--)
{
flag=0;
gets(feed);
for(i=0;feed[i]!='\0';i++)
{
if((feed[i]=='0'&&feed[i+1]=='1'&&feed[i+2]=='0')||(feed[i]=='1'&&feed[i+1]=='0'&&feed[i+2]=='1'))
{
flag=1;
break;
}
}
if(flag==1)
{
printf("Good\n");
}
else
printf("Bad\n");
}
}