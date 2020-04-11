/*
We have to print diamond shape using 1 and 0 as in alternate pattern
*/
#include<stdio.h>

void print (int);

int main()
{
    int l;
    int t,n;
    int row;//,max;
   
    scanf("%d", &t);
    for(l=0;l<t;l++)
    {   
        scanf("%d", &row);
        //max=row;
        print(row);
    }

    return 0;
}

void print (int r) {
   int c,n,k,space=1;
   n=r;
   space = n - 1;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space--;

    for (c = 1; c <= 2*k-1; c++)
      {
          if(c%2==0)
            printf("0");
           else
            printf("1");
      }

    printf("\n");
  }

  space = 1;

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space++;

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      {
          if(c%2==0)
            printf("0");
           else
            printf("1");
      }

    printf("\n");
  }
}
