#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int T;
	scanf("%d", &T);
	
	int x1, y1, r1, x2, y2, r2;

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d\n", relation_circle(x1, y1, r1, x2, y2, r2));
	}

	return 0;
}

int relation_circle(x1, y1, r1, x2, y2, r2) {
	int d, plus_radius, minus_radius;
	d = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	plus_radius = (r1 + r2) * (r1 + r2);
	minus_radius = abs(r1 - r2) * abs(r1 - r2);

	//중심이 같은 경우
	if (d == 0) {
		if (r1 == r2) {
			return 0;
		}
		else {
			return -1;
		}
	}
	else {
		if (d == plus_radius || d == minus_radius) {
			return 1;
		}
		else if (minus_radius < d && d < plus_radius) {
			return 2;
		}
		else {
			return 0;
		}
	}
	
	
}