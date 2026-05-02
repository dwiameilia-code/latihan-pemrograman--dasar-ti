# Program input 5 nilai dan hitung rata-rata

nilai = []

for i in range(5):
    print("Input nilai ke-", i+1)
    n = float(input("Masukkan nilai: "))
    nilai.append(n)

total = 0
for n in nilai:
    total = total + n

rata = total / 5

print("\nData nilai:", nilai)
print("Rata-rata =", rata)