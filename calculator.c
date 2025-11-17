// Лабораторная 5.
// - указатели на функции
// - структуры
#include "funct_calc.h"
#include <math.h>

int main()
{
    // --- Задание 1. Указатель на функцию. "Калькулятор" ---
    // Напишите функции:
    // 1) sum - принимает два значения типа double и возвращает сумму
    // 2) sub - разность
    // 3) mul - произведение
    // 4) div - результат деления
    // 5) возведение в степень - можно воспользоваться pow() из <math.h>
    
    // не забудьте unit-тесты
    
    // Сделайте интерфейс калькулятора.
    // Пока пользователь хочет пользоваться калькулятором,
    // он может вводить два значения и знак операции;
    // результат выводится на экран.
    // Если ввод некорректный, нужно сообщить об этом пользователю и продолжить работу

    unit_tests();
    double a = 15.0, b = 5.0;
    operation *operArr = malloc(5 * sizeof(operation));
    operArr[0] = &sum;
    operArr[1] = &sub;
    operArr[2] = &mul;
    operArr[3] = &divv;
    operArr[4] = &power;
    
    char* names_operation[] = {"summa", "substraction", "multiplication", "division", "raising to a power"};
    for (int i = 0; i < 5; i++){
        double result = calculator(a, b, operArr[i]);
        printf("%.1f and %.1f - %s: %.1f\n", a, b, names_operation[i], result);
    }
    free(operArr);

    printf("calculater");
    bool cont_process = true;
    while (cont_process){
        menu();
        char symbol = get_oper();
        if (symbol == '!'){
            printf("stop calculating");
            break;
        }
        double x, y;
        x = get_number("first number:\n");
        y = get_number("second number:\n");

        operation selected_oper = NULL;
        char* name_oper = "";
        char symbol_oper = symbol;
        switch(symbol){
            case '+': 
                selected_oper = &sum; 
                name_oper = "summa";
                break;
            case '-': 
                selected_oper = &sub;
                name_oper = "substraction";
                break;
            case '*': 
                selected_oper = &mul; 
                name_oper = "multiplication";
                break;
            case '/': 
                selected_oper = &divv; 
                name_oper = "division";
                break;
            case '^': 
                selected_oper = &power; 
                name_oper = "raising to a power";
                break;
            default:
                printf("error, incorrect input");
                return 1;
        }
        if (selected_oper != NULL){
            double result = calculator(x, y, selected_oper);
            printf("\n result: %.1f %c %.1f = %.1f\n", x, symbol, y, result);
        }
        char continue_calculating;
        printf("\n continue calculating? (y/n):\n");
        scanf(" %c", &continue_calculating);
        if (continue_calculating == 'n' || continue_calculating == 'N'){
            cont_process = false;
            printf("exit, best wishes!");
        }
    }
    
    return 0;
}