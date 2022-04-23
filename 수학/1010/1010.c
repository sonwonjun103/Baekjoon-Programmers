#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, east, west;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		long long ans = 1;
		scanf("%d %d", &west, &east);
		for (int j = 0; j < west; j++) {
			ans *= east - j;
			ans /= 1 + j;
		}
		printf("%d\n", ans);
	}

	return 0;
}

