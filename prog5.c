// WAP to make below series    100 90 80 70 60 50 40 30 20 10

#include<Stdio.h>
void main()
{
    int colm = 10 , start = 100 ;

    for (int i = 0  ; i < colm ; i++)
    {
        for (int j = 0 ; j <= i ; j++)
        {
            printf("%d ", start  );
            start -- ;
            start = start - 9 ;
         }
        
    }
}