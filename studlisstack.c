def isEmpty(stk):
    if stk == []:
        return True
    else:
        return False

def add(stk,item):
    stk.append(item)
    top = len(stk)-1
    
def remove(stk):
    if(stk==[]):
        print("Stack empty;UNderflow")
    else:
        print("Deleted student is :",stk.pop())
    
def display(stk):
    if isEmpty(stk):
        print("Stack empty ")
    else :
        top = len(stk)-1
        print(stk[top],"<-top")
        for a in range(top-1,-1,-1):
            print(stk[a])
            
stack=[]
top = None
while True:
    print("STACK OPERATION:")
    print("1.ADD student")
    print("2.Display stack")
    print("3.Remove student")
    print("4.Exit")
    ch = int(input("Enter your choice(1-4):"))
    if ch==1:
        rno = int(input("Enter Roll no to be inserted :"))
        sname = input("Enter Student name to be inserted :")
        item = [rno,sname]
        add(stack,item)
        input()
    elif ch==2:
        display(stack)
        input()
    elif ch==3:
        remove(stack)
        input()    
    elif ch==4:
        break
    else:
        print("Invalid choice ")
        input()
