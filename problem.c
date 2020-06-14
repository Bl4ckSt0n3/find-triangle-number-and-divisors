#include<stdio.h>
#include<stdlib.h>

int fullDivider(int);

int findTriangle(int);

int main()
{
        findTriangle(7);
        return 0;
}

int findTriangle(int tnum)
{
        int sum=0, total=0, index=1;
        while(index<=tnum)
        {
                sum += 1;
                total += sum;
                index += 1;
        }
        printf("given paramether is %d\nthe number is %d\n", tnum, total);
	printf("\n");
	fullDivider(total);
}

int fullDivider(int num)
{
        int i, freq=0;
	printf("divisors: ");
        for(i=1; i<=num; i++)
        {
                if(num%i == 0)
                {
                        printf("%d ",i);
                        freq += 1;
                }
        }
        printf("\n\nnumber of divisors: %d\n",freq);
}


