n = int(input())
main_list = []
for i in range(n):
    items = input().split(' ')
    main_list.append(items)

name = input()
for i in range(0,len(main_list)):
    if name == main_list[i][0]:
        total = float(float(main_list[i][1])+float(main_list[i][2])+float(main_list[i][3]))/3
        print("{0:.2f}".format(total))
        break