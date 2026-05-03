def loop_angka_improv():
    print("\n--- Loop Angka 1-100 (dengan Penanda) ---")
    for i in range(1, 101):
        # Improvisasi: Memberi keterangan tambahan
        if i % 10 == 0:
            status = "<-- Kelipatan Sepuluh"
        elif i % 2 == 0:
            status = "(Genap)"
        else:
            status = "(Ganjil)"
            
        print(f"Angka {i:3} {status}")

loop_angka_improv()