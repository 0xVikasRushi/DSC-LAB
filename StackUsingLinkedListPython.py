class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Stack:
    def __init__(self):
        self.top = None

    def push(self, x):
        node = Node(x)
        node.next = self.top
        self.top = node

    def isEmpty(self):
        if self.top is None:
            return True
        return False

    def pop(self):
        if self.isEmpty():
            print("Stack underflow")
            return
        temp = self.top
        self.top = temp.next
        temp.next = None
        return temp.data

    def peek(self):
        if self.isEmpty():
            print("Stack underflow")
            return
        print(self.top.data)

    def display(self):
        temp = self.top
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
        print()


if __name__ == '__main__':
    s = Stack()
    try:
        while 1:
            print("1.PUSH \n2.POP\n3.Display\n4.PEEK")
            choice = int(input("Enter your choice: "))
            if choice == 1:
                s.push(int(input("Enter the data you want to insert: ")))
            elif choice == 2:
                print(s.pop())
            elif choice == 3:
                s.display()
            elif choice == 4:
                s.peek()
            else:
                print("You choose exit")
                exit(0)
    except ValueError:
        print("wrong type of data entered")
    except KeyboardInterrupt:
        print("Program stopped")
    except AttributeError:
        print("Does")
