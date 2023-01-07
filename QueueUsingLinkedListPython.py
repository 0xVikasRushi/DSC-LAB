class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Queue:
    def __init__(self):
        self.rear = self.front = None

    def isEmpty(self):
        if self.rear is None:
            return True
        return False

    def enQueue(self, x):
        node = Node(x)
        if self.rear is None:
            self.rear = self.front = node
            return
        self.rear.next = node
        self.rear = node

    def deQueue(self):
        if self.isEmpty():
            print("Queue underflow")
            return
        temp = self.front
        self.front = temp.next
        if self.front is None:
            self.rear = self.front = None

    def display(self):
        temp = self.front
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
        print()


if __name__ == '__main__':
    q = Queue()
    try:
        while 1:
            print("1.EnQueue\n2.deQueue\n3.display")
            choice = int(input("Enter your choice: "))
            if choice == 1:
                q.enQueue(int(input("Enter the value to be inserted: ")))
            elif choice == 2:
                q.deQueue()
            elif choice == 3:
                q.display()
            else:
                print("You choose exit")
                exit(0)
    except ValueError:
        print("wrong type of data entered")
    except KeyboardInterrupt:
        print("Program stopped")
    except AttributeError:
        print("Attribute error")
