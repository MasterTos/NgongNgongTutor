#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int width, height, depth;
}Box;

void boxFixArray(FILE *inFile) {
    Box box[10000];
    float sum = 0;
    int size = 0;
    int i;
    for(i = 0 ; fscanf(inFile, "%s %d %d %d", &box[i].name, &box[i].width, &box[i].height, &box[i].depth) != EOF ; i++) {
        size++;
        sum += box[i].width * box[i].height * box[i].depth;
    }
    float avg = sum / size;
    printf("Average volume:%.2f\n", avg);
    printf("Larger than average volume:\n");
    for( i = 0 ; i < size ; i++) {
        float volume = box[i].width * box[i].height * box[i].depth;
        if(volume > avg)
            printf("%d x %d x %d\n", box[i].width, box[i].height, box[i].depth);
    }
}

void boxReadFile2Times(FILE *inFile) {
    Box box;
    float sum = 0;
    int size = 0;
    int i;
    for(i = 0 ; fscanf(inFile, "%s %d %d %d", &box.name, &box.width, &box.height, &box.depth) != EOF ; i++) {
        sum += box.width * box.height * box.depth;
        size++;
    }
    float avg = sum / size;
    printf("Average volume:%.2f\n", avg);
    printf("Larger than average volume:\n");

    rewind(inFile);
    for(i = 0 ; fscanf(inFile, "%s %d %d %d", &box.name, &box.width, &box.height, &box.depth) != EOF ; i++) {
        float volume = box.width * box.height * box.depth;
        if(volume > avg)
            printf("%d x %d x %d\n", box.width, box.height, box.depth);
    }
}

int main() {
    FILE *boxFile = NULL;
    boxFile = fopen("boxes.txt","r");
    if(boxFile == NULL) {
        printf("Cannot open file\n");
        return -1;
    }
    //boxFixArray(boxFile);
    //boxReadFile2Times(boxFile);
    fclose(boxFile);
    return 0;
}
