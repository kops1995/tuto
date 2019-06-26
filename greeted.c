#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int a;

	scanf("%d", &a);
	printf("입력하신 번호는 %d번입니다.\n", a);
	
	switch(a){
	case 1:
	printf("Hello\n");
	break;
	case 2:
	printf("Bye\n");
	break;
	case 3:
	printf("Hi\n");
	break;
	case 4:
	printf("안녕하세요\n");
	break;
	case 5:
	printf("안녕히가세요\n");
	break;
	case 6:
	printf("이곳은 건우글로벌입니다.\n");
	break;
	case 7:
	printf("무슨일로 오셨나요?\n");
	break;
	default: 
	return 0;
	break;
	}

	return 0;
}

