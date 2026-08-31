#include <stdio.h>
int main() {
	int q;
	printf("Enter your Row Number:");
	scanf("%d",&q);
    for (int i = 0; i < q; i++) {
        for (int j = 0; j <= i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    return 0;
}