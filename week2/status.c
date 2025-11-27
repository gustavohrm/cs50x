#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {
    if (argc < 2) {
        printf("Missing arguments\n");
        return 404;
    };
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 200;
}