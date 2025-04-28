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
        getchar();        
        system("cls");
    }
    system("cls"); //清除螢幕
    printf("----------------------\n");
    printf("| a. 畫出直角三角形  |\n");
    printf("| b. 顯示乘法表      |\n");
    printf("| c. 結束            |\n");
    printf("----------------------");
    if(in=='b'||in=='B'){
        int n;
        while (1) {
            printf("\n請輸入 1 ~ 9 的整數：");
            if (scanf("%d", &n) != 1) {
                while (getchar() != '\n'); //清理緩衝區
                printf("輸入錯誤\n");
                continue;
            }
            if (n >= 1 && n <= 9) {
                break; 
                while (getchar() != '\n');                  
            }
            else {
                printf("輸入錯誤\n");
            }
        }          
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("%d×%d=%2d ", i, j, i * j);
            }
            printf("\n");                   
        }
        printf("\n按任意鍵返回主選單...\n");
        while (getchar() != '\n');
        getchar( );                          
        system("cls");               
    }
    system("cls"); //清除螢幕
    printf("----------------------\n");
    printf("| a. 畫出直角三角形  |\n");
    printf("| b. 顯示乘法表      |\n");
    printf("| c. 結束            |\n");
    printf("----------------------\n");
    while (getchar() != '\n');
    if (in == 'c' || in == 'C') {
        printf("Continue? (y/n) ");
        char y;
        scanf(" %c", &y);                 
    
        if (y == 'y' || y == 'Y') {
    
            int n;                       
            while (1) {
                printf("\n請輸入 1 ~ 9 的整數：");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("輸入錯誤\n");
                    continue;
                }
                if (n >= 1 && n <= 9) {
                    while (getchar() != '\n');  
                    break;
                } else {
                    printf("輸入錯誤\n");
                }
            }
    
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++)
                    printf("%d×%d=%2d ", i, j, i * j);
                printf("\n");
            }
    
            printf("\n按任意鍵返回主選單...\n");
            while (getchar() != '\n');     
            getchar();
            system("cls");
        }
    
        system("cls");
        printf("----------------------\n");
        printf("| a. 畫出直角三角形  |\n");
        printf("| b. 顯示乘法表      |\n");
        printf("| c. 結束            |\n");
        printf("----------------------\n");
    
        if (y == 'n' || y == 'N') {
            return 0;           
        } else if (y!='y' && y!='Y' && y!='n' && y!='N') {  
            printf("\n輸入錯誤，請重新輸入\n");
            scanf(" %c", &y);
        }
    }
    system("pause");
    return 0;
}


//這次實驗運用到很多for、while迴圈與if判斷式
//雖然寫起來不難，但花了很多時間再調適程式碼，不是括弧錯亂，就是分號沒有打，面對多行程式需要的耐心與毅力是簡單的程式最不同的
//這次學到要先清除緩衝區，以免電腦讀入值錯亂，導致程式執行失敗
//這次作業也學到電腦系統中或要安裝相關套件或程式，要按y或n的實際程式是如何而來