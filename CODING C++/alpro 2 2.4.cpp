#include <iostream>
#include <conio.h>

struct data_tgl
{
    int tanggal;int bulan;int tahun ;
};
void cetak_info_tgl (struct data_tgl unit_tgl)

main()
{
    struct data_tgl saat_proses = {13,1,1997};
    cetak_info_tgl (saat_proses);
}

void cetak_info_tgl(struct data_tgl unit_tgl)
{
    static char *nama_bln[] =
    {
        "kode bulan salah!","januari","februari","maret","april",
        "mei","juni","juli","agustus","september","oktober",
        "november","desember"
    }
    clrscr();

    cout << unit_tgl.tanggal << " " << nama_bln[unit_tgl.bulan]
    << " " << unit_tgl.tahun;
    getche();
}
