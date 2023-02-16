#include <stdio.h>
#define Min ((a) < (B)?(a):(b))

void play()
{
	printf("happy new year!");
} 

int main(void)
{
    int  a = 50, b = 100;
    printf("%d\n",Min(a,b));
    play();
    return 0;
}




