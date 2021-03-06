// Data_Structure.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void HanoiTop(int number, char first_state, char middle_state, char last_state) {
	//기저사례 : 가장 숫자가 작은 1을 옮겼을때.
	if (number <= 0)
		return;
	if (number == 1) {
		printf("%d : %c => %c\r\n", number, first_state, middle_state);
		return;
	}
	HanoiTop(number - 1, first_state, last_state, middle_state);
	printf("%d : %c => %c\r\n", number, first_state, middle_state);
	HanoiTop(number-1 , middle_state, first_state, last_state);
	printf("%d : %c => %c\r\n", number, first_state, middle_state);
	
};
int main()
{
	HanoiTop(3,'A','B','C');
    return 0;
}

