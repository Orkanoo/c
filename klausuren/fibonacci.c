#include 'stdio.h' // 1. Fehler <stdio.h> ist richtig

#define FiboSet 10;


void fiboGen(int, int) // 2. kein semikolon
int fiboNum [FiboSet]; // 3. kein rückgabetyp
int main()
{
int i;
fiboGen(FiboSet, *fiboNum);

for (i=0;i<FiboSet; i++)
printf("%d: %d\n",i+1, (fiboNum+i));
}
int fiboGen(int set, int* num){
num = 1;
*(num+1) = 1;
for(int i==2, i<set, i++){
*(num+i) = *(num+i-2) + *(num+i-1); }
}