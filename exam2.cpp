#include <stdio.h>
#include <string.h>

int atoi(char *);
void output(char *, int, int);
int main()
{
	int j, k, init = 0;
	char Oper_Nums[15] = "";
	char operation[4] = "";
	char num1[6] = "" , num2[6]="";
	int n1, n2;
	
	gets_s(Oper_Nums, 15);
	for (int i = 0; Oper_Nums[i] != ' '; i++) {
		operation[i] = Oper_Nums[i];	// 연산 문자열 저장
		j = i; // 주소 복사
	}
	
	j += 2;	// 첫 숫자 문자열의 주소
	//printf("[%d]번방 : [%c]\n", j,Oper_Nums[j]);
	for (int i = j; Oper_Nums[i] != ' '; i++) {
		num1[init++]=Oper_Nums[i];	 // 첫 번째 숫자 저장
		k = i;
		//printf("%c ", num1[(init - 1)]);
	}
	//printf("num1 = %s\n", num1);
	init = 0;
	k += 2;	// 두번째 숫자 문자열의 주소
	//printf("num1 = %s\n", num1);

	//printf("[%d]번방 : [%c]\n", k, Oper_Nums[k]);
	for (int i = k; Oper_Nums[i] != '\0'; i++) {
		num2[init++] = Oper_Nums[i];	 // 두 번째 숫자 저장
	}
	//printf("num1 = %s\n", num1);
	//printf("[%s]\n[%s]\n", num1, num2);
	n1 = atoi(num1);
	n2 = atoi(num2);
	//printf("%d %d\n", n1, n2);
	output(operation, n1, n2);

	return 0;
}

int atoi(char *str)
{
	int len = strlen(str);
	int power = 1;
	int res = 0;

	if (str[0] == '-')
	{
		for (int j = 1; j < len; j++) {
			power = 1;
			for (int i = j; i < len - 1; i++) {
				power *= 10;
			}
			res += (str[j] - '0')*power;
		}
		res = -res;
	}
	else {
		for (int j = 0; j < len; j++) {
			power = 1;
			for (int i = j; i < len - 1; i++) {
				power *= 10;
			}
			res += (str[j] - '0')*power;
		}
	}
	return res;
}
void output(char *str, int first, int second)
{
	if (!strcmp(str, "add"))
		printf("%d", first + second);
	else if (!strcmp(str, "sub"))
		printf("%d", first - second);
	else if (!strcmp(str, "mul"))
		printf("%d", first*second);
	else if (!strcmp(str, "div"))
		printf("%d", first / second);
	else
		;
}