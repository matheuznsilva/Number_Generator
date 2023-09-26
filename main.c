#include "generator.h"

int main(int argc, char *argv[]){
    int num, i = 0, N = atoi(argv[1]);
    int *vector = (int*)malloc(N * sizeof(int));

    generator(vector, N);

    FILE* arc = fopen("exit.txt", "w");

    for(int i=0; i<N; i++){
        fprintf(arc,"%d ", vector[i]);
    }

    fclose(arc);
}
