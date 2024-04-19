#include <stdio.h>


int main()
{
    FILE*f = freopen("output.txt", "w", stdout);

    if (f == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }
    printf("Hello World\n");

    fclose(f);

    return 0;
}