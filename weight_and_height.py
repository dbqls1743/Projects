def get_number(prompt):
	while True:
		number = int(input(prompt))
		if number <= 0:
			print("Please enter a positive value\n")
			continue
		else:
			return number

def calc_bmi(weight, height):
  return weight * 703 / height**2

def determine_status(bmi):
  if bmi > 25:
    return("Your weight is considered overweight")
  elif bmi < 18.5:
    return("Your weight is considered underweight")
  else:
    return("Your weight is considered optimal")

def main():
  weight = get_number("Enter your weight in pounds: ")
  height = get_number("\nEnter your height in inches: ")
  bmi = calc_bmi(weight, height)
  print()
  print(f"{'Your BMI is'} {bmi:.2f}")
  status = determine_status(bmi)
  print(status)
  
main ()