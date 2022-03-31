#include <stdio.h>
#include <conio.h>
#define MULT(a,b) a*b
#define DIV(a,b) a/b
#define SUM(a,b) a+b
#define SUB(a,b) a-b

int selectOption(){
    char option;
    printf("Ingresar tipo de operacion a realizar: \na- Suma\nb- Resta \nc- Multiplicacion \nd- Division \nesc- Salir\n");

    do{
        option = getch();
    } while(option !='a' && option != 'A' && option != 'b' && option != 'B' && 
    option != 'c' && option != 'C' && option != 'd' && option != 'D' && (int)option != 27);
    
    return option;
}

int main(){
    char option;
    float num1, num2, result;
    printf("Ingrese el primer valor\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%f",&num2);

    do{
        option = selectOption();
        switch (option)
        {
            case 'A': case 'a': 
                printf("El resultado de la suma es: %.2f\n", SUM(num1,num2));
                break;
            case 'b': case 'B':
                printf("El resultado de la resta es: %.2f\n", SUB(num1,num2));
                break;
            case 'c': case 'C':
                printf("El resultado de la multiplicacion es: %.2f\n", MULT(num1,num2));
                break;
            case 'd': case 'D':
                if(num2!=0){
                    printf("El resultado de la division es: %.2f\n", DIV(num1,num2));
                }
                else{
                    printf("El resultado es indefinido ya que el denominador es igual a 0\n");
                }
                break;
        }
    } while((int)option != 27);
    return 0;
}
