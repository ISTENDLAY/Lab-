from lab7 import count, f
from lab8 import make_calc, multistart
from lab9 import randint
import typer

app = typer.Typer()

@app.command()
def count_elements(l: str):
    lst = eval(l)
    result = count(lst)
    typer.echo(f"Количество элементов: {result}")

@app.command()
def calculate(i: int):
    result = f(i)
    typer.echo(f"f({i}) = {result}")

@app.command()
def make_calculator(op: str, initial: float):
    calc = make_calc(op, initial)
    while True:
        num = typer.prompt("Введите число (или 'exit' для выхода)", type=str)
        if num == "exit":
            break
        result = calc(float(num))
        typer.echo(f"Текущее значение: {result}")

@app.command()
def generate_random(min: int = 0, max: int = 10000, count: int = 1):
    """Сгенерировать случайные числа."""
    numbers = [x for x in randint(min=min, max=max, count=count)]
    typer.echo(f"Сгенерированные числа: {numbers}")

if __name__ == "__main__":
    app()