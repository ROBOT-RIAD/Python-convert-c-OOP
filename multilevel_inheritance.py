class MyClass:
    def my_function(self):
        print("Some content in parent class.")

# Child class
class MyChild(MyClass):
    pass

# Grandchild class
class MyGrandChild(MyChild):
    pass

if __name__ == "__main__":
    my_obj = MyGrandChild()
    my_obj.my_function()