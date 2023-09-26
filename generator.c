#include "generator.h"

void generator(int *vector, int N){
    int i=0, num;
    
    srand(time(NULL));
    
    while(i < N){
        num = rand() % (N*10);
        if(i == 0 && num != 0){
            vector[i]=num;
            i++;
        } else if(num != 0){
            if(!check(vector, num, i)){
                vector[i] = num;
                i++;
            }
        }
    }
}

int check(int *vector, int num, int index){
    for(int i = 0; i < index; i++){
        if(vector[i] == num){
            return 1;
        }
    }
    return 0;
}