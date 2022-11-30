def get_valid_value(prompt):
  while True:
    number = int(input(prompt))
    if number <= 0:
      print("Invalid menu choice. Please re-enter")
      continue
    else:
      return number

def display_menu():
  print("Choose an option:")
  print("1 - Convert inches to centimeters")
  print("2 - Convert centimeters to inches")
  print("3 - Convert miles to kilometers")
  print("4 - Convert kilometers to miles")
  print("5 - Exit")
  get_menu_choice()

def get_menu_choice():
  menu_choice = get_valid_value("\nEnter a menu choice: ")
  if menu_choice <= 4:
    run_conversion(menu_choice)
  else:
    print("Thanks for participating")

def run_conversion(choice):
  if choice == 1:
    value_to_convert = int(input("\nEnter the inches: "))
    value_converted = conv_inches(value_to_convert)
    print(f"{value_to_convert} {'inches is equal to'} {value_converted:.2f} {'centimeters'}")
    get_menu_choice()
  elif choice == 2:
    value_to_convert = int(input("\nEnter the centimeters: "))
    value_converted = conv_centimeters(value_to_convert)
    print(f"{value_to_convert} {'centimeters is equal to'} {value_converted:.2f} {'inches'}")
    get_menu_choice()
  elif choice == 3:
    value_to_convert = int(input("\nEnter the miles: "))
    value_converted = conv_miles(value_to_convert)
    print(f"{value_to_convert} {'miles is equal to'} {value_converted:.2f} {'kilometers'}")
    get_menu_choice()
  else:
    value_to_convert = int(input("\nEnter the kilometers: "))
    value_converted = conv_km(value_to_convert)
    print(f"{value_to_convert} {'kilometers is equal to'} {value_converted:.2f} {'miles'}")
    get_menu_choice()

def conv_inches(inches):
   cm = inches / 0.39370
   return(cm)

def conv_centimeters(cm):
   inches = cm * 0.39370
   return(inches)

def conv_miles(miles):
   km = miles / 0.621
   return(km)

def conv_km(km):
   miles = km * 0.62137
   return(miles)
                                 
def main():
  display_menu()
  
main ()