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
    printf("\n程式設計作業一\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("沈威宇\n");
    printf("請輸入四位數密碼:\n");
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
}