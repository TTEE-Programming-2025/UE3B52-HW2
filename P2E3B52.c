//�ݨϥ�Big5�s�X�榡�}���ɮסA���קK�����ܦ��ýX
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
    printf("\n�{���]�p�@�~�G\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("�H�¦t\n");
    printf("�п�J�|��ƱK�X:");
    int pw = 2025, input,i;       //�K�X�w�]2025
    scanf("%d", &input);
    if (input != pw) {
        printf("�K�X��J���~\n");
        for(i=0;i<2;i++){
            printf("�п�J�|��ƱK�X:\n"); 
            scanf("%d", &input);
        }
        printf("�K�X��J���~�w�F�T��\n");
        system("pause");
        return 1;
    }
    system("cls"); //�M���ù�
    printf("----------------------\n");
    printf("| a. �e�X�����T����  |\n");
    printf("| b. ��ܭ��k��      |\n");
    printf("| c. ����            |\n");
    printf("----------------------");
    char in;
    printf("\n�п�J�@�Ӧr��:");
    scanf(" %c",&in);
    if(in=='a'||in=='A'){
        system("cls");
        char inn;
        int r;
        while (1) {
            printf("\n�п�J�@�� a~n ���r��: ");
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
                printf("\n��J�d����~�A�Э��s��J\n");
            }
        }
        printf("\n�����N���^�D���...\n");
        system("pause");
        getchar();        
        system("cls");
    }
    system("cls"); //�M���ù�
    printf("----------------------\n");
    printf("| a. �e�X�����T����  |\n");
    printf("| b. ��ܭ��k��      |\n");
    printf("| c. ����            |\n");
    printf("----------------------");
    if(in=='b'||in=='B'){
        int n;
        while (1) {
            printf("\n�п�J 1 ~ 9 ����ơG");
            if (scanf("%d", &n) != 1) {
                while (getchar() != '\n'); //�M�z�w�İ�
                printf("��J���~\n");
                continue;
            }
            if (n >= 1 && n <= 9) {
                break; 
                while (getchar() != '\n');                  
            }
            else {
                printf("��J���~\n");
            }
        }          
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("%d��%d=%2d ", i, j, i * j);
            }
            printf("\n");                   
        }
        printf("\n�����N���^�D���...\n");
        while (getchar() != '\n');
        getchar( );                          
        system("cls");               
    }
    system("cls"); //�M���ù�
    printf("----------------------\n");
    printf("| a. �e�X�����T����  |\n");
    printf("| b. ��ܭ��k��      |\n");
    printf("| c. ����            |\n");
    printf("----------------------\n");
    while (getchar() != '\n');
    if (in == 'c' || in == 'C') {
        printf("Continue? (y/n) ");
        char y;
        scanf(" %c", &y);                 
    
        if (y == 'y' || y == 'Y') {
    
            int n;                       
            while (1) {
                printf("\n�п�J 1 ~ 9 ����ơG");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("��J���~\n");
                    continue;
                }
                if (n >= 1 && n <= 9) {
                    while (getchar() != '\n');  
                    break;
                } else {
                    printf("��J���~\n");
                }
            }
    
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++)
                    printf("%d��%d=%2d ", i, j, i * j);
                printf("\n");
            }
    
            printf("\n�����N���^�D���...\n");
            while (getchar() != '\n');     
            getchar();
            system("cls");
        }
    
        system("cls");
        printf("----------------------\n");
        printf("| a. �e�X�����T����  |\n");
        printf("| b. ��ܭ��k��      |\n");
        printf("| c. ����            |\n");
        printf("----------------------\n");
    
        if (y == 'n' || y == 'N') {
            return 0;           
        } else if (y!='y' && y!='Y' && y!='n' && y!='N') {  
            printf("\n��J���~�A�Э��s��J\n");
            scanf(" %c", &y);
        }
    }
    system("pause");
    return 0;
}


//�o������B�Ψ�ܦhfor�Bwhile�j��Pif�P�_��
//���M�g�_�Ӥ����A����F�ܦh�ɶ��A�վA�{���X�A���O�A�����áA�N�O�����S�����A����h��{���ݭn���@�߻P�ݤO�O²�檺�{���̤��P��
//�o���Ǩ�n���M���w�İϡA�H�K�q��Ū�J�ȿ��áA�ɭP�{�����楢��
//�o���@�~�]�Ǩ�q���t�Τ��έn�w�ˬ����M��ε{���A�n��y��n����ڵ{���O�p��Ө