#include <iostream>

using namespace std;
int menu;
void judul();
void pemilihan();
void size();
void pengiriman();
void registrasi();
char nama[100],alamat[100],kpos[100], wa[100], provinsi[100], kota[100], kecamatan[100], kelurahan[100], jk;
void menu_utama();
void harga();
void akhir();
void informasi();
void pembayaran();
void lagi ();

main(){
    int tp, jns, waktu, harga, bt, admin, total,byr;
    char ulang;
    string kode;
    string pakaian;
    string jns_pakaian;
   
//getchar();
int i;
char ch;
cout << "===========================================================================================================================\n";
cout << "Selamat Datang \n";
cout << "Informasi \n";
cout << "Store ini hanya ada di alam ghoib yaitu negeri konoha tercinta \n";
cout << "Pemrograman ini telah kami upload di- https://github.com/DragonZeus37 -silahkan meminta izin terlebih dahulu karena private\n";
cout << "===========================================================================================================================\n";
cout << "user: admin \n";
cout << "password: DragonZeus \n";
cout << "===========================================================================================================================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getwch();
            while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';
            ch = _getwch();
            }

       if (user == "admin" && pass == "dragonzeus")
    {
    system("cls");
    judul();					//fungsi judul
	menu_utama();					//fungsi menu utama
    pemilihan();						//fungsi pemilihan
   
    pilihan:
    cout<<"\n\tMasukkan Pilihan : ";cin>>tp;
    if (tp==1)
    {
        pakaian="Set Pakaian SD";
    }
    else if(tp==2)
    {
        pakaian="Set Pakaian SMP";
    }
    else if(tp==3)
    {
        pakaian="Set Pakaian SMA ";
    }
    else if(tp==4)
    {
        pakaian="Set Pakaian Muslim";
    }
    else if(tp==5)
    {
        pakaian="Hoodie";
    }
    else if(tp==6)
    {
        pakaian="Sweater";
    }
    else if(tp==7)
    {
        pakaian="Jacket";
    }
    else if(tp==8)
    {
        pakaian="Kaos";
    }
    else if(tp==9)
    {
        pakaian="Kemeja";
    }
    else if(tp==10)
    {
        pakaian="Celana Jeans";
    }
    else if(tp==11)
    {
        pakaian="Celana Formal";
    }
    else if(tp==12)
    {
        pakaian="Jas";
    }
    else if(tp==13)
    {
        pakaian="Kebaya Traditional";
    }
    else if(tp==14)
    {
        pakaian="Kebaya Modern";
    }
    else if(tp==15)
    {
        pakaian="Rok";
    }
    else if(tp==16)
    {
        pakaian="Gaun";
    }
    else if(tp==17)
    {
        pakaian="Gamis";
    }
    else if(tp==18)
    {
        pakaian="Dress";
    }
    else
    {
        cout<<"\n\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
        if(ulang=='Y' || ulang=='y')
        {
            goto pilihan;
        }
        else
            return 1;
    }
   
    jns:
    system("cls");
    size();
    cout<<"\n\tMasukkan Pilihan : ";cin>>jns;
        if(jns==1)
        {
            cout<<"\n\tBatas Maksimum Pembelian adalah 72\n";
            jns_pakaian="Size S, M, L, XL, XXL";
        }
        else
        {
            cout<<"\n\tSalah memasukkan jenis pakaian";           
            cout<<"\n\t Masukkan Salah, ingin ulangi? (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                {
                    goto jns;
                }
            else
                return 0;   
        }

    invoice:   
    cout<<"\n\tJumlah pakaian yang dibeli maksimum 72"<<endl;       
    cout<<"\n\tJumlah pakaian yang dibeli : "; cin>>bt;
            if(jns==1){
            if (bt>72){
                cout<<"Melebihi jumlah pembelian pakaian";}}
                
            else{
                cout<<"\n\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                    goto invoice;
                else
                return 0;
            }   
               
    char nakur[bt][15];
    int nokur[bt];
        for(int i=1;i<=bt;i++){
            cout<<"\n\tUkuran Pakaian \t: "; cin>>nakur[i];
            cekstok:
            cout<<"\n\tPesanan ke-"<<i<<" \t: "; cin>>nokur[i];
            for(int j=1;j<i;j++){
                if(nokur[i]==nokur[j]){
                    cout<<"\n\t Maaf stok telah habis terjual";
                    goto cekstok;
                }
            }
            cout<<"\n\t----------------------------------------";}
    system("cls");
   
    pengiriman();
    waktu:
    cout<<"\n\tMasukkan Pilihan : ";cin>>waktu;
    system("cls");
   
    if(jns==1){
    if(tp==1  && waktu==1){
        harga=100000;
        kode="AS1-1";}
        else if(tp==1  && waktu==2){
            harga=120000;
            kode="AS1-2";}
        else if(tp==2 && waktu==1){
            harga=100000;
            kode="AS2-1";}
        else if(tp==2 && waktu==2){
            harga=120000;
            kode="AS2-2";}
        else if(tp==3 && waktu==1){
            harga=100000;
            kode="AS3-1";}
        else if(tp==3 && waktu==2){
            harga=120000;
            kode="AS3-2";}
        else if(tp==4 && waktu==1){
            harga=120000;
            kode="AS4-1";}
        else if(tp==4 && waktu==2){
            harga=140000;
            kode="AS4-2";}
        else if(tp==5 && waktu==1){
            harga=150000;
            kode="AS5-1";}
        else if(tp==5 && waktu==2){
            harga=170000;
            kode="AS5-2";}
        else if(tp==6  && waktu==1){
            harga=160000;
            kode="AS6-1";}
        else if(tp==6  && waktu==2){
            harga=180000;
            kode="AS6-2";}
        else if(tp==7 && waktu==1){
            harga=160000;
            kode="AS7-1";}
        else if(tp==7 && waktu==2){
            harga=180000;
            kode="AS7-2";}
        else if(tp==8 && waktu==1){
            harga=80000;
            kode="AS8-1";}
        else if(tp==8 && waktu==2){
            harga=100000;
            kode="AS8-2";}
        else if(tp==9 && waktu==1){
            harga=130000;
            kode="AS9-1";}
        else if(tp==9 && waktu==2){
            harga=150000;
            kode="AS9-2";}
        else if(tp==10 && waktu==1){
            harga=105000;
            kode="AS10-1";}
        else if(tp==10 && waktu==2){
            harga=125000;
            kode="AS10-2";}
        else if(tp==11  && waktu==1){
        	harga=105000;
        	kode="AS11-1";}
        else if(tp==11  && waktu==2){
            harga=125000;
            kode="AS11-2";}
        else if(tp==12 && waktu==1){
            harga=80000;
            kode="AS12-1";}
        else if(tp==12 && waktu==2){
            harga=100000;
            kode="AS12-2";}
        else if(tp==13 && waktu==1){
            harga=430000;
            kode="AS13-1";}
        else if(tp==13 && waktu==2){
            harga=450000;
            kode="AS13-2";}
        else if(tp==14 && waktu==1){
            harga=430000;
            kode="AS14-1";}
        else if(tp==14 && waktu==2){
            harga=450000;
            kode="AS14-2";}
        else if(tp==15 && waktu==1){
            harga=80000;
            kode="AS15-1";}
        else if(tp==15 && waktu==2){
            harga=100000;
            kode="AS15-2";}
        else if(tp==16  && waktu==1){
        	harga=330000;
        	kode="AS16-1";}
        else if(tp==16 && waktu==2){
            harga=350000;
            kode="AS16-2";}
        else if(tp==17 && waktu==1){
            harga=255000;
            kode="AS17-1";}
        else if(tp==17 && waktu==2){
            harga=275000;
            kode="AS17-2";}
        else if(tp==18 && waktu==1){
            harga=200000;
            kode="AS18-1";}
        else if(tp==18 && waktu==2){
            harga=220000;
            kode="AS18-2";}
        }
    else
        {
            cout<<"\n\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
            if(ulang=='Y' || ulang=='y')
            goto waktu;
            else
            return 0;
        }
   
    admin=5000;
    total=bt*harga+admin;
    system("cls");
    registrasi ();                       			//fungsi pengiriman
    judul();
    cout<<"\n\tInvoice Informasi";
    cout<<"\n\t------------------------------------------------";
	cout<<"\n\tNama Pemesan\t  : "<<nama;
	cout<<"\n\tAlamat Lengkap\t  : "<<alamat;
	cout<<"\n\tProvinsi\t  : "<<provinsi;
	cout<<"\n\tKota\t  : "<<kota;
	cout<<"\n\tKecamatan\t  : "<<kecamatan;
	cout<<"\n\tKelurahan\t  : "<<kelurahan;
	cout<<"\n\tNomor WA\t  : "<<wa;
	cout<<"\n\tKode Pos\t  : "<<kpos;
	cout<<"\n\tJenis Pakaian\t  : "<<jns_pakaian;
	cout<<"\n\tKode Pakaian\t  : "<<kode;
	cout<<"\n\tPakaian\t  : "<<pakaian;
	for(int i=1;i<=bt;i++)
{
    cout<<"\n\t Nomor Pesanan ke-"<<i<<"  : "<<nokur[i];
    cout<<"\n\t Ukuran Pakaian  : "<<nakur[i];
}
cout<<"\n\tHarga Pakaian\t  : Rp "<<harga;
cout<<"\n\tJumlah Pakaian\t  : "<<bt;
cout<<"\n\tBiaya Administrasi\t  : Rp "<<admin;
cout<<"\n\tTotal Bayar\t  : Rp "<<total;
cout<<"\n\t------------------------------------------------\n";
system("pause");
system("cls");
pembayaran();
lagi();
return 0;
      } else {
         cout << "\nMaaf Username & Password anda masukan salah.\n";
      }
   }
   while (i <= 3);

   	cout << "***************************************************************************************************************************";
	cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   	cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   	cout << "Silahkan hubungi kami melalui- dragonzeus37@gmail.com -Terima Kasih";
	cout << "***************************************************************************************************************************";
	cout << "Pemrograman ini telah kami upload di- https://github.com/DragonZeus37 -silahkan meminta izin terlebih dahulu karena private";
	cout << "***************************************************************************************************************************";
}

