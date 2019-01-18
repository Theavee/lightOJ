items = list(map(int, input().split()))
items.sort()
first = 0
second = 0

for i in range(4):
    first += items[i]
    second += items[i+1]

print('{} {}'.format(first,second))
