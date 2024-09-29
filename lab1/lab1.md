Вот оформленный текст с использованием Markdown:


# Лабораторная работа №1

## Задание
1. Вывести разность наибольшего и наименьшего из параметров d1, d2, d3 в случае, если номер наибольшего нечётный, и частное наименьшего и наибольшего иначе.
2. Сделайте свою программу выполняющейся до тех пор, пока пользователь не введёт все нулевые значения.
3. Реализуйте сохранение вывода программы и пользовательского ввода в лог-файл.
4. Реализуйте “защиту от дурака” – обработайте пользовательский ввод таким образом, чтобы выполнение алгоритма программы невозможно было нарушить некорректным пользовательским вводом.

## Проделанная работа
По  данной задаче я составил блок-схему:<br><br>
![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab1/img/diagram.png?raw=true)

Далее написал программу, действующую по данной логике. С помощью стандартных функций `stdio` и цикла `do-while` я реализовал запись в файл, пока не будут введены все нулевые значения: <br><br>
![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab1/img/output_example.png?raw=true) <br><br>
"Защита от дурака" пользовательского ввода основана на следующем принципе:
- Входные данные принимаем в виде строк.
- Проверяем валидность строки (наличие только символов цифр, а также одной точки для нецелых чисел), возвращаем 1 (True), а также количество точек (0 для целых или 1 для вещественных). В случае невалидности просим ввести число повторно.
- Далее, пользуясь свойствами десятичной системы исчисления, каждую цифру умножаем на 10 в степени порядка этой цифры.<br><br>
  *пример защиты от неверного пользовательского ввода*
  ![alt text](https://github.com/ISTENDLAY/Labs/blob/main/lab1/img/wrong_input.png?raw=true) <br><br>

## Источники
- [TutorialsPoint: C Standard Library Functions](https://www.tutorialspoint.com/c_standard_library/c_function_fclose.htm)
- [Program For You: Block Diagram Editor](https://programforyou.ru/block-diagram-redactor)
- [GeeksforGeeks: C Program for Char to Int Conversion](https://www.geeksforgeeks.org/c-program-for-char-to-int-conversion/#:~:text=Each%20character%20in%20C%20has,'0'%20from%20the%20character.)
- [HubSpot: Standard Library C Functions](https://blog.hubspot.com/website/standard-library-c-functions)

