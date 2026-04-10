#include <stdio.h>

int main()
{
    char source_file[100], dest_file[100];
    FILE *source, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source_file);

    printf("Enter destination file name: ");
    scanf("%s", dest_file);

    source = fopen(source_file, "r");
    if (source == NULL)
    {
        printf("Cannot open source file.\n");
        return 1;
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL)
    {
        printf("Cannot open destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(dest);

    return 0;
}