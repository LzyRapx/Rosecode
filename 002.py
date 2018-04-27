#coding:utf-8

def fib(n):
    a,b = 1,1
    for i in range(n-1):
        a,b = b,a+b
    return a
def countDigital(n):
    s=0
    while(n>0):
        s=s+(n%10)
        n=int(n/10)
    return s

if __name__ == "__main__":
	i = 1
	check = False
	while (check == False):
		s = fib(i)
		if (countDigital(s) > 100):
			check = True
		i = i + 1
	print s