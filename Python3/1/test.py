if __name__=="__main__":
    print("スクリプト実行時に実行されます")
a=2
if a%15==0:
    print("FizzBuzz")
elif a%5==0:
    print("Buzz")
elif a%3==0:
    print("Fizz")
else:
    print(a)

print()

for item in [0,1,2,3,4,5]:
    print(item)

print()

for item in range(0,6):
    print(item)

print()

def fibo(n):
    if n == 0 or n == 1: return 1
    return fibo(n - 1) + fibo(n - 2)

test_str = "012"
test_str += "345"
test_str += "678"
test_str += "9"

print(test_str)

item = 100
test_str = str(item)

print(test_str + '円ショップ')

item += 8

print(str(item)+'円ショップ')
