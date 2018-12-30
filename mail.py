import re

pattern = r"([\w\.-]+)@([\w\.-]+)(\.[\w\.]+)"
mail = input("Please enter an email adress: ")

match = re.search(pattern, mail)
if match:
   print("You entered: " +match.group() +" which is valid")

else:
    print ("Invalid email")
