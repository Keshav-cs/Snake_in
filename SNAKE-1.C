#include<stdio.h>
#include<conio.h>
void main()
{
int t,y,l,i,o,h,n=1,b,u,que[sizeof(n)],g;
clrscr();
n=6;
for(y=0;y<6;y++)
que[y]=y+1;
BACK:for(g=0;g<n;g++)
{
t=que[g];
u=t/10;
for(h=0;h<u;h++)
printf("\n");
b=t%10;
for(h=0;h<b;h++)
printf(" ");
printf("*");
}
scanf("%c",&l);
if(l == 'd' || 'a' || 'w' || 's' || 'x')
{
o=l;
n++;
}
else
{ n++;
  l=o;  }
switch (l)
{
case 'd':
{
que[n]=que[n-1]+1;
goto  BACK;break;}
case 'a':
{
que[n]=que[n-1]-1;
goto BACK;break;}
case 'w':
{
que[n]=que[n-1]-10;
goto BACK;break;}
case 's':
{
que[n]=que[n-1]+10;
goto BACK;
break; }
case 'x':
{break;}
default:
{
goto BACK;
break;
}
}
getch();
}