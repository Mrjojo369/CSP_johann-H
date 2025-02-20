# Johann hines, Financial calculator python. 

def info(income, amount, type):
    pertype = (amount/income)*100 
    print(f"you can spend ${round(amount:.2f)} on {type} and that is {pertype:.0f}% of your income")

# write a print statement telling the user what the program is (budget calculator)

income= float (input("what is your monthly income?\n"))
rent= float(input("how much do you pay a month in rent?\n"))
utilites= float(input("How much do you pay for utilities a month?\n"))
transportation= float(input("How much do you pay for transporation in a month?\n"))
groceries= float(input("How much do you spend on groceries a month?\n"))
Spending_money= float(input("how much money do you spend on recreation a month?\n")) 
savings = income*.10
print(f"you can save 10% or, {round(savings, 4)} dollers a month")
rent_per = (rent/income)*100
utilities_per = (utilites/income)*100 
transportation_per = (transportation/income)*100 
groceries_per = (groceries/income)*100 
spending_money_per = (transportation/income)*100 
savings = income*1
savings = income - (rent+utilites+transportation+groceries+Spending_money+savings)
#print(f"at this time you can spend ${rent} or {round (rent_per, 2)}% on rent.")
#print(f"at this time you can spend ${utilites} or {round (utilities_per, 2)}% on utilities.")
#print(f"at this time you can spend ${transportation} or {round (transportation_per, 2)}% on transportation.")
#print(f"at this time you can spend ${groceries} or {round (groceries_per, 2)}% on groceries.")
#print(f"at this time you can spend ${Spending_money} or {round (spending_money_per, 2)}% on recreation/spending money.")

info(income, rent, "rent")