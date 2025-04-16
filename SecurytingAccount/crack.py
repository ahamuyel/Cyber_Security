import time

start = time.time()

with open("output.txt", "w") as f:
    for i in range(10):
        for j in range(10):
            for k in range(10):
                for l in range(10):
                    f.write(f"{i} {j} {k} {l}\n")

end = time.time()
print(f"Tempo de execução: {end - start:.6f} segundos")
