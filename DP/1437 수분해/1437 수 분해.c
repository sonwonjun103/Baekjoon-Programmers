#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000000

int main() {
	int N;
	scanf("%d", &N);
	int dp[SIZE] = { 0,1,2,3,4 };

	for (int i = 5; i <= N; i++) {
		dp[i] = dp[i - 3] * 3;
	}

	printf("%d", dp[N]);

	return 0;
}