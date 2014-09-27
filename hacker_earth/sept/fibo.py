# http://www.hackerearth.com/september-clash/algorithm/little-monty-and-fibonacci-1/


MAX = 1010
fibs = list()
fibs.append(0)
fibs.append(1)
fibs.append(1)
for x in xrange(3, MAX):
    fibs.append(fibs[-1] + fibs[-2])

ret = [[0] * MAX] * MAX
for x in xrange(1, MAX):
    for j in xrange(1, MAX):
        ret[x][j] = ret[x][j - 1]
        if fibs[j] % fibs[x] == 0:
            ret[x][j] += 1


t = int(raw_input())
for _ in xrange(t):
    n = int(raw_input())
    print ret[n][n]
