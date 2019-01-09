input_number = int(input())

for i in range(input_number):
    word = str(input())
    sub_string_even , sub_string_odd = ''
    for j in range(len(word)):
        if word.index[j] % 2 == 0:
            sub_string_even = sub_string_even+ word[j]
        elif word.index[j] %2 ==1:
            sub_string_odd = sub_string_odd + word[j]
    print('{}  {}'.format(sub_string_even,sub_string_odd))       