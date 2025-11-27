#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    string name;
    string number;
} person;

int main(void) {
    person people[3];

    people[0].name = "David";
    people[0].number = "+1-617-495-100";

    people[1].name = "John";
    people[1].number = "+1-949-468-2750";
    
    people[2].name = "Yuliia";
    people[2].number = "+1-617-495-100";

    string input = get_string("Search: ");

    for (int i = 0; i < 3; i++){
        if (strcmp(people[i].name, input) == 0 || strcmp(people[i].number, input) == 0) {
            printf("Found at index: %i\n", i + 1);
            return 0;
        }
    };

    printf("Not found\n");
    return 1;
}