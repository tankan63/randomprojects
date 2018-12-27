while True:
   print('Options:')
   print('Enter "add" to add two numbers')
   print('Enter "sub" to subtract two numbers')
   print('Enter "mult" to multiply two numbers')
   print('Enter "div" to divide two numbers')
   print('Enter "sqr" to square a single number')
   print('Enter "pwr" to find a number raised to another')
   print('Enter "mod" to find the remainder after dividing two numbers')
   print('Enter "quit" to end the program')
   user_input = input(': ')

   if user_input == 'quit':
      break

   elif user_input=='sqr':
      num1=float(input("Enter a number: "))
      result=str(num1**2)
      print("Ans: " +result)

   else:
      num1 = float(input("Enter a number: "))
      num2 = float(input("Enter another number: "))
      if user_input == "add":
        result = str(num1 + num2)
      elif user_input == "sub":
        result = str(num1 - num2)
      elif user_input == "mult":
        result = str(num1 * num2)
      elif user_input == "div":
        result = str(num1 / num2)
      elif user_input=="mod":
        result = str(num1 % num2)
      elif user_input=="pwr":
        result=str(num1 ** num2)

      else:
        print("Unknown input")
      print("Ans: " + result)
