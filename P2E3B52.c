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
    printf("\n�{���]�p�@�~�@\n");
    printf("UE3B52\n");
    printf("411102252\n");
    printf("�H�¦t\n");
    printf("�п�J�|��ƱK�X:\n");
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
}