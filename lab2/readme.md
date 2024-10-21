Я написал программу, которая в зависимости от режима может создавать данные для построения графика, либо .gif анимации.

## Для построения графика:
```bash
./main -r [step h] > graph.txt # h - вещественное число, r от rare
./plot.gpi
```
![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab2/img/изображение.png?raw=true)

### Блок схема для создания данных используя цикл while:
![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab2/img/diagram.png?raw=true

## Для создания .gif анимации:
```bash
./main -m # m от medium
```
![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab2/img/Screenshot_20241021_110455.png?raw=true)

### График функции:
![animation](https://github.com/ISTENDLAY/Labs/blob/main/lab2/img/plot.gif?raw=true)

## Используемые материалы:
- [Stack Overflow: arguments to main in C](https://stackoverflow.com/questions/4176326/arguments-to-main-in-c)
- [Stack Overflow: how to convert string to float](https://stackoverflow.com/questions/7951019/how-to-convert-string-to-float)
- [Stack Overflow: making C code plot a graph automatically](https://stackoverflow.com/questions/3521209/making-c-code-plot-a-graph-automatically)
- [YouTube: DF0dCOllLFI](https://www.youtube.com/watch?v=DF0dCOllLFI)

