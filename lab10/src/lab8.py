def make_calc(op, initial):
    def calc(num):
        nonlocal op, initial
        if op=="*":
            initial*=num
        elif op=="/":
            initial/=num
        elif op=="+":
            initial+=num
        elif op=="-":
            initial-=num
        return initial
    return calc





def multistart(func):
    def wrapper(*args):
        res = []
        for i in args:
            res.append(func(i))
        return res
    return wrapper

@multistart
def f1(x):
    return x**2

@multistart
def f2(x):
    return x**3

if __name__=="__main__":
    calc = make_calc("*", initial=1)
    print(calc(5))
    print(calc(2))

    print(f1(1,2,3,4,5),"\n", f2(1,2,3,4,5))
    