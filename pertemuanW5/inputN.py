# List untuk menyimpan nilai
daftar_nilai = []

# Input 5 nilai menggunakan perulangan
for i in range(5):
    nilai = float(input(f"Masukkan nilai ke-{i+1}: "))
    daftar_nilai.append(nilai)

# Hitung rata-rata
rata_rata = sum(daftar_nilai) / len(daftar_nilai)

# Tampilkan hasil
print("\nList Nilai:", daftar_nilai)
print("Rata-rata:", rata_rata)