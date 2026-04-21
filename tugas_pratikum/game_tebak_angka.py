import random

def play():
    while True:
        print("\n=== GAME TEBAK ANGKA ===")
        print("1. Mudah (1-50, 10 percobaan)")
        print("2. Sedang (1-100, 7 percobaan)")
        print("3. Sulit (1-500, 5 percobaan)")

        pilihan = input("Pilih level (1/2/3): ")

        if pilihan == "1":
            max_num = 50
            max_attempts = 10
        elif pilihan == "2":
            max_num = 100
            max_attempts = 7
        elif pilihan == "3":
            max_num = 500
            max_attempts = 5
        else:
            print("Pilihan tidak valid, otomatis level Sedang.")
            max_num = 100
            max_attempts = 7

        secret = random.randint(1, max_num)
        attempts = 0

        print(f"\nTebak angka antara 1 sampai {max_num}")

        while attempts < max_attempts:
            try:
                guess = int(input("Masukkan tebakan: "))
            except ValueError:
                print("Input harus angka!")
                continue

            attempts += 1

            if guess == secret:
                print(f"Benar! Kamu menang dalam {attempts} percobaan.")
                break

            if guess < secret:
                print("Terlalu kecil!")
            else:
                print("Terlalu besar!")

            # Hint panas / dingin
            if abs(guess - secret) <= 5:
                print("Panas! Sudah dekat.")
            else:
                print("Dingin! Masih jauh.")

            print("Sisa percobaan:", max_attempts - attempts)

        else:
            print(f"Game Over! Angka yang benar adalah {secret}")

        ulang = input("\nMain lagi? (y/n): ").lower()
        if ulang != 'y':
            print("Terima kasih sudah bermain!")
            break

if __name__ == "__main__":
    play()