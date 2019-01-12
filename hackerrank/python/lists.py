class Lists(object):

    def __init__(self):
        self.lists = []

    def insert(self,position,value):
        self.lists.insert(position,value)

    def print(self):
        print(self.lists)

    def remove(self, value):
        self.lists.remove(value)

    def append(self,value):
        self.lists.append(value)

    def sort(self):
        self.lists.sort()

    def reverse(self):
        self.lists.reverse()

    def pop(self):
        self.lists.pop()


if __name__ == "__main__":
    n = int(input())
    queries = []
    
    for i in range(n):
        queries.append(input().split( ))

    lists = Lists()
    for i in range(0,len(queries)):
        if queries[i][0] == "insert":
            lists.insert(int(queries[i][1]), int(queries[i][2]))

        elif queries[i][0] == 'print':
            lists.print()
        
        elif queries[i][0] == 'remove':
            lists.remove(int(queries[i][1]))

        elif queries[i][0] == 'append':
            lists.append(int(queries[i][1]))
        
        elif queries[i][0] == 'sort':
            lists.sort()

        elif queries[i][0] == 'reverse':
            lists.reverse()

        elif queries[i][0] == 'pop':
            lists.pop()

