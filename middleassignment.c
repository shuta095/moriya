#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    char password[100];
    
    printf("パスワードを入力してください");
    scanf("%s",password);
    
    
    bool isLenOK = false;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    
    
    if (strlen(password)>=8){
        isLenOK = true;
    }
    
    
    for (int i=0; i<strlen(password); i++){
        if(isupper(password[i])) hasUpper = true;
        if(islower(password[i])) hasLower = true;
        if(isdigit(password[i])) hasDigit = true;
    }
    
    
    int issues = 0;
    
    printf("\n 【判定結果】　\n");
    
    
    if(isLenOK && hasUpper && hasLower && hasDigit){
        printf("強いパスワードです。\n");
    }else{
        printf("以下の点を改善してください。\n");
        
        if(!isLenOK) printf("・8文字以上にしてください\n");
        if(!hasUpper) printf("・大文字（A-Z)を含めてください\n");
        if(!hasLower) printf("・小文字（a-z）を含めてください\n");
        if(!hasDigit) printf("・数字（0～9）を含めてください\n");
    }

    return 0;
}