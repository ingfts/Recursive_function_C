
#include <stdio.h> 



int decrease (int value){
    if (value == 0){
        printf("%d ", value); 
    } else {
        printf("%d ", value); 
        decrease (value - 1); 
    }
}

int main (){
    
    int x; 
    int res; 
    printf ("Insert a number: "); 
    scanf ("%d", &x); 
    
    res = decrease(x); 
}