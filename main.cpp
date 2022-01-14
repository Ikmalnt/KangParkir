#include <iostream>
#include <windows.h>

using namespace std;

void bubbleSort(string plat[], int n) {
    bool sorted = false;
    while(!sorted) {
        sorted = true;
        for(int i = 0; i < n-1; i++) {
            if(plat[i] > plat[i+1]) {
                swap(plat[i], plat[i+1]);
                sorted = false;
            }
        }
    }
}

int sequentialSearch(string plat[], int n, string x) {
    for(int i = 0; i < n; i++) {
        if(plat[i] == x)
            return i;
    }
    return -1;
}


int main()
{
    int pil, index,totalpenghasilan = 0;
    string kendaraan;
    string tuker;
    string platnomor[20] = { "R12Q", "R132S", "R123S","A11C","B12Q","W123D","S123F","A123S","T111L","L321K",
                              "Z123K","M890H","H908F","O999L","X111L","I222L","H889L","P987K","J111L","I155L"};
    string exit;
    while (true){
        cout << "``````````PROGRAM KANG PARKIR``````````" << endl;
        cout << "1. Masuk Kendaraan"<< endl;
        cout << "2. Keluar Kendaraan"<< endl;
        cout << "3. Cari Kendaraan"<< endl;
        cout << "4. Urut Kendaraan"<< endl;
        cout << "5. Total Penghasilan"<< endl;
        cout << "6. Tampil Kendaraan"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Masukkan Pilihan [1-7]: ";
        cin >> pil;
        switch(pil){
            case 1: cout << "Masukkan Plat nomor : ";
                    cin >> kendaraan;
                    for (int x = 0; x < 20; x++){
                        if (platnomor[x] == ""){
                            platnomor[x] = kendaraan;
                            break;
                        }
                    }
                    system("PAUSE");
                    system("cls");
                    break;
            case 2: cout << "Masukkan Plat nomor : ";
                    cin >> kendaraan;
                    cout << kendaraan << " Telah Keluar" <<endl;
                    cout << "***MaturNuwun***" << endl;
                    for (int x = 0; x < 20; x++){
                        if (platnomor[x] == kendaraan){
                            platnomor[x] = "";
                            totalpenghasilan= totalpenghasilan + 2000;
                        }
                    }
                    system("PAUSE");
                    system("cls");
                    break;

            case 3: cout << "Masukkan Plat nomor yang ingin dicari : ";
                    cin >> kendaraan;
                    index = sequentialSearch(platnomor, 20, kendaraan);
                    if (index == -1)
                        cout << "kendaraan tidak ditemukan" << endl;
                    else
                        cout << "kendaraan " << kendaraan << " ditemukan di urutan ke - " << index+1 << endl;
                    system("PAUSE");
                    system("cls");
                    break;
            case 4: cout << "Urut kendaraan sesuai plat nomor" <<endl;
                    bubbleSort(platnomor, 20);
                    for(int i = 0; i < 20; i++) {
                        if (platnomor[i] != "") {
                        cout << platnomor[i] << endl;
                        }
                    }
                    system("PAUSE");
                    system("cls");
                    break;
            case 5: cout << "Total penghasilan : " << totalpenghasilan <<endl;
                    system("PAUSE");
                    system("cls");
                    break;
            case 6: cout <<"urutan Kendaraan" <<endl;
                    for (int x = 0; x < 20; x++){
                        cout << platnomor[x] << endl;
                    }
                    system("PAUSE");
                    system("cls");
                    break;
            case 7: cout << "apakah anda yakin ingin keluar"<<endl;
                    cout << "Y / T"<<endl;
                    cin >> exit;
                        if (exit == "Y" || exit == "y"){
                            return 0;
                        } else if ( exit == "T" || exit == "t"){
                            break;
                        } else {
                        return 0;
                        }

            return 0;
            default:
            break;
        }
    }
}
