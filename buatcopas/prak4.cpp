#include <iostream>                       //library
using namespace std;

float berat, tinggi;                      //variabel global

void inputData(){                         //prosedur untuk input data 
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter) : ";
    cin >> tinggi;

}

float hitungBMI(){                      //fungsi untuk menghitung BMI 
    return berat / (tinggi * tinggi);   //rumus BMI
}

string statusBMI(float bmi) {           //fungsi untuk melihat kondisi berat badan
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    }
    else if (bmi < 25) {
        return "Berat Badan Normal";
    }
    else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    }
    else {
        return "Obesitas";
    }
}
    
int main() {         
    inputData();                            //memanggil prosedur untuk input data
    float bmi = hitungBMI();                //memanggil fungsi untuk menghitung BMI
    cout << "\n--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << statusBMI(bmi) << endl;
    return 0;
} //selesai