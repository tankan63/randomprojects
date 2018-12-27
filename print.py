# this is a simple text analyser that displays tthe frequency of each letter in a string

def count_char(text,char):
	count=0
	for c in text:
		if c==char:
			count +=1
	return count

file=open("new1.txt","w")
file.write("""The quick brown fox jumps over the lazy dog""") #enter any text here
file.close() #executing this line will overwrite the original file and close it
 #alternatively, if you simple wish to analyse the letters in any file without
 #overwriting it, the 'file.write()' command can be forgone
filename="new1.txt"
with open(filename) as f:
	text=f.read()

for char in "abcdefghijklmnopqrstuvwxyz":
	perc=100 * count_char(text,char)/len(text)
	print("{0}-{1}".format(char, round(perc,2)))
