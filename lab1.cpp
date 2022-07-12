#include <stdio.h>

int main()
{
    int c = 1;
    while(c > 0 )
    {
        printf("Input Your Coin > ");
        scanf("%d", &c);
        int m = c;
        
        int m10 = m/10;
        m  = m%10;
        
        int m5 = m/5;
        m = m%5;
        
        int m2 = m/2;
        m = m%2;
        
        int m1 = m;
        printf("10 = %d\n5 = %d\n2 = %d\n1 = %d\n", m10,m5,m2,m1);
    }

    return 0;
}

