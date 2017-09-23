#include <stdio.h>
#include <string.h>

void invert(char *, int);
int main()
{
	char string[101] = "";
	int length, k = 0;
	scanf("%s", string);
	length = strlen(string);	 // string 길이
	invert(string, length);		 // 입력받은 문자열과 그것의 길이를 전달인자로 보냄
}

/*
문자 순서 바꿔주는 함수
출력까지.
*/
void invert(char *string, int len)
{
	int k = 0, p = 0, q = len - 1;
	char tmp[101] = "";		// 문자열을 저장해줄 변수 선언

	if (len % 2 == 0) {		// 문자열의 길이가 짝수일 때
		for (int i = 0; i < len / 2; i++) {
			tmp[k++] = string[p++];
			tmp[k++] = string[q--];
		}
	}
	else {					// 문자열의 길이가 홀수일 때
		for (int i = 0; i < len / 2 + 1; i++) {
			tmp[k++] = string[p++];
			if (k == len)	// break를 안 해주면 그 다음 식이 적용되면서 문자 1개가 더 찍히게된다.
				break;
			tmp[k++] = string[q--];
		}
	}
	printf("%s\n", tmp);
}