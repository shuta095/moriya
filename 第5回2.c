#include <stdio.h>

int main(void)
{
    int k;
    int d;
    printf("昨日のテストの勉強時間は何分?");
    scanf("%d",&k);
    
    printf("今日の勉強時間は何分?");
    scanf("%d",&d);
    
    if (k>= 60 && d>=60)
    {
        printf("頑張ったな！");
    }
    
    else if(10<k<60 && 10<d<60)
     {
        printf("もう少し勉強しなさい");
    }
    
    
    else
    {
        printf("今日は遊ぶな");
    }

    return 0;
}