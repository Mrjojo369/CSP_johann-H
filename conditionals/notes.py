# Johann Hines, Conditionals notes 

#print("Hello wlecome to my program that will sort you into a catergory")

#name = input("What is your name:\n")

#if name == "Johann":
 #print("oh your the tacher? ... nevermind")
#else:
 #print("You are a student welcome to class")

# Two equal signs(==) check to see if the content is the same between two items. as well as checking if data type is the same

#num = int (input("How many would you like:(give me a number above zero)\n"))

#if num == 1:
 #   print("You have asked for a item")
#elif num <= 3:
  #  print("You have asked for a couple of an item")
#elif num <= 5:
 #   print("you have asked for a few of the item or if your from the south you asked for a couple")
#else:
 #   print("You have asked for some of the item")

#conditionals start at the top and work their way down. They only take the first conditon that is correct.  < less than symbol > grater than, <= less than or equal to >= greater than or equal to in checks if a object is in the string. ! means not. triple equalk sign is used in everything but python a boolean is something that equals truth or fals (T)/(F) any place without code is white space in py. white spaces is used to tell where smt is in our function, if its tabbed in its in the conditional/ function if its not then its out
name = "johann"

if "a" in name or "e" in name or "i" in name or "o" in name or "u" in name:
    print("your name has a vowel")
else: 
    print("your name doesnt have a vowel")

   # if "a" not in name:
  #  print("your name does not have the letter a")
#else: 
  #  print("your name does have thr letter  a")
# you write logical operators diffrently from python and c in py. They are (and, not, or)