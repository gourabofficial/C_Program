#include <stdio.h>

void TOH(int n, char source, char destination, char auxiliary) {
    if (n >= 1) {
        TOH(n - 1, source, auxiliary, destination);
        printf("Move disk from %c to %c\n", source, destination);
        TOH(n - 1, auxiliary, destination, source);
    }
}

int main() {
    int n;

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the Tower of Hanoi function
    TOH(n, 'A', 'C', 'B');

    return 0;
}
