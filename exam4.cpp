#include <stdio.h>
#include <string.h>

void del(char *);
int main()
{
	char string[100] = "";
	gets_s(string, 100);
	del(string);
}

/*���������Լ�*/
void del(char *string)
{
	char tmp[100] = "";
	int len = strlen(string);
	int k = 0;

	for (int j = 0; j < len; j++) {
		if (string[j] != ' ') {		 // ������ �ƴ� ��
			tmp[k++] = string[j];
		}
	}
	printf("%s", tmp);
}