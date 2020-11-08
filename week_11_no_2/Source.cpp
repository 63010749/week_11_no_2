#include<stdio.h>

struct timer {
	int hour;
	int minute;
};

int thinktime(int min, int hour) {
	int min1 = min % 60;
	if (min1 > 0) {
		min1 = 1;
	}
	if (min1 == 0) {
		min1 = 0;
	}
	hour = hour + (min / 60) + min1;
	return(hour);
}

int thinkcost(int h) {
	int cost = h * 30;
	return(cost);
}


int main() {
	char name[1000] = "PAWIDA";
	struct  timer  time;
	int shopping, cost;
	printf("Shopping : ");
	scanf("%d", &shopping);
	printf("Hour : ");
	scanf("%d", &time.hour);
	printf("Minute : ");
	scanf("%d", &time.minute);
	int b;

	if (shopping < 0 || time.hour < 0 || time.minute < 0) {
		printf("It can't be negative");
		b = 0;
	}

	else {
		if (shopping > 0) {

			if (shopping < 1000) {
				time.hour = thinktime(time.minute, time.hour) - 1;
			}

			if (shopping >= 1000) {
				time.hour = thinktime(time.minute, time.hour) - 4;
			}
		}

		cost = thinkcost(time.hour);

		if (cost < 0) {
			printf("Parking Cost = 0");
		}

		else {
			if (cost >= 160) {
				printf("Parking Cost = 150\n");
			}
			else {
				printf("Parking Cost = %d\n", cost);
			}
		}
	}
	printf("****************************************\n");
	for (int g = 0; g < 6; g++) {
		printf("%c    ", name[g]);
	}
	
	return 0;
}
