#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>
//тут будет реализация функций
typedef double (*operation)(double, double);
double sum(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double divv(double a, double b);
double power(double a, double b);
double calculator(double a, double b, operation oper);
void unit_tests();
void menu();
double get_number(const char* num);
char get_oper();

extern operation sum_ptr;
extern operation sub_ptr;
extern operation mul_ptr;
extern operation divv_ptr;
extern operation power_ptr;
