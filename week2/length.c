#include <cs50.h>
#include <stdio.h>

int stringLength(string);

int main(void) {
    string name = get_string("Name: ");
    int length = stringLength(name);
    printf("%i\n", length);
}

int stringLength(string s) {
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    };
    return n;
}
