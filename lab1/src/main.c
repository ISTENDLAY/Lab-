/*1.Вывести разность наибольшего и наименьшего из параметров d1, d2, d3 в случае, если номер наибольшего нечётный,
 и частное наименьшего и наибольшего иначе.
 2.Сделайте свою программу выполняющейся до тех пор, пока пользователь не введёт все нулевые значения.
 3.Реализуйте сохранение вывода программы и пользовательского ввода в лог-файл.
 4.Реализуйте “защиту от дурака” – обработайте пользовательский ввод таким образом, 
 чтобы выполнение алгоритма программы невозможно было нарушить некорректным пользовательским вводом.*/
 #include <stdio.h>
 #include <string.h>
 #include <math.h>

int valid_check(char *str, int* res){
    int points = 0;
    int i = 0;
    int len = strlen(str);
    for(i;i<len-1;i++){
        if(*(str+i)=='.'){points++;}
        if(points>1){
            res[0]=0;
            res[1]=0;
            return 0;
        }
        if(!((*(str+i)>='0'&&*(str+i)<='9')||*(str+i)=='.')){
            res[0]=0;
            res[1]=0;
            return 0;
        }
    }
    res[0]=1;
    res[1]=points;
    return 1;
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

 double usrin(char* description){
     char a[100];
     int res[2];
     printf("%s", description);
     fgets(a, sizeof(a), stdin);
     valid_check(a, res);
     while(!res[0]){
         printf("%s", description);
         fgets(a, sizeof(a), stdin);
         valid_check(a, res);
     }
     double output = str2float(a, res[1]);
     return output;
}


 int main(){
    double d1, d2, d3;
    double res;
    FILE* log = fopen("log.txt", "a");
    do{
        d1 = usrin("Input a 1st number: ");
        d2 = usrin("Input a 2nd number: ");
        d3 = usrin("Input a 3rd number: ");
        if (!d1&&!d2&&!d3){
            return 0;
        }
        if (d2>d1 && d2>d3){
            if (d1<d3){
                res = d1/d2;
            }
            else{
                res = d3/d2;
            }
        }
        else if(d1>d2&&d1>d3){
            if(d2<d3){
                res = d1-d2;
            }
            else{
                res = d1-d3;
            }
        }
        else{
            if(d1<d2){
                res = d3-d1;
            }
            else{
                res = d3-d2;
            }
        }
        printf("Result = %lf\n", res);
        fprintf(log, "Input: %lf %lf %lf\nOutput: %lf\n\n", d1,d2,d3,res);
    }
    while (d1||d2||d3);
    return 0;
 }