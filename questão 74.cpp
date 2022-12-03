#include <stdio.h>

int main() {
    int tabu;
    
    for(int x = 1;x <= 10;x++){
        tabu = 0;
        for(int y = 1; y <= 10; y++){
            tabu = x * y;
            printf("%d x %d = %d\n",x,y,tabu);
        }
        printf("\n");
    }
    
    return 0;
}
