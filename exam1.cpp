#include <stdio.h>
#include <string.h>

int main()
{
	char string[201] = "";
	int len, cnt = 0;
	int check = 0;
	int i, j;

	gets_s(string,sizeof(string));
	len = strlen(string);

	if (string[0] >= 97 && string[0] <= 122) //���ڰ� �ҹ����� ���, �ҹ���->�빮�� ����
		string[0] -= 32;
	if (strcmp(string, "") != 0) //���ڿ��� NULL�� �ƴ� ���, ���� �������� ��ħǥ�� ���� ��� ��ħǥ �߰�
		if (string[len - 1] != '.')
			string[len] = '.';

	for (i = 0; i < len; i++) { //�ܾ� count
		if (string[i] != ' ')
			if (string[i + 1] == ' ')
				cnt++;
	}
	if (!strcmp(string, "")) //���ڿ��� NULL�� ���
		cnt = -1;
	for (j = 0; j < len; j++) { //���ڿ��� ��ü�� ������ ���
		if (string[j] == ' ')
			check++;
	}
	if (len > 1) {
		if (check == len)
			cnt = -1;
	}

	printf("%d\n%s\n", cnt + 1, string);
}