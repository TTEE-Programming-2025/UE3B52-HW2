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
    }
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
    getchar( );        
    system("cls");
    printf("----------------------\n");
    printf("| a. �e�X�����T����  |\n");
    printf("| b. ��ܭ��k��      |\n");
    printf("| c. ����            |\n");
    printf("----------------------\n");




    
    system("pause");
    return 0;




}