void judul()
{
cout<<"\n\t __________________________________________________________";
cout<<"\n\t |Marketplace PAKAIAN SERBA ADA 'Dragon Zeus'             |";
cout<<"\n\t |Kebonjati Street No. 88 Kav E7-E8, telp. 07734111543280 |";
cout<<"\n\t |40181, Bdg, West Java, Konoha                           |";
cout<<"\n\t |--------------------------------------------------------|";
}

void registrasi()
{
    string mail,nakur,nana;
    int nokur;
    cin.ignore();
cout<<"\n\t Form Registrasi Calon Pembeli";
cout<<"\n\t Diharapkan Mengecek Harga Pakaian Sebelum Check Out";
cout<<"\n\t ------------------------------------------------";
cout<<"\n\t Nama Pemesan\t: "; gets(nama);
cout<<"\n\t Alamat Lengkap\t: "; gets(alamat);
cout<<"\n\t Kode Pos\t: "; gets(kpos);
cout<<"\n\t Provinsi\t: "; gets(provinsi);
cout<<"\n\t kota\t: "; gets(kota);
cout<<"\n\t kecamatan\t: "; gets(kecamatan);
cout<<"\n\t kelurahan\t: "; gets (kelurahan);

jenkel:
cout<<"\n\tJenis Kelamin(L/P)\t: "; cin>>jk;
if(jk == 76 or jk ==80 or jk == 108 or jk ==112)
goto lanjut;
else
goto jenkel;
lanjut:
cout<<"\n\tNo. Whatsapp\t: "; cin>>wa;
cout<<"\n\tGmail\t: "; cin>>mail;
cout<<"\n\t------------------------------------------------";

system("cls");
}

