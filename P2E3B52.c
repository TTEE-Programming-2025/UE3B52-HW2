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
    system("pause");
    return 0;



}