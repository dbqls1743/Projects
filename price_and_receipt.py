

# Create an empty list named sale_items
sale_items = []

# Ask ther user for 3 item prices and store the 
#		values in the sale_items list
price1 = float(input('Price of item 1:\t'))
sale_items.append(price1)
price2 = float(input('Price of item 2:\t'))
sale_items.append(price2)
price3 = float(input('Price of item 3:\t'))
sale_items.append(price3)

# Print the list 3 times:  
#		original order, reverse order, and sorted
print("\nDisplay item order variations:")
print("====================================")
print("Original:\t", sale_items)
sale_items.reverse()
print("Reversed:\t", sale_items)
sale_items.sort()
print("Sorted:\t\t", sale_items)

# Calculate the subtotal of the items 
#		and store result in a variable
subtotal = sum(sale_items)

# Calculate the average price of the items 
#		and store result in a variable
count_items = len(sale_items)
average = subtotal / count_items

# Calculate the tax on the subtotal using 
#		a tax rate of 9.25%
#		and store result in a variable
TAX_RATE = 0.0925
tax = subtotal * TAX_RATE

# Calculate total of the order including tax
#		and store result in a variable
total = subtotal + tax

# Neatly display the output 
print("\n\nDisplay Receipt:")
print("=============================")
print(f'{"Item 1:":20}${price1:>8.2f}')
print(f'{"Item 2:":20}${price2:>8.2f}')
print(f'{"Item 3:":20}${price3:>8.2f}')
print("-----------------------------")
print(f'{"Subtotal:":20}${subtotal:>8.2f}')
print(f'{"Tax:":20}${tax:>8.2f}')
print("=============================")
print(f'{"Total:":20}${total:>8.2f}')
print("-----------------------------")
print(f'{"Average:":20}${average:>8.2f}')