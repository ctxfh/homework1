#include <stdio.h>
void main()
{  int key;
   char ch;
   printf("������ƽ�Ʋ���:");
   scanf("%d",&key);
   printf("�������ַ���:");
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