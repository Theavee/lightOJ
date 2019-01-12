n,m = map(int, input().split())
line = input().split(' ')
A=set(input().split(' '))
B=set(input().split(' '))

happiness = 0
for i in line:
    if i in A:
        happiness+=1
    elif i in B:
        happiness-=1

print(happiness)