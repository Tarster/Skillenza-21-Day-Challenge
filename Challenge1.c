/*
This Contains a program that have t test case and each test case have n imaginary number to 
multiply.
imaginary number are in sepearted by space.
*/

#include<stdio.h>

int main()
{
    int l,j;
    int t,n;
    int tr,ti;
    long long int r,i,nr,ni;
    scanf("%d", &t);
    for(l=0;l<t;l++)
    {   scanf("%d", &n);
        scanf("%lld %lld", &r ,&i);
        //scanf("%d", &i);
        for(j=1;j<n;j++)
        {
            scanf("%d %d", &tr ,&ti);
            nr=(r*tr)-(i*ti);
            ni=(r*ti)+(tr*i);
            r=nr;
            i=ni;
        }

        printf("%lld %lld",nr,ni);
    }

    return 0;
}
