#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<direct.h>

int main() {
    FILE* list = fopen("list.txt", "a");
    int i = 1;

    while (i > 0) {
        char name[1000];
        scanf(" %[^\n]s", name);
        _mkdir(name);
        fprintf(list, "%s\n", name);
    }

    fclose(list);
    return 0;
}