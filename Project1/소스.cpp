#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t�������� �ູ�� VC++\n");
    Sleep(3000);
    system("cls");
    char c;
    char buffer[100]; // �Է��� ������ ����

    while (1) {
        printf("command> ");
        int i = 0;

        while (1) {
            c = _getch();

            if (c == 27) {
                return 0;
            }
            else if (c == 13) { // Enter Ű�� ������ ��
                buffer[i] = '\0'; // ���ڿ��� ����
                break;
            }
            else {
                // �Էµ� ���ڸ� ���ۿ� �����ϰ� ȭ�鿡 ���
                buffer[i] = c;
                putchar(c);
                i++;
            }
        }

        // ��ɾ� ó��
        if (strcmp(buffer, "q") == 0) {
            printf("\nq\nqwer ȭ����\n");
        }
        else if (strcmp(buffer, "w") == 0) {
            printf("\nw\n���� �ʹ� ����\n");
        }
        else if (strcmp(buffer, "e") == 0) {
            printf("\ne\n���ֺ��� ������ 3���\n");
        }
        else if (strcmp(buffer, "r") == 0) {
            printf("\nr\n�ູ�մϴ�.\n");
        }
        else {
            printf("\n�߸��� ����Դϴ�.\n");
        }
    }

    return 0;
}
