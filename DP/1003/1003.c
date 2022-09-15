#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 45

void fibonacci(int n);

int count0[N] = { 1,0,1 };
int count1[N] = { 0,1,1 };

int main() {
	int T,n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		fibonacci(n);
	}

	return 0;
}

void fibonacci(int n) {
	if (3 <= n) {
		for (int i = 3; i < n+1; i++) {
			count0[i] = count0[i - 1] + count0[i - 2];
			count1[i] = count1[i - 1] + count1[i - 2];
		}
	}

	printf("%d %d\n", count0[n], count1[n]);
}

