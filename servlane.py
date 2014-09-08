import sys

def vehicle_width_possible(st,end,lane):
	return min(lane[st:end+1])


if __name__ == '__main__':
	N,T = map(int,raw_input().split())
	lane = map(int,raw_input().split())
	for l in sys.stdin.readlines():
		st,end = map(int,l.split())
		print vehicle_width_possible(st,end,lane)