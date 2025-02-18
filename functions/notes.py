# Johann hines, Functions notes in python 

#function is ana action stored in a key word 
#number = int(input("can i get a number:\n"))
#def add(numOne, numTwo):#paramaters go in the parenthasis 
   # numOne = int(("Give me a numberp:\n"))
   # numTwo = int(("Give me a numberp:\n"))
    
  #  print(numOne+numTwo)
 #add(int(input("tell me a number:\n"))
    #add(12+34)#arguments ar egiven when the function is called and must match the number of parameters
    #add(13+12)
    #add(10+10)
def user(word):
 return input(f"tell me a {word}:\n")
name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} amd somehow got to {place}.")