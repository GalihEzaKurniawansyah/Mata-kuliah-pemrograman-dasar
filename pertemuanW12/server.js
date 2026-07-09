const http = require('http');

const PORT = 3000;

const server = http.createServer((req, res) => {
    // Mengatur header respons agar mendukung karakter UTF-8 dan format HTML
    res.setHeader('Content-Type', 'text/html; charset=utf-8');

    // Proses routing berdasarkan URL (req.url)
    switch (req.url) {
        case '/':
            res.statusCode = 200;
            res.end('<h1>Selamat Datang</h1>');
            break;
            
        case '/profil':
            res.statusCode = 200;
            res.end('<h1>Profil Kampus</h1>');
            break;
            
        case '/kontak':
            res.statusCode = 200;
            res.end('<h1>Hubungi Kami</h1>');
            break;
            
        default:
            // Antisipasi jika halaman tidak ditemukan (404 Not Found)
            res.statusCode = 404;
            res.end('<h1>404 Halaman Tidak Ditemukan</h1>');
            break;
    }
});

// Jalankan server pada port yang ditentukan
server.listen(PORT, () => {
    console.log(`Server berjalan di http://localhost:${PORT}`);
});