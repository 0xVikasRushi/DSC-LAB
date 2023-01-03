class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class List:
    def __init__(self):
        self.head = None

    def insertAtBeg(self,value):
        newNode = Node(value)
        newNode.next = self.head
        self.head = newNode

    def insertAtEnd(self,value):
        newNode = Node(value)
        if self.isEmpty():
            self.head = newNode
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = newNode

    def isEmpty(self):
        if self.head is None:
            return True
        return False

    def remove(self,value):
        if self.isEmpty():
            return
        temp = self.head
        while temp:
            if temp.data == value:
                break
            prev = temp
            temp = temp.next
        else:
            print("Element not found!!!")
            return
        prev.next = temp.next
        temp = None


    def display(self):
        temp = self.head
        while temp:
            print(temp.data,end=" ")
            temp = temp.next
        print()


l = List()
while True:
    print("1.InsertAtBeg \n2.InsertAtEnd \n3.Remove \n4.Display ")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        l.insertAtBeg(int(input("Enter a value to be inserted: ")))
    elif choice == 2:
        l.insertAtEnd(int(input("Enter a value to be inserted: ")))
    elif choice == 3:
        l.remove(int(input("Enter a value to be deleted: ")))
    elif choice == 4:
        l.display()
    else:
        print("You choose exit")
        exit(0)
