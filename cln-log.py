import os

if os.path.exists("result"):
    os.removedirs("result")
os.mkdir("result")
for i in range(1, 134):
    print("running %d th tests" % i)
    # print('python3 cln2inv.py ' + str(i) + '> ' + str(i) + '.txt')
    os.system('python3 cln2inv.py ' + str(i) + ' > ./result/' + str(i) + '.txt')
print("Done!")
