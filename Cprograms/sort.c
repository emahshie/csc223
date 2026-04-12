#include <stdio.h>
#include "SORT.H"

#define BUFSIZ 130
#define ERROR -1
#define MAX_SIZE 50


selsort(items, count)
int items[];
int count;
{
    int i, j, min, temp;
    for (i = 0; i < count - 1; i++) {
        min = i;
        for (j = i + 1; j < count; j++) {
            if (items[j] < items[min]) min = j;
        }
        temp = items[min];
        items[min] = items[i];
        items[i] = temp;
    }
}

main(argc, argv)
int argc;
char *argv[];
{
    FILE *infp, *outfp;
    char ibuf[BUFSIZ], obuf[BUFSIZ];
    int data[MAX_SIZE];
    int count, i;

    if (argc != 3) {
        puts("Usage: sort input.dat output.dat\n");
        return;
    }

    if ((infp = fopen(argv[1], "r")) == NULL) {
        puts("Can't open input file\n");
        return;
    }

    count = 0;
    while (count < MAX_SIZE && (fscanf(infp, "%d", &data[count]) != EOF)) {
        count++;
    }

    fclose(infp);

    selsort(data, count);

    if ((outfp = fopen(argv[2], "w")) == NULL) {
        puts("Can't create output\n");
        exit();
    }

    for (i = 0; i < count; i++) {
        /* Use a simple printf-style write */
        fprintf(outfp, "%d\n", data[i]);
    }

    fclose(outfp);
    puts("Done. File saved.\n");
}