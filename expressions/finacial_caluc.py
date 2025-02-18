# Johann hines, Financial calculator python. 

# write a print statement telling the user what the program is (budget calculator)

income= float (input("what is your monthly income?"))

# ask for monthly rent amount (user input)
rent= float(input("how much do you pay a month in rent?"))
# ask for monthly utilities (user input)
utilites= float(input("How much do you pay for utilities a month?"))
# ask for monthly transportation amount (user input)
transportation= float(input("How much do you pay for transporation in a month?"))
# ask for groceries amount (user input)
groceries= float(input("How much do you spend on groceries a month?"))
Spending_money= float(input("how much money do you spend on recreation a month?")) 
# calculate savings as 10% of income 
savings = income*.10
print(f"you can save 10% or, {round(savings, 4)} dollers a month")
# calculate spending money income - (rent + income + utilities + transportation + groceries + savings) (variable)

#calcualte the percent of rent (rent/income)*100 (variable)
rent_per = (rent/income)*100
#calcualte the percent of utiliuties (rent/income)*100 (variable)
utilities_per = (utilites/income)*100 
#calcualte the percent of transportation (transportatipon/income) *100 (variable)
transportation_per = (transportation/income)*100 
#calcualte the percent of groceries (groceries/income) *100(variable)
groceries_per = (groceries/income)*100 
# calculate The percent of spending money (spending/income) *100 (vairblae)
spending_money_per = (transportation/income)*100 
#tell user catagory spending amount and percent for monthly rent ("you spend $XX.XX on rent and that is xx% of your income")
print(f"at this time you can spend ${rent} or {round (rent_per, 2)}% on rent.")
#tell user catagory spending amount and percent for utilites ("you spend $XX.XX on utilites and that is xx% of your income")
print(f"at this time you can spend ${utilites} or {round (utilities_per, 2)}% on utilities.")
#tell user catagory spending amount and percent for Transportation  ("you spend $XX.XX on transportation and that is xx% of your income")
print(f"at this time you can spend ${transportation} or {round (transportation_per, 2)}% on transportation.")
#tell user catagory spending amount and percent for groceries ("you spend $XX.XX on groceries and that is xx% of your income")
print(f"at this time you can spend ${groceries} or {round (groceries_per, 2)}% on groceries.")
#tell user catagory spending amount and percent for spening money("you spend $XX.XX on spending money and that is xx% of your income")
print(f"at this time you can spend ${Spending_money} or {round (spending_money_per, 2)}% on recreation/spending money.")