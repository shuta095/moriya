#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
    srand(time(0));
    
    int intel = (rand() % 18) + 1;
    
    int remaining = 20 - intel;
    int sta = rand() % (remaining - 1) + 1;
    
    int cha = 20 - intel - sta;
    
    printf("Int: %d, stamina: %d, Charisma: %d (total: 20)\n",intel,sta,cha);
    
    if(intel>=sta && intel>=cha){
        printf("Class: Mage(魔法使い)\n");}
        else if(sta>=intel && sta>=cha){
            printf("Class: Knight(ファイター)\n");}
            else{
                printf("Class: Thief(盗人)\n");}
        return 0;
    }