#include<stdio.h>
#include<stdlib.h>
#include "headers.h"
/*
int theFirst()
{
	int* ptr = (int*)malloc(1000 * sizeof(int));
	//(ptr != NULL)? printf("8 byte allocated from memory\n"): printf("memory not allocated");
	//int arr[10],
	int sum=0;
		for(int i=1; i<=999; i++)
		{
			ptr[i] = i;
			if((i%3 == 0) || (i%5 ==0))
			{
				printf("%d\n", ptr[i]);
				sum += ptr[i];
			}
		}
		printf("the sum of these multiples is : %d\n",sum);
}

int evenFibonacci(int index)
{
	int n,temp, next, f=0, s=1;

		printf("%d",f);
		for(n=1; n<=index; n++)
		{
			//printf("%d",f);
			temp = f+s;
			f = s;
			s = temp;

			(f%2==0)? printf("%d",f):printf(" ");
		}
}
*/
int largestPrime(long n)
{
	while(n%2 == 0)
	{
		printf("%d ",2);
		n /= 2;
	}

	for(long i=3; i<=square(n); i += 2)
	{
		while(n%i == 0)
		{
			printf("%ld ",i);
			n /= i;
		}
	}printf("\n");
}
int smallestMultiple()
{
        int t=1;
        for(int i=2; i<=20; i++)
        {
                if(t%i != 0)
                {

                        if(i%2==0)
                        {
                                t=t*2;
                        }
                        else if(i%3==0)
                        {
                                t=t*3;
                        }
                        else{t=t*i;}

                }

        }printf("%d\n",t);
}


int main()
{
	//evenFibonacci(10);
	largestPrime(600851475);
	//theFirst();
	//square();
	return 0;
}

