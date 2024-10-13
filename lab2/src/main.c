#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define constE 2.7182

double f(double x);
void while_loop(double h);
void for_loop(double h);
FILE* gnuplot_init(char title[], char func_name[]);
void noob_level();
void pro_level();


int main(){
    char difficulty[9];
    printf("Choose a difficulty of task [Rare/Medium]: ");
    scanf("%s", &difficulty);
    if (!strcmp(difficulty,"Rare")){
        noob_level();
    }else if(!strcmp(difficulty,"Medium")){
        pro_level();
    }
}

void pro_level(){ //difficulty: Medium
    double h;
    printf("Choose a step(0.01 is recommended): ");
    scanf("%lf", &h);
    FILE* plot = gnuplot_init("custom function", "f(x)");
    for (int j = 0; j*h <= 2; j++){
        fprintf(plot,"plot '-' with lines lw 2 title 'f(x)'\n");
        for (int i = 0; i<=j;i++){
            fprintf(plot, "%lf %lf\n", i*h,f(i*h));
        }
        fprintf(plot,"EOF\n");
        fflush(plot);
    }
}

void noob_level(){ //difficulty: Rare
    double h;
    printf("Choose a step: ");
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

FILE* gnuplot_init(char title[], char func_name[]){
    FILE* gnuplot = popen("gnuplot -persistance", "w");
    fprintf(gnuplot, "set terminal gif animate delay 4\n");
    fprintf(gnuplot, "set output '/home/istend/All_code/University/Labs/lab2/img/plot.gif'\n", title);
    fprintf(gnuplot, "set title '%s'\n", title);
    fprintf(gnuplot, "set xlabel 'x'\n");
    fprintf(gnuplot, "set ylabel '%s'\n", func_name);
    fprintf(gnuplot, "set xrange[0:2]\n");
    fprintf(gnuplot, "set yrange[-0.45:1.4]\n");
    fprintf(gnuplot, "set grid\n");
    return gnuplot;
}