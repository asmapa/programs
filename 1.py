a=input("Enter a string: ")
b=input("Enter another string: ")
print("a="+a)
print("b="+b)
def function(fname,sname):
    temp=fname
    fname=sname
    sname=temp
    print("a="+fname)
    print("b="+sname)

function(a,b)
