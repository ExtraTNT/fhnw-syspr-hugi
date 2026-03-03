#include <stdio.h>

int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }

    for (char** p = argv; *p != NULL; p++){
        printf("%lx: %s\n", p - argv, *p);
    }

    return 0;
}
