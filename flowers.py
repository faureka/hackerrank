import sys

if __name__ == '__main__':
	n,k = map(int,raw_input().split())
	for l in sys.stdin.readlines():	
		price = map(int,list(l.split()))
		# sorted(price,reverse = True)
		price.sort(reverse = True)
		print price
		final = 0
		addcost = 0
		for i in xrange (n):
			final += price[i] * ((addcost // k )+ 1)
			addcost += 1
		print final

