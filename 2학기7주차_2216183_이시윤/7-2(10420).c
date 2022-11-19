#include <stdio.h>

int main() {
	
	int month1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int year = 2014, month = 4, day = 2,spe;

	scanf("%d", &spe);
	while (spe != 1) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			month1[1] = 29;
		}
		else month1[1] = 28;

		day++,spe--;
		if (day > month1[month - 1]) day=1, month++;
		if (month > 12) month=1,year++;
	}
	printf("%d-%02d-%02d", year, month, day);

}