void pemilihan()
{
cout<<"\n\tSilahkan memilih pakaian yang anda inginkan";
cout<<"\n\t------------------------------------------------";
cout<<"\n\tNo. |  Pakaian	   	     |   Harga [R-E]       |";
cout<<"\n\t------------------------------------------------";
cout<<"\n\t1.  |  Set Pakaian SD     |   100.000-120.000   |";
cout<<"\n\t2.  |  Set Pakaian SMP    |   100.000-120.000   |";
cout<<"\n\t3.  |  Set Pakaian SMA    |   100.000-120.000   |";
cout<<"\n\t4.  |  Set Pakaian Muslim |   140.000-160.000   |";
cout<<"\n\t5.  |  Hoodie             |   150.000-170.000   |";
cout<<"\n\t6.  |  Sweater            |   160.000-180.000   |";
cout<<"\n\t7.  |  Jacket             |   160.000-180.000   |";
cout<<"\n\t8.  |  Kaos               |   80.000-100.000    |";
cout<<"\n\t9.  |  Kemeja             |   130.000-150.000   |";
cout<<"\n\t10. |  Celana Jeans       |   105.000-125.000   |";
cout<<"\n\t11. |  Celana Formal      |   80.000-100.000    |";
cout<<"\n\t12. |  Jas                |   430.000-450.000   |";
cout<<"\n\t13. |  Kebaya Traditional |   430.000-450.000   |";
cout<<"\n\t14. |  Kebaya Modern      |   480.000-500.000   |";
cout<<"\n\t15. |  Rok                |   80.000-100.000    |";
cout<<"\n\t16. |  Gaun               |   330.000-350.000   |";
cout<<"\n\t17. |  Gamis              |   255.000-275.000   |";
cout<<"\n\t18. |  Dress              |   180.000-200.000   |";
cout<<"\n\t------------------------------------------------";
}

