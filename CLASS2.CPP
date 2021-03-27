#include <stdio.h>
int main()
{  int aa,bb,cc,dd,ee,ff;
   char ysf;
   scanf("%d/%d%c%d/%d",&aa,&bb,&ysf,&cc,&dd);
    if(ysf=='-')
	{
    ee=aa*dd-cc*bb;
    ff=bb*dd;
    }
    if(ysf=='+')
	{
    ee=aa*dd+cc*bb;
    ff=bb*dd;
	}
    if(ysf=='*')
	{
    ee=aa*cc;
    ff=bb*dd;
	}
    if(ysf=='/')
	{
    ee=aa*dd;
    ff=bb*cc;
    }
   printf("%d/%d\n",ee,ff);
} 

