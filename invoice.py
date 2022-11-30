name = "Jane Doe"
address = "123 Main Street"
city = "Danville"
state = "IL"
zip = "61832"
pay_to = "John Doe"
amt_in_dollars = 1234.56
amt_written = "One thousand two hundred thirty four and 56/100"
date = "09/16/2022"

#output code
print("-----------------------------------------------------------------")
print(f"{name:32} {date:>32}")
print(address)
print(f"{city:3} {',':1} {state:5} {zip}")
print()
print()
print()
print(f"{'Pay to the order of:':3} {pay_to:25} {'Amount $'} {amt_in_dollars:>9,.2f}")
print()
print(f"{amt_written} {'Dollars':>17}")
print()
print()
print(f"{name:>56}")
print(f"{'-----------------------':>64}")
print("-----------------------------------------------------------------")
