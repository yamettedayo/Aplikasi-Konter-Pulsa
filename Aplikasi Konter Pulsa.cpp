
#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int loading() //fungsi untuk menampilkan loading
{
    int i,j;
    for (i=1; i<=100; i++) //perulangan
    {
        cout << "Loading " << i << "%";
        cout << endl;
        for (j=0; j<i; j++)
        {
            cout << "";
        }
        system ("cls");
    }
}

int loading2() //fungsi untuk menampilkan loading
{
    int i,j;
    for (i=1; i<=100; i++) //perulangan
    {
        cout << "Mohon tunggu sebentar, transaksi sedang di proses! " << i << "%";
        cout << endl;
        for (j=0; j<i; j++)
        {
            cout << "";
        }
        system ("cls");
    }
}


int password() //fungsi untuk menampilkan password
{
    int p,q;
    cout << " ----------------------------------------\n";
    cout << " \tWELCOME TO METT CELLULAR \n" ;
    cout << " ----------------------------------------\n" << endl;

    for (p=0; p<=5; p++) // perulangan
    {
        cout << "   Masukkan Password   : ";
        cin  >> q;

        if (q==38083) //if
        {
            system ("cls");
            loading();
            break;
        }
        else
        {
            cout << "   Password yang anda masukkan salah. Silahkan masukkan Password dengan benar!\n" << endl;
        }

    }
}


int main ()
{
    loading ();
    password ();

    char nama[25], kode[13], back; //array
    int item, barang, noHp, harga[10]={5000, 10000, 15000, 20000, 25000, 30000, 400000, 500000, 750000, 100000}, i=0;


	balik:
	do // perulangan
    {
        cout << endl;
        cout << "============= MENU PEMBELIAN PULSA ==============\n" << endl;
        cout << "   Input Data "                  << endl;
		cout << "   Nama                            :   ";
		cin  >>     nama;
		cout << "   No Telepon                      :   ";
		cin  >>     noHp;

		loading();
		system ("cls");
        cout << endl << endl;

		cout << "        Daftar Pulsa yang Tersedia       "   << endl;
		cout << "   ------------------------------------  "   << endl;
		cout << "       KODE            NOMINAL           "   << endl;
		cout << "       [1]         =   Rp   5.000        "   << endl;
		cout << "       [2]         =   RP  10.000        "   << endl;
		cout << "       [3]         =   RP  15.000        "   << endl;
		cout << "       [4]         =   Rp  20.000        "   << endl;
		cout << "       [5]         =   Rp  25.000        "   << endl;
		cout << "       [6]         =   Rp  30.000        "   << endl;
		cout << "       [7]         =   RP  40.000        "   << endl;
		cout << "       [8]         =   RP  50.000        "   << endl;
		cout << "       [9]         =   Rp  75.000        "   << endl;
		cout << "      [10]         =   Rp 100.000        "   << endl;
		cout << "   ------------------------------------- "   << endl;

ulang:
		cout << "   Input kode pembelian pulsa     :   ";
		cin  >> item;


		switch(item) //control flow
		{
		    case 1:
				strcpy(kode,"1");
				break;
			case 2:
				strcpy(kode,"2");
				i=1;
				break;
			case 3:
				strcpy(kode,"3");
				i=2;
				break;
			case 4:
				strcpy(kode,"4");
				i=3;
				break;
			case 5:
				strcpy(kode,"5");
				i=4;
			case 6:
				strcpy(kode,"6");
				i=5;
				break;
			case 7:
				strcpy(kode,"7");
				i=6;
				break;
			case 8:
				strcpy(kode,"8");
				i=7;
				break;
			case 9:
				strcpy(kode,"9");
				i=8;
				break;
			case 10:
				strcpy(kode,"10");
				i=9;
				break;
			default:
				cout << "   Kode yang anda input tidak tersedia..." << endl;
				goto ulang;

		}
		system ("cls");
		cout << endl << endl;
		cout << "   Kode anda adalah    :   "   << kode     << endl;
        cout << "   Nama Pelanggan      :   "   << nama     << endl;
        cout << "   No Telepon          :   "   << noHp     << endl;
        cout << "   Kode Pulsa          :   "	<< item     << endl;
		cout << "   Harga               :   Rp "<< harga[i] << endl;


            cout << endl << endl;
            cout << "		Apakan Anda yakin ingin Melanjutkan Transaksi ini? [Y/T]  =  ";
            cin  >> back;
            system ("cls");
            loading2 ();

            if (back=='Y'||back=='y') //control flow
            {
                cout << endl;
                cout << "   PEMBELIAN ANDA BERHASIL             "     << endl     << endl;
                cout << "   Pulsa berhasil dikirim ke no    :   "     << noHp     << endl;
                cout << "   Nominal  Pulsa Senilai          :   Rp  " << harga[i] << endl << endl << endl;
                cout << "	Perlu Transaksi Lain? [Y/T]  =  ";
                cin  >> back;
                system ("cls");
            }
            else
                cout << back;
            back;

    } while (back=='Y'||back=='y');
    system ("cls");
    cout << endl << endl;
    cout << "   -----TERIMAKASIH TELAH MENGUNJUNGI METT CELLULAR-----" << endl;
    cout << endl << endl;
    cout <<     "   Tekan tombol mana saja untuk keluar!   " ;
    cin  >> back;
    system ("cls");
    password();
    goto balik;


    getch ();
    return 0;
}
