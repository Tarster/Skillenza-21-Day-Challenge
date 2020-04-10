
#include<stdio.h>

void print (int,int);

int main()
{
    int l;
    int t,n;
    int row,max;
   
    scanf("%d", &t);
    for(l=0;l<t;l++)
    {   
        scanf("%d", &row);
        max=row;
        print(row,max);
    }

    return 0;
}

void print (int r,int max) {
   int c, space;
   static int stars = -1;
   
   if (r <= 0)
     return;
   
   space = r - 1;
   stars += 2;
     
   for (c = 0; c < space; c++)
      printf("a");
   
   for (c = 0; c < stars; c++)
      {
          if(c%2==0)
            printf("1");
           else
            printf("0");
      }
   printf("\n");
   
   print(--r,max);
   
   space = r + 1;
   stars -= 2;
   
   for (c = 0; c < space; c++)
      printf("a");
   
   for (c = 0; c < stars; c++)
     {
          if(c%2==0)
            printf("1");
           else
            printf("0");
      }
      if(r != max)
        printf("\n");
}
