#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int sides;
	int i;
	int n;

	if (argc < 2) {
		goto help;
	} else {
		sides = atoi(argv[1]);
	}

    srand(time(0));
	n = (rand() % sides + 1);
	printf("%d\n", n);

	return 0;

	help:
		puts("USAGE:");
		puts("\tdice <# of sides>");
}
