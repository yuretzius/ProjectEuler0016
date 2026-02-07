from time import perf_counter

start = perf_counter()

N = 1000
numb = str(2**N)
sum = 0
for i in numb:
  sum += int(i)

end = perf_counter()
print(sum)
print((end - start)*1000,'ms')