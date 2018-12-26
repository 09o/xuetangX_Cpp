/* program: print calendar in one month */ 
#include <stdio.h>

typedef enum { SUN, MON, TUE, WED, THU, FRI, SAT } WEEKDAY;

int main()
{
	const WEEKDAY date_1 = SAT;
	WEEKDAY weekday;
	printf("Calendar 2018-12\n");
	printf("--------------------------\n");
	printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
	printf("--------------------------\n");
	
	int i;
	for ( i = 1; i <= 31; i++ ) {
		weekday = (WEEKDAY)((i + (int)date_1 - 1) % 7);
		if (i == 1) printf("%26d", i);
		else
			switch( weekday ) {
				case SUN: printf("%2d", i); break;
				case MON: printf("%4d", i); break;
				case TUE: printf("%4d", i); break;
				case WED: printf("%4d", i); break;
				case THU: printf("%4d", i); break;
				case FRI: printf("%4d", i); break;
				case SAT: printf("%4d", i); break;
				default: ;
			}
		if (weekday == SAT) printf("\n");
	}
	printf("\n--------------------------\n");
	return 0;
}
