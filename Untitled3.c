#include<stdio.h>
int main()
{
  char *ptr;
  char name[] = "Kaochar";
 int len = strlen(name);

  for(int i = 0 ; i<=len; i++)
  {
       ptr = &name[i];
       printf("%c",*ptr);
  }

    getch();
}