void size()
{
cout<<"\n\tSilahkan PiliH size pakaian yang anda inginkan";
cout<<"\n\t------------------------------------------------";
cout<<"\n\tNo.    |Kode Pakaian  |     Ukuran Pakaian    |";
cout<<"\n\t------------------------------------------------";
cout<<"\n\t1.     |  ALL SIZE    |    Size S,M,L,XL,XXL  |";
cout<<"\n\t-----------------------------------------------";
}

void pengiriman()
{   
cout<<"\n\tSilahkan Pilih jenis pengiriman yang anda inginkan";
cout<<"\n\t------------------------------------------------";
cout<<"\n\tNo    | Waktu Pemesanan    | ";
cout<<"\n\t------------------------------------------------";
cout<<"\n\t1.    |      Reguler       | ";
cout<<"\n\t2.    |      Express       |";
cout<<"\n\t------------------------------------------------";
}

void pembayaran()
{
    int byr;
    char lunas;
    cout << " --------------------------------------------------"<<endl;
    cout << " >>    SILAHKAN PILIH MENU MRTODE PEMBAYARAN     <<"<<endl;
    cout << " --------------------------------------------------"<<endl;
    cout << endl;
    cout << "  1.Pembayaran QRIS                     "<<endl;
    cout << "  2.Tranfer Bank                        "<<endl;
    cout << endl;
    cout << " ---------------------------------------"<<endl;
    cout << endl;
    cout << " Pilih : "; cin >> byr;
    cout <<endl;
    if(byr==1){
        cout << " __________________________________________________________________________"<<endl;
        cout << endl;
        cout << "                      CARA PEMBAYARAN QRIS                                 "<<endl;
        cout << " __________________________________________________________________________"<<endl;
        cout << endl;
        cout << " 1. pertama-tama siapkan M-Banking atau dana atau aplikasi QRIS lainnya 	"<<endl;
        cout << "    lakukan pembayaran secara langsung dengan penjual / selles				"<<endl;
        cout << endl;
        cout << " 2. Scan QR yang telah ada                                              	"<<endl;
        cout << endl;
        cout << " 3. Setelah pembayaran sukses, di mohon untuk mengonfirmasikan PEMBAYARAN	"<<endl;
        cout << "    dengan mengirim buktinya ke-WA kami 08xxxxxxxxxx  		             	"<<endl;
        cout << endl;
        atas:
        cout<<"\n\tApakah Anda sudah melunasi tagihan tersebut untuk di proses (Y/N) : "; cin>>lunas;
        if (lunas=='y'||lunas=='Y')
        	cout<<"\tTerima kasih pembelian Anda akan segera kami proses secepatnya"<<endl;
        else if (lunas=='n'||lunas=='N'){
        	cout<<"\tPesanan tidak akan kami proses sebelum lunas"<<endl;
        	goto atas;
        }else{
        	cout<<"\tInputan Anda tidak valid"<<endl;
        	goto atas;
  	  }
	}	
    else if (byr==2){
        cout << " __________________________________________________________________________"<<endl;
        cout << endl;
        cout << "                    CARA PEMBAYARAN TRANSFER BANK                          "<<endl;
        cout << " __________________________________________________________________________"<<endl;
        cout << endl;
        cout << " 1. ( BRI ) : - Silahkan pilih Transfer -  "<<endl;
        cout << "              - Masukkan nomor Virtual Account 126 08546xxxxx dan pilih send"<<endl;
        cout << "              - Pilih menu 'Lanjutkan' "<<endl;
        cout << "              - Ikuti cara pembayaran yang tersedia "<<endl;
        cout << " 2. ( BCA ) : - Silahkan pilih Metode pembayaran Virtual Account "<<endl;
        cout << "              - Masukkan nomor Virtual Account 126 08238xxxxx dan pilih send"<<endl;
        cout << "              - Pilih menu 'Lanjutkan' "<<endl;
        cout << "              - Ikuti cara pembayaran yang tersedia "<<endl;
        cout << " 3. ( BNI ) : - Silahkan pilih Metode pembayaran Virtual Account "<<endl;
        cout << "              - Masukkan nomor Virtual Account 126 08578xxxxx dan pilih send"<<endl;
        cout << "              - Pilih menu 'Lanjutkan' "<<endl;
        cout << "              - Ikuti cara pembayaran yang tersedia "<<endl;
        cout << endl;
        cout << " Setelah pembayaran sukses, di mohon untuk mengonfirmasikan PEMBAYARAN dan mengirim bukti tfansfer ke WA kami 089647089642 "<<endl;
        cout << endl;
        cout<<"\n\tApakah Anda sudah melunasi tagihan tersebut untuk di proses (Y/N) : "; cin>>lunas;
        if (lunas=='y'||lunas=='Y')
        	cout<<"\tTerima kasih pembelian Anda akan segera kami proses secepatnya"<<endl;
        else if (lunas=='n'||lunas=='N'){
        	cout<<"\tPesanan tidak akan kami proses sebelum lunas"<<endl;
        	goto atas;
        }else{
        	cout<<"\tInputan Anda tidak valid"<<endl;
        	goto atas;
		}
    }

}

