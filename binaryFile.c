#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fr, *fw;
    char buffer[1024]; // Buffer for block-based reading as it is fast and efficient for large files
    size_t bytesRead;

    // Open files in binary mode
    fr = fopen("source_file.bin", "rb");
    if (fr == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    fw = fopen("destination_file.bin", "wb");
    if (fw == NULL) {
        printf("Error opening destination file.\n");
        fclose(fr);
        return 1;
    }

    // Copy file contents
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), fr)) > 0) {
        fwrite(buffer, 1, bytesRead, fw);
    }

    // Close the files
    fclose(fr);
    fclose(fw);

    printf("File copied successfully.\n");
    return 0;
}
