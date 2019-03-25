#include <stdio.h>

int bin_search(int a[], int item)
{
	int low, high, mid, guess;

	low = 0;
	high = sizeof(a) - 1;

	while (low <= high) {
		mid = (low + high) / 2;
		guess = a[mid];
		if (guess == item) {
			return mid;
		}
		if (guess > item) {
			high = mid - 1;		
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int i;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (i = 0; i < 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("%d\n", a[bin_search(a, 2)]);
}
