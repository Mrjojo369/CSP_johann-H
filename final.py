#Johann, Hines (the coolest)
grid = [[1,2,3],
[4,5,6],
[7,8,9]]

Greet =  input ("what is your name?\n")
print (f"Hello, {Greet} welcome to our game, you will be playing tic tac toe against an ai.")
game_finished = False 
taken = []
while game_finished == False:
        spot = input("pick a number for your spot 1-9\n !!!SPELL OUT DONT TYPE A NUMBER!!!\n").strip().capitalize()
    
        if spot != taken:
            taken.append(spot)
            if spot == "ONE":
                grid[0][0]="X"
            elif spot == "TWO":
                grid[0][1]  ="X"
            elif spot == "THREE":
                grid[0][2]="X"
            elif spot == "FOUR":
                grid[1][0]="X"
            elif spot == "FIVE": 
                grid[1][1]="X"
            elif spot == "SIX":
                grid[1][2] ="X"
            elif spot == "SEVEN":
                grid[2][0] ="X"
            elif spot == "EIGHT":
                grid[2][1] ="X"
            elif spot == "NINE":
                grid[2][2] ="X"
        else :
            print("Dummy that number is already chosen or not in the options")
            continue
for grid in grid:
    print(f"{grid[0]}|{grid[1]}|{grid[2]}\n --+---+--")
    
print(taken)
   