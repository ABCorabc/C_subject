#include <stdio.h>
#include <string.h>

void invert(char *, int);
int main()
{
	char string[101] = "";
	int length, k = 0;
	scanf("%s", string);
	length = strlen(string);	 // string ����
	invert(string, length);		 // �Է¹��� ���ڿ��� �װ��� ���̸� �������ڷ� ����
}

/*
���� ���� �ٲ��ִ� �Լ�
��±���.
*/
void invert(char *string, int len)
{
	int k = 0, p = 0, q = len - 1;
	char tmp[101] = "";		// ���ڿ��� �������� ���� ����

	if (len % 2 == 0) {		// ���ڿ��� ���̰� ¦���� ��
		for (int i = 0; i < len / 2; i++) {
			tmp[k++] = string[p++];
			tmp[k++] = string[q--];
		}
	}
	else {					// ���ڿ��� ���̰� Ȧ���� ��
		for (int i = 0; i < len / 2 + 1; i++) {
			tmp[k++] = string[p++];
			if (k == len)	// break�� �� ���ָ� �� ���� ���� ����Ǹ鼭 ���� 1���� �� �����Եȴ�.
				break;
			tmp[k++] = string[q--];
		}
	}
	printf("%s\n", tmp);
}