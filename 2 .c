include <stdio.h>
void main()
{
    int n;
    printf("Introduce un numero");
    scanf("%i" &n);
    
    if(n% 2 == 0){
        printf("el numero es par");
    }
    else(n% 2 != 0){
        printf("el numero es impar");
    }
}
