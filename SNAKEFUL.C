#include<stdio.h>
#include<conio.h>
void main()
{                                                   //for-switch-for-
int i=0,j,a,b=6,e,r,f,c;char d;                          //        |------|
clrscr();                                     //for
for(;;i++)                                    //back switch
{                                             //a w s d x-cases
for(c=6-b;c>0;c--)                            //if d==asdwx goto back
{printf("*");                                 //no need of diiffrnt varible
if(c==6)           //*bettwenn right n left   //have to continue wid thm
{i=0;}
}
for(j=0;j<i;j++)         //make it right
{printf(" ");
}
for(a=1;a<=b;a++)
{printf("*");           //go on till right end
}
if(i==0)
{b=6;}
scanf("%c",&d);         //enter=proceed //x= end
clrscr();
if(i>=73&&i<79)
{
b--;                          // crossing
i--;
}
if(d=='x')
{break;}                  //exit
if(d=='a')
{
for(;;i--)                  //reverse
{
for(e=6-b;e>0;e--)
{printf("*");
}
for(r=i;r>0;r--)
{printf(" ");
}
for(f=b;f>0;f--)
{printf("*");
}
scanf("%c",&d);
clrscr();
if(i==0)
{
b=1;
i=73;
}
if(b<6)
{
i=73;                       //b is * at end so it should inrease
b++;
}
if(d=='x')
{break;}
}
}
}
}
