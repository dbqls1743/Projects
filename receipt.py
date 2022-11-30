

item_one = float(input("Enter the price for item one: "))
item_two = float(input("Enter the price for item two: "))
item_three = float(input("Enter the price for item three: "))

subtotal = item_one + item_two + item_three
sales_tax = subtotal * .0925
total = subtotal + sales_tax

print()
print("Sales Receipt:")
print("=======================")
print(f"{'Item 1:':10} {item_one:10.2f}")
print(f"{'Item 2:':10} {item_two:10.2f}")
print(f"{'Item 3:':10} {item_three:10.2f}")
print("-----------------------")
print(f"{'Subtotal:':10} {subtotal:10.2f}")
print(f"{'Sales Tax:':10} {sales_tax:10.2f}")
print(f"{'Total:':10} {total:10.2f}")