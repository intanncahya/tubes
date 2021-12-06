#include <stdio.h>		//Header yang di gunakan untuk standar input output pada bahasa C
#include <stdlib.h>		//Header yang di gunakan untuk standar input output pada bahasa C
#include <string.h>		//Header yang di gunakan untuk string pada bahasa C
#include <time.h>		//Header yang di gunakan untuk waktu pada bahasa C
#define MAX 100			



//Deklarasi Fungsi dan Variabel
void welcome(void);								//Fungsi untuk menampilkan menu selamat datang 
void title(void);   							//Fungsi untuk menampilkan judul
void mainMenu(void);							//Fungsi untuk menampilkan pilihan menu
void pasienn(void);								//Fungsi untuk login pasien
void admin(void);								//Fungsi untuk login admin
void antrean(void);
void keluar(void);
void IGD(void);
void insert(int);
void eliminate();								//Fungsi untuk menghapus nomor antrean
void create();									//Fungsi untuk membuat antrean kosong
void check(int);								//Fungsi untuk mengecek nomor dan letaknya pada antrean
void add();
void view();
void del();
void display();									//Funngsi untuk menampilkan nomor antrean
void rawatInap(void);
int queueArray[MAX];									
int n,i,j=0,a=0,sum=0,g,flag,num;
int pilihanPelayanan(void);
int pilihanJalurLayanan();
int pilihanPoliklinik();
int poliklinik(int poli);
int dataPasienPoli(char* nama, char* dokter);
int piihanMenuFarmasi();
int farmasi(int m, int jalur);
int dataFarmasi(char* dokter, int jasa, int jalur);
int pilihanLaboratorium();
int laboratorium(int lab, int jalur);
int dataPasienLab(char* nama, int harga, int jalur);
int pilihanRadiologi();
int radiologi(int rad, int jalur);
int dataPasienRad(char* nama, int harga, int jalur);

int total;
int vvip=3, vip=2, gen=1;
int hari;
char setuju;
char sip = 0;
int PL;


//Struct pasien untuk menyimpan data pasien
struct pasien
{
    char nama[30];
    char sakit[30];
    char jk;
    char alm[50];
    char dokter[50];
    char telp[15];
    int umur;
};
struct pasien  pasien,temp_c;

//Struct Rumah_sakit untuk menyimpan data pasien
struct Rumah_sakit
{
    char nama[50];
    char alamat[100];
    int tggi[5], brt[5];
    char golda[3];
    char ayah[50];
    char ibu[50];
};

//=======================================================================//
//************   Fungsi Untuk Login Pasien			     ****************//
//=======================================================================//
// Nama Fungsi    : pasienn                                              //
// Input Argumen  : char u, char p		                           	     //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan username dan password oleh pasien untuk	 //
//                  login dan dapat mengakses program				     //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 03-12-2021                               Tgl: 03-12-2021      //
// I Gusti Agung Intan Utami Putri - 2105551020                          //
// Kelas A                                                               //
//=======================================================================//
void pasienn(void)
{
    system("cls");
    int ulang;
    char uname[12] = "pasienRSUHC", passw[5] = "1234";
    char u[12], p[5];

    printf ("\n\n\t\t----------------------------------------------------------------------------------");
    printf ("\n\n\n\t\t\tSILAKAN LOGIN DENGAN MENGGUNAKAN USERNAME DAN PASSWORD YANG SESUAI\n");
    printf ("\n\n\t\t----------------------------------------------------------------------------------");
    while (ulang<3){
    printf ("\n\n\t\t\t\t\t  username : "); scanf ("%s", &u);
    printf ("\n\t\t\t\t\t  password : "); scanf ("%s", &p);
        if (strcmp (uname, u) == 0 && strcmp (passw, p) == 0){
            break;
        }else{
            printf ("\n\n\t\t\t\t\tUsername/Password Anda salah!\n\n");
            ulang++;
            }
        }
        if (ulang<3){
            printf("\n\n\t\t\t\t\t\tAkses diterima!");
            printf("\n\n\t\t\t\t\t");
            system("pause");
        }else{
            printf ("\n\t\t\tAkses ditolak! Anda sudah melebihi batasan dalam validasi pengguna.\n");
            exit (1);
        }
}
//=======================================================================//
//************   Fungsi Untuk Login Admin			     ****************//
//=======================================================================//
// Nama Fungsi    : admin                                                //
// Input Argumen  : char user, char pass		                   	     //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan username dan password oleh admin untuk	 //
//                  login dan dapat mengakses program				     //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 03-12-2021                               Tgl: 03-12-2021      //
// I Gusti Agung Intan Utami Putri - 2105551020                          //
// Kelas A                                                               //
//=======================================================================//
void admin(void)
{
    system("cls");
    int ulang;
    char username[6] = "RSUHC", password [10] = "admin2021";
    char user[6], pass[10];

    printf ("\n\n\t\t----------------------------------------------------------------------------------");
    printf ("\n\n\n\t\t\tSILAKAN LOGIN DENGAN MENGGUNAKAN USERNAME DAN PASSWORD YANG SESUAI\n");
    printf ("\n\n\t\t----------------------------------------------------------------------------------");
    while (ulang<3){
    printf ("\n\n\t\t\t\t\t  username : "); scanf ("%s", &user);
    printf ("\n\t\t\t\t\t  password : "); scanf ("%s", &pass);
        if (strcmp (username, user) == 0 && strcmp (password, pass) == 0){
            break;
        }else{
            printf ("\n\n\t\t\t\t\tUsername/Password Anda salah!\n\n");
            ulang++;
            }
        }
        if (ulang<3){
            printf("\n\n\t\t\t\t\t\tAkses diterima!");
            printf("\n\n\t\t\t\t\t");
            system("pause");
        }else{
            printf ("\n\t\t\tAkses ditolak! Anda sudah melebihi batasan dalam validasi pengguna.\n");
            exit (1);
        }
}
