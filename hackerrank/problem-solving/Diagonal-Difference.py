n = int(input())
main = []
for i in range(n):
    val = list(map(int, input().split()))
    main.append(val)

first =0
last = 0
for i in range(n):
    first += main[i][i]
    last += main[i][n-i-1]


print(abs(first-last))
