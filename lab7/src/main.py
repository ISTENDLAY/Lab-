def count(l):
    n = 0
    for element in l:
        n+=1
        if isinstance(element, list):
            n+= count(element)
    return n

def f(i):
    if i==1: return 1
    if i==2: return -1/8
    else:
        return (i-1)*f(i-1)/3 + (i-2)*f(i-2)/4

print(f(10))