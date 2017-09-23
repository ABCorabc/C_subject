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

	if (string[0] >= 97 && string[0] <= 122) //문자가 소문자일 경우, 소문자->대문자 변경
		string[0] -= 32;
	if (strcmp(string, "") != 0) //문자열이 NULL이 아닐 경우, 문장 마지막에 마침표가 없을 경우 마침표 추가
		if (string[len - 1] != '.')
			string[len] = '.';

	for (i = 0; i < len; i++) { //단어 count
		if (string[i] != ' ')
			if (string[i + 1] == ' ')
				cnt++;
	}
	if (!strcmp(string, "")) //문자열이 NULL일 경우
		cnt = -1;
	for (j = 0; j < len; j++) { //문자열이 전체가 공백인 경우
		if (string[j] == ' ')
			check++;
	}
	if (len > 1) {
		if (check == len)
			cnt = -1;
	}

	printf("%d\n%s\n", cnt + 1, string);
}