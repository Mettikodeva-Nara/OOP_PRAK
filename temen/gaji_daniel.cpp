#include <iostream>
#include <string>

using namespace std;

class Gaji
{
public:
	string nama;
	long j_lembur, d_lembur, d_presensi, d_dinas;
	long dinas, presensi, jabatan;

	long GajiPokok(long totalgaji1)
	{
		d_lembur = 20000 * j_lembur;
		d_presensi = 50000 * presensi;
		d_dinas = 400000 * dinas;
		return totalgaji1 = 1800000 + d_lembur + d_presensi + d_dinas;
	}

	long GajiPokok(long totalgaji2)
	{
		d_lembur = 20000 * j_lembur;
		d_presensi = 50000 * presensi;
		d_dinas = 400000 * dinas;
		return totalgaji2 = 2300000 + d_lembur + d_presensi + d_dinas;
	}

	long GajiPokok(long totalgaji3)
	{
		d_lembur = 20000 * j_lembur;
		d_presensi = 50000 * presensi;
		d_dinas = 400000 * dinas;
		return totalgaji3 = 2700000 + d_lembur + d_presensi + d_dinas;
	}

	void tampilan()
	{
		// GajiPokok(); //jangan lupa untuk manggil kembali di fungsi yang lain... :) Stuck gara" ini
		cout << "Nama Karyawan      : " << nama << "\n";
		cout << "Jabatan            : ";
		cout << "\nBanyak Lembur      : " << j_lembur << "\n";
		cout << "Banyak Dinas Luar  : " << dinas << "\n";
		cout << "Banyak Kehadiran   : " << presensi << "\n";
	}
};

int main()
{
	Gaji karyawan;
	long totalgaji1, totalgaji2, totalgaji3;
	cout << "=== Program Gaji Bulanan ===\n";
	cout << "Input Nama: ";
	getline(cin, karyawan.nama);
	cout << "Jenis Jabatan:\n1. Teknisi\n2. RnD\n3. Kepala Divisi\nInput Jabatan: ";
	cin >> karyawan.jabatan;
	if (karyawan.jabatan == 3)
	{
		cout << "Input Jumlah Dinas: ";
		cin >> karyawan.dinas;
	}
	cout << "Input Jumlah Presensi: ";
	cin >> karyawan.presensi;
	cout << "Input Jam Lembur: ";
	cin >> karyawan.j_lembur;

	karyawan.tampilan();
	if (karyawan.jabatan == 1)
	{
		cout << "Teknisi\n";
		cout << "TOTAL GAJI KARYAWAN: " << karyawan.GajiPokok(totalgaji1) << "\n";
	}
	else if (karyawan.jabatan == 2)
	{
		cout << "RnD\n";
		cout << "TOTAL GAJI KARYAWAN: " << karyawan.GajiPokok(totalgaji2) << "\n";
	}
	else if (karyawan.jabatan == 3)
	{
		cout << "Kepala Divisi\n";
		cout << "TOTAL GAJI KARYAWAN: " << karyawan.GajiPokok(totalgaji3) << "\n";
	}
}
