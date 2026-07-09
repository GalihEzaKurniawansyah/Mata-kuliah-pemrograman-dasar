# Server Informasi Kampus

Proyek ini adalah aplikasi server berbasis Node.js untuk menyajikan informasi seputar kampus melalui protokol HTTP. Dibuat menggunakan modul bawaan (*core module*) `http` dari Node.js tanpa *dependency* tambahan.

## Ketentuan Fitur
- Berjalan pada **Port 3000**.
- Memiliki **5 Routing** utama yang menyajikan halaman HTML.
- Menggunakan **Status Code** HTTP yang sesuai (`200 OK` untuk halaman sukses, `404 Not Found` untuk error).

## Daftar Routing
1. `/` atau `/home` - Halaman utama (Beranda)
2. `/profil` - Informasi profil singkat kampus
3. `/akademik` - Informasi mengenai fakultas/jurusan
4. `/fasilitas` - Daftar fasilitas yang tersedia di kampus
5. `/kontak` - Informasi kontak resmi kampus

## Cara Menjalankan

1. Pastikan Anda sudah menginstal [Node.js](https://nodejs.org/).
2. Buka terminal atau command prompt di direktori project ini.
3. Jalankan perintah berikut untuk memulai server:
   ```bash
   npm start