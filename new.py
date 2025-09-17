# user se input lena
word = input("Enter a word: ")

# word ko reverse karke check karna
if word == word[::-1]:
    print(word, "is a palindrome.")
else:
    print(word, "is not a palindrome.")
