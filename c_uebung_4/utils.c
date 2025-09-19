#include <stdio.h>
#include <stdlib.h>



#define FREE(p) if (p) {free(p); p = NULL;}

#define LEN 10

#if 0


/*
** In this variant we create the array on the heap, 
** which is a nice solution.
*/
int *
createArrayOnHeap() {

    int i;

    int *a = malloc(LEN*sizeof(int));
    if (!a) {
        return NULL;
    }

    for (i=0; i<LEN; i++)
        a[i] = i+1;

    return a;

} /* createArrayOnHeap */





// funktion zum erstellen von 10 int
// array mit Zahlen 1-10 befüllen
void aub(int **array){

    *array = malloc(sizeof(int)*10);

    if (!*array) {
        perror("malloc failed");
        exit(1);
    }
    for (int i = 0; i < 10; i++)
    {
        (*array)[i] = (int)(i + 1);
    }
    
}




int main(void){
    int *array = NULL;
    aub(&array);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    free(array);    
    return 0;
}