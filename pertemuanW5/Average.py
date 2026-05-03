def hitung_rata_rata():
    print("\n--- Program Hitung Rata-Rata ---")
    angka_list = []
    
    while True:
        input_user = input("Masukkan angka (atau ketik 'selesai' untuk hitung): ").lower()
        
        if input_user == 'selesai':
            break
        
        try:
            angka = float(input_user)
            angka_list.append(angka)
        except ValueError:
            print("Input tidak valid, masukkan angka.")

    if angka_list:
        rata_rata = sum(angka_list) / len(angka_list)
        print(f"\nData angka: {angka_list}")
        print(f"Total data: {len(angka_list)}")
        print(f"Rata-rata:  {rata_rata:.2f}")
    else:
        print("Tidak ada data untuk dihitung.")

hitung_rata_rata()