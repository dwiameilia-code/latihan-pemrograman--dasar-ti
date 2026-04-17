import math

history = []

print("=== Kalkulator Python ===")

while True:
    print("\nOperasi: + - * / ** sqrt | q untuk keluar")
    op = input("Pilih: ")

    if op == "q":
        break

    try:
        if op == "sqrt":
            x = float(input("Angka: "))
            result = math.sqrt(x)
            history.append(f"sqrt({x}) = {result}")
            print("Hasil:", result)

        else:
            a = float(input("A: "))
            b = float(input("B: "))

            if op == "+":
                result = a + b
            elif op == "-":
                result = a - b
            elif op == "*":
                result = a * b
            elif op == "/":
                result = a / b if b != 0 else "Error (0)"
            elif op == "**":
                result = a ** b
            else:
                print("Operator salah")
                continue

            history.append(f"{a} {op} {b} = {result}")
            print("Hasil:", result)

    except ValueError:
        print("Input harus angka!")

print("\n=== History ===")
for h in history:
    print(h)