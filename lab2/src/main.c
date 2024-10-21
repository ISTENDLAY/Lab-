#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define constE 2.7182

double f(double x);
void while_loop(double h);
void for_loop(double h);
FILE* gnuplot_init(char title[], char func_name[]);
void noob_level(double h);
void pro_level();
double str2float(char *str, int point);


int main(int argc, char **argv){
    char* difficulty = argv[1];
    if (!strcmp(difficulty,"-r")){
        double h = strtof(argv[2], NULL);
        noob_level(h);
    }else if(!strcmp(difficulty,"-m")){
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

void noob_level(double h){ //difficulty: Rare
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
    fprintf(gnuplot, "set output '../img/plot.gif'\n", title);
    fprintf(gnuplot, "set title '%s'\n", title);
    fprintf(gnuplot, "set xlabel 'x'\n");
    fprintf(gnuplot, "set ylabel '%s'\n", func_name);
    fprintf(gnuplot, "set xrange[0:2]\n");
    fprintf(gnuplot, "set yrange[-0.45:1.4]\n");
    fprintf(gnuplot, "set grid\n");
    return gnuplot;
}


double str2float(char *str, int point){
    double res = 0;
    int len = strlen(str);
    if(point){
        int point = strcspn(str, ".");
        int i = 0;
        int d = point-1;
        for(i;i<len-1;i++){
            if(i==point){
                continue;
            }
            res+=(*(str+i)-'0')*pow(10.0f, d);
            d--;
        }
    }else{
        int d = len-2;
        for(int i=0; i<len-1;i++){
            res+=(*(str+i)-'0')*pow(10.0f, d);
            d--;
        }
    }
    return res;
}