void lagi ()
{
    cout<<"\n\tApakah masih ada barang yang ingin dibeli ? [Y/T]:"<<endl;
}

void menu_utama()
{
   
    cout<<"\n\t 1. Informasi Marketplace DragonZeus";
	cout<<"\n\t 2. Informasi Harga Pakaian";
    cout<<"\n\t 3. Pemesanan Pakaian";
    cout<<"\n\t 4. Keluar ";
    cout<<"\n\t Masukkan Pilihan : ";
    cin>>menu;

	if(menu==1)
	{
		system("cls");
		informasi();
		judul();
	}
    else if(menu==2)
    {
        system("cls");
        judul();
        harga();
    }
    else if(menu==3)
    {
        system("cls");
        judul();
    }
    else if(menu==4)
    {
        system("cls");
        akhir();
    }
    else
    {
        cout<<"\n\tInputan Salah, silahkan kembali ke menu !";
        cin.ignore();
        system("cls");
        menu_utama();
    }
           
}

void informasi()
{
	char b;
	cout<<"\n\t Sekedar Informasi Bahwa ";
	cout<<"\n\t -Toko kami hanya melayani pembayaran pas tanpa dp, kekurangan, maupun kelebihan pembayaran ";
	cout<<"\n\t --Jangan mencari keberadaan toko kami secara offline karena ini hanya ada di negeri konoha ";
	cout<<"\n\t ---System Marketplace ini sama seperti tokepidia, shopee, dll. ";
	cout<<"\n\t ---yang dimana pembayaran transfer, qris, dll pembayaran pas tidak lebih tidak kurang ";
	cout<<"\n\t ___________________________________________________________________________________________";
	cout<<"\n\t kembali ke menu (Y/N) : ";
    cin>>b;
    if(b=='y' || b=='Y')
    {
        system("cls");   
        judul();
	    menu_utama();
    }
    else
    {
        system("cls");
        akhir();
    }
   
}

