#include <stdio.h>
#include <string.h>

int main() {
    int uniques = 0;
    int names = 0;
    scanf("%d", &names);
    char firstnames[names][21];
    char lastnames[names][21];
    char finalnames[names][43];

    for(int i = 0; i < names; i++) {
        scanf("%20s", &firstnames[i]);
    }

    for (int i = 0; i < names; i++) {
        scanf("%20s", &lastnames[i]);
    }

    for (int i = 0; i < names; i++) {

        strcpy(finalnames[i], firstnames[i]);
        strcat(finalnames[i], "P");
        strcat(finalnames[i], lastnames[i]);

        puts(finalnames[i]);
    }

    for (int i = 0; i < names; i++) {
        for (int j = i + 1; j < names; j++) {
            if(strcmp(finalnames[i], finalnames[j]) == 0)
                break;
        if (j == names-1)
            uniques ++;
        }
        

    }

    if (names > 0) {
    printf("%d", uniques + 1);
    } else {
        printf("0");
    }
    return 0;
}