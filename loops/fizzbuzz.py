#Johann Hines, Fizzbuzz.py

x =1 

while x >= 1 and x <51:
  if x % 15 == 0:
    print("fizzbuzz.\n")
  elif x % 5 == 0:
    print("buzz.\n")
  elif x % 3 == 0:
    print("fizz\n")
  else:
    print(x)
  x += 1 
