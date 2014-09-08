import sys

def retSumEvenFib(limit):
	fib3 = 2
	fib6 = 0
	sumFib = 0
	res = 2
	while res < limit:
		sumFib += res
		res = fib6 + 4*fib3
		fib6 = fib3 
		fib3 = res
	return sumFib

if __name__ == '__main__':
	t = raw_input()
	for l in sys.stdin.readlines():
		print retSumEvenFib(int(l))
