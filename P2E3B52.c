//需使用Big5編碼格式開啟檔案，比避免中文變成亂碼
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf(
        "                _______\n"
        "                |  |  |   \n"
        "                |  |  |   \n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "                |  |  |\n"
        "            [___|__|__|___]\n"
        "                 | | |\n"
        "                 | | | \n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |\n"
        "                 | | |   \n"
        "                 | | | \n"
        "                 | | |\n"
        "                 \\ | /\n"
        "                  \\|/     \n"
    );
    printf("\n程式設計作業二\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("沈威宇\n");
    printf("請輸入四位數密碼:");
    int pw = 2025, input,i;       //密碼預設2025
    scanf("%d", &input);
    if (input != pw) {
        printf("密碼輸入錯誤\n");
        for(i=0;i<2;i++){
            printf("請輸入四位數密碼:\n"); 
            scanf("%d", &input);
        }
        printf("密碼輸入錯誤已達三次\n");
        system("pause");
        return 1;
    }
    system("cls"); //清除螢幕
    printf("----------------------\n");
    printf("| a. 畫出直角三角形  |\n");
    printf("| b. 顯示乘法表      |\n");
    printf("| c. 結束            |\n");
    printf("----------------------");
    char in;
    printf("\n請輸入一個字元:");
    scanf(" %c",&in);
    if(in=='a'||in=='A'){
        system("cls");
    }
    char inn;
    int r;
    while (1) {
        printf("\n請輸入一個 a~n 的字元: ");
        scanf(" %c", &inn);        

        if (inn >= 'a' && inn <= 'n') {         
            for (r = 0; r<= inn - 'a'; r++) {
                char start = inn - r;
                for (char ch = start; ch <= inn; ch++)
                    printf("%c", ch);
                printf("\n");
            }
            break;                               
        } 
        else {                               
            printf("\n輸入範圍錯誤，請重新輸入\n");
        }
    }
    printf("\n按任意鍵返回主選單...\n");
    system("pause");
    getchar( );        
    system("cls");
    printf("----------------------\n");
    printf("| a. 畫出直角三角形  |\n");
    printf("| b. 顯示乘法表      |\n");
    printf("| c. 結束            |\n");
    printf("----------------------\n");




    
    system("pause");
    return 0;




}