/* practica 7
Ariel Anaya ejercicio 3
Calculadora */

#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, res = 0;
    int op;
    
    printf("Menu: \n1: suma \n2: resta \n3: multiplicacion \n4: division \n5: potenciacion \n 6: radicación \n0: fin");
    printf("Elige una opcion");
    scanf("%d", &op);
    
    if(op != 0){
        printf("ingresa un numero");
        scanf("%d", &a);
        printf("ingresa otro numero");
        scanf("%d", &b);
    }
    
    
    
    switch(op){
        
        case 1:
        res = a + b;
        printf("%d", res);
        break;
        
        case 2:
        res = a - b;
        printf("%d", res);
        break;
        
        case 3:
        res = a * b;
        printf("%d", res);
        break;
        
        case 4:
        res = a / b;
        printf("%d", res);
        break;
        
        case 5:
        res = pow(a, b);
        printf("%d", res);
        break;
        
        
    }
    
    if(op==6){
        printf("ingrese un numero");
        scanf("%d", &a);
        switch(op){
            case 6:
            res = sqrt(a);
            printf("%d", res);
            break;
        }
    }
}
