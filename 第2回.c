/**不正プログラム**/

#include <stdio.h>

int main()
{
    /**名前をつけて数字を保存しとく**/
    int SENRITU = 1000;
    printf("SENRITUが%d人います。\n",SENRITU);
    SENRITU = SENRITU*10;
    /**printfは、""の間に表記したい文字を書く**/
    printf("間違えました。SENRITUが%d 人いました。\n",SENRITU);

    return 0;
}