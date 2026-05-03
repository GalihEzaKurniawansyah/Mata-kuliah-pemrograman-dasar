def konversi_suhu():
    print("--- Program Konversi Suhu ---")
    try:
        celcius = float(input("Masukkan suhu dalam Celcius: "))
        
        # Kalkulasi
        fahrenheit = (9/5 * celcius) + 32
        kelvin = celcius + 273.15
        reamur = 4/5 * celcius
        
        print(f"\nHasil Konversi untuk {celcius}°C:")
        print(f"- Fahrenheit: {fahrenheit:.2f}°F")
        print(f"- Kelvin:     {kelvin:.2f}K")
        print(f"- Reamur:     {reamur:.2f}°R")
    except ValueError:
        print("Error: Masukkan angka yang valid!")

konversi_suhu()