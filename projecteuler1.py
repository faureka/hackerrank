import sys
def retsumnum(num,l):
	return num*(l/num)*((l/num)+1)/2

if __name__ == '__main__':
	t = raw_input()
	for l in sys.stdin.readlines():
			sum1 = retsumnum(3,int(l)-1)
			sum2 = retsumnum(5,int(l)-1)
			sum3 = retsumnum(15,int(l)-1)
			print sum1 + sum2 - sum3
