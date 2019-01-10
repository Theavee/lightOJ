how_many_times = int(input())

for i in range(how_many_times):
    word = str(input())
    print('{}  {}'.format(word[::2], word[1::2]))