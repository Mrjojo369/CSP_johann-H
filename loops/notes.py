# 1. What is a loop? 
    # a section of code that is going to repeat 
#2. What are the two types of loops?
    # a while loop
x = 0
while x < 10:
    print("hello", x)
    x +=1 

    #for loop 
#nums = [3,4,5,6]

#for num in nums:
 #   print(num)
# 3. What is iteration
    # The act of repeating something 

# 4. What are lists? 
  # a bunch of values in the same variable 
    siblings = ["rohann", "daynna", "brianna", "samira", "brian", "samantha", "amanda"]
    #print one item from list brakets then the index of the item you want to print 
    siblings = ["rohann", "daynna", "brianna", "samira", "brian", "samantha", "amanda"]
    #change an item in a list 
    siblings[5] = "ryan" #the seven in parenthasis is the index of the value
    #remove item from a list 
    siblings.pop(5)
    print(siblings)
# 5. How do you make lists in python? 
    #You do brakets, with each variable in their own quotations and a comma between each (line21)
# 6. How do you make for loops in python? 
   num = 1
    #for sibling in siblings:
    print(f"{num}.{siblings} hines")
    num += 1 
    for num in range(2,10, 2):
     print(num)
# 7. How do you make while loops in python?
import random\
 
num = 1
rand = random.randint(1,20)
while num < 21:
 if num == rand:
    print(f"goose!")
    break #tells the loop to be done
else: 
    print("duck")
num += 1 

# continue tells the loop to stop that iteration then start again 