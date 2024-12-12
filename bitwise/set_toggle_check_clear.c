#include<stdio.h>
#define SET(x,p) (x|(0x1<<p))
#define CLEAR(x,p) (x&(~(0x1<<p)))
#define TOGGLE(x,p) (x^(0x1<<p))
#define CHECK(x,p) (x&(0x1<<p)?1:0)

int main()
{
    int x,p;
    printf("Enter a number:");
    scanf("%x%d",&x,&p);
    printf("set-%x\n",SET(x,p));
    printf("clear-%x\n",CLEAR(x,p));
    printf("Toggle-%x\n",TOGGLE(x,p));
    printf("Check-%x\n",CHECK(x,p));
    return 0;
}