void harga()
{
    char a;
    cout<<"\n\t 1. Size S,M,L,XL,XXL, Custom";
    cout<<"\n\t    - Reguler : ";
    cout<<"\n\t        - Set Pakaian SD      : Rp 100.000";
    cout<<"\n\t        - Set Pakaian SMP     : Rp 100.000";
    cout<<"\n\t        - Set Pakaian SMA	 : Rp 100.000";
    cout<<"\n\t        - Set Pakaian Muslim  : Rp 120.000";
    cout<<"\n\t        - Hoodie  			 : Rp 150.000";
    cout<<"\n\t        - Sweater             : Rp 160.000";
    cout<<"\n\t        - Jacket              : Rp 160.000";
    cout<<"\n\t        - Kaos                : Rp 80.000";
    cout<<"\n\t        - Kemeja              : Rp 130.000";
    cout<<"\n\t        - celana Jeans        : Rp 105.000";
	cout<<"\n\t        - Celana Formal       : Rp 80.000";
	cout<<"\n\t        - Jas                 : Rp 430.000";
    cout<<"\n\t        - Kebaya Traditional  : Rp 430.000";
    cout<<"\n\t        - Kebaya Modern       : Rp 480.000";
    cout<<"\n\t        - Rok                 : Rp 80.000";
    cout<<"\n\t        - Gaun                : Rp 330.000";
    cout<<"\n\t        - Gamis               : Rp 255.000";
    cout<<"\n\t        - Dress               : Rp 200.000";

    cout<<"\n\t    - Express : ";
    cout<<"\n\t        - Set Pakaian SD      : Rp 120.000";
    cout<<"\n\t        - Set Pakaian SMP     : Rp 120.000";
    cout<<"\n\t        - Set Pakaian SMA	 : Rp 120.000";
    cout<<"\n\t        - Set Pakaian Muslim  : Rp 140.000";
    cout<<"\n\t        - Hoodie  			 : Rp 170.000";
    cout<<"\n\t        - Sweater             : Rp 180.000";
    cout<<"\n\t        - Jacket              : Rp 180.000";
    cout<<"\n\t        - Kaos                : Rp 100.000";
    cout<<"\n\t        - Kemeja              : Rp 150.000";
    cout<<"\n\t        - celana Jeans        : Rp 125.000";
	cout<<"\n\t        - Celana Formal       : Rp 100.000";
	cout<<"\n\t        - Jas                 : Rp 450.000";
    cout<<"\n\t        - Kebaya Traditional  : Rp 450.000";
    cout<<"\n\t        - Kebaya Modern       : Rp 500.000";
    cout<<"\n\t        - Rok                 : Rp 100.000";
    cout<<"\n\t        - Gaun                : Rp 350.000";
    cout<<"\n\t        - Gamis               : Rp 275.000";
    cout<<"\n\t        - Dress               : Rp 220.000";
	    
    cout<<"\n\t kembali ke menu (Y/N) : ";
    cin>>a;
    if(a=='y' || a=='Y')
    {
        system("cls");   
        judul();
	    menu_utama();
    }
    else
    {
        system("cls");
        akhir();
    }
   
}

void akhir()
{
    system("pause");   
    exit(0);
}