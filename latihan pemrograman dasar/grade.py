import csv

def proses_file(nama_file, kolom_tugas, kolom_uts, kolom_uas):
    total = 0
    count = 0
    grades = {"A":0, "B":0, "C":0, "D":0}

    print(f"\n=== Processing {nama_file} ===")

    with open(nama_file, "r") as file:
        reader = csv.DictReader(file)

        for row in reader:
            nama = row["Nama"]

            tugas = float(row[kolom_tugas])
            uts = float(row[kolom_uts])
            uas = float(row[kolom_uas])

            nilai = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas)

            total += nilai
            count += 1

            if nilai >= 85:
                grades["A"] += 1
            elif nilai >= 75:
                grades["B"] += 1
            elif nilai >= 60:
                grades["C"] += 1
            else:
                grades["D"] += 1

            print(f"{nama} -> {nilai:.2f}")

    print("\nRata-rata:", round(total / count, 2))
    print("Grade summary:", grades)


# =========================
# FILE 1: grades.csv
# =========================
proses_file("grades.csv", "Tugas", "UTS", "UAS")

# =========================
# FILE 2: data_nilai.csv
# =========================
proses_file("data_nilai.csv", "Tugas", "UTS", "UAS")