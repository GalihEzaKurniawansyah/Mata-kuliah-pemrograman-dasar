// server.js
const http = require('http');

const PORT = 3000;

const server = http.createServer((req, res) => {
    // Mengatur header respons agar mendukung karakter UTF-8 dan format HTML
    res.setHeader('Content-Type', 'text/html; charset=utf-8');

    // Routing berdasarkan URL
    switch (req.url) {
        case '/':
            // Soal 2: Halaman utama
            res.statusCode = 200;
            res.end('<h1>Selamat Datang di Praktikum Pemrograman Dasar</h1>');
            break;

        case '/profil':
            // Soal 3: Routing /profil
            res.statusCode = 200;
            res.end('<h1>Halaman Profil</h1><p>Ini adalah halaman profil mahasiswa.</p>');
            break;

        case '/mata-kuliah':
            // Soal 3: Routing /mata-kuliah
            res.statusCode = 200;
            res.end('<h1>Halaman Mata Kuliah</h1><p>Daftar mata kuliah yang diambil semester ini.</p>');
            break;

        case '/kontak':
            // Soal 3: Routing /kontak
            res.statusCode = 200;
            res.end('<h1>Halaman Kontak</h1><p>Hubungi kami melalui email@domain.com</p>');
            break;

        default:
            // Soal 4: Status code 404 untuk halaman yang tidak ditemukan
            res.statusCode = 404;
            res.end('<h1>404 Not Found</h1><p>Maaf, halaman yang Anda cari tidak ditemukan.</p>');
            break;
    }
});

// Menjalankan server
server.listen(PORT, () => {
    console.log(`Server berjalan di http://localhost:${PORT}`);
});