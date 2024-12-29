from requests import get

def getRandomNum(min, max, count):
    r = get(f"http://www.randomnumberapi.com/api/v1.0/random?min={min}&max={max}&count={count}").text
    res = r[1:-2].split(",")
    return list(int(x) for x in res)

def randint(min=0, max=10000, count=1):
    for i in getRandomNum(min, max, count):
        yield i

#example of usage
a = [x for x in randint(count=10)]
print(a)