#include <stdio.h>
#include <math.h>
#define constE 2.7182

double f(double x);
void while_loop(double h);
void for_loop(double h);

int main(){
    double h;
    scanf("%lf", &h);
    for_loop(h);
}

double f(double x){
    if(0<=x&&x<=1){
        return cos(x+pow(x,3));
    }else if( 1<x&&x<=2){
        return pow(constE, -x*x) - x*x + 2*x;
    }

}

void while_loop(double h){
    double a = 0;
    while(a<=2){
        printf("%lf %lf\n", a, f(a));
        a+=h;
    }
}

void for_loop(double h){
    for (double i = 0; i<=2; i=i+h){
        printf("%lf %lf\n", i, f(i));
    }
}