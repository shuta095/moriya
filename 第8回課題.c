#include <stdio.h>
#include <string.h>

int main(){
    char kouzou[]="rijferoeofokffookefokkefokfeeffrerererrrrrrrrrrrrrrrr";
    int i;
    printf("The string '%s' is %lu characters long.\n", kouzou,strlen(kouzou));
    for(i=1; i<=strlen(kouzou); i++)
    printf("%d\n", i);
    return 0;
}