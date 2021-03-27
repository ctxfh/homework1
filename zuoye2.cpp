#include <stdio.h>
void main()
{  int key;
   char ch;
   printf("请输入平移参数:");
   scanf("%d",&key);
   printf("请输入字符串:");
   scanf("%c",&ch);
   while(ch!='#')
   {     if('A'<=ch && ch<='Z')
        
		{	ch=(ch-'A'+key)%26+'A';

        }
  
        if('a'<=ch && ch<='z')

        { 
			ch=(ch-'a'+key)%26+'z';

		}
        printf("%c",ch);
		scanf("%c",&ch); 
   }

}