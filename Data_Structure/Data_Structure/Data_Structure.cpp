// Data_Structure.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void 부분합(){
	int result = -99999;
	int n, tmp = 0, input = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		tmp += input;
		if (result < tmp) {
			result = tmp;
		}
		if (tmp < 0)
			tmp = 0;

	}
	printf("%d", result);
}
int main()
{

    return 0;
}

