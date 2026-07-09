const http = require('http');

const PORT = 3000;

const server = http.createServer((req, res) => {
    // Mengatur header agar merespons dengan format HTML dan encoding UTF-8
    res.setHeader('Content-Type', 'text/html; charset=utf-8');

    // Routing Logic
    if (req.url === '/' || req.url === '/home') {
        // Routing 1: Home
        res.writeHead(200);
        res.end(`
            <h1>Selamat Datang di Server Informasi Kampus</h1>
            <p>Pilih menu informasi berikut:</p>
            <ul>
                <li><a href="/profil">Profil Kampus</a></li>
                <li><a href="/akademik">Informasi Akademik</a></li>
                <li><a href="/fasilitas">Fasilitas Kampus</a></li>
                <li><a href="/kontak">Kontak Kami</a></li>
            </ul>
        `);
    } else if (req.url === '/profil') {
        // Routing 2: Profil
        res.writeHead(200);
        res.end(`
            <h1>Profil Kampus</h1>
            <p>Kampus kami adalah institusi pendidikan tinggi yang berfokus pada teknologi dan inovasi global.</p>
            <p><a href="/">Kembali ke Beranda</a></p>
        `);
    } else if (req.url === '/akademik') {
        // Routing 3: Akademik
        res.writeHead(200);
        res.end(`
            <h1>Informasi Akademik</h1>
            <p>Kami menyediakan 3 Fakultas utama: Teknik, Ilmu Komputer, dan Ekonomi Bisnis.</p>
            <p><a href="/">Kembali ke Beranda</a></p>
        `);
    } else if (req.url === '/fasilitas') {
        // Routing 4: Fasilitas
        res.writeHead(200);
        res.end(`
            <h1>Fasilitas Kampus</h1>
            <p>Fasilitas pendukung mencakup Perpustakaan Digital, Laboratorium AI, Gedung Olahraga, dan Area Wi-Fi 24 Jam.</p>
            <p><a href="/">Kembali ke Beranda</a></p>
        `);
    } else if (req.url === '/kontak') {
        // Routing 5: Kontak
        res.writeHead(200);
        res.end(`
            <h1>Kontak Kami</h1>
            <p>Email: info@kampus.ac.id<br>Telepon: (021) 1234567</p>
            <p><a href="/">Kembali ke Beranda</a></p>
        `);
    } else {
        // Routing Alternatif: Jika halaman tidak ditemukan (404)
        res.writeHead(404);
        res.end(`
            <h1 style="color: red;">404 - Halaman Tidak Ditemukan</h1>
            <p>Maaf, halaman informasi yang Anda cari tidak tersedia.</p>
            <p><a href="/">Kembali ke Beranda</a></p>
        `);
    }
});

// Jalankan server di port 3000
server.listen(PORT, () => {
    console.log(`Server Informasi Kampus berjalan di http://localhost:${PORT}`);
});