// WAP to make below Pattern    5 10 15 20 25  
                            //= 5 10 15 20      
                             // 5 10 15    
                            // 5 10 

#include<stdio.h>
void main()
{

        int rows = 5, start = 5 ;

        for (int i = 0 ; i < 5 ; i++)
        {
            for (int j = 0 ; j <= i ; j++)
            {
                printf("%d ", start);
                start ++ ;
                start = start + 4    ;
                

            }
            printf(" \n");
        }
            

    }