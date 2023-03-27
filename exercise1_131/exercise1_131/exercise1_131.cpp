#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status1(double rata) {
    if (rata >= 70)
        return "diterima";
    else
        return "ditolak";
}

string status2(double rata, double nilM) {
    if (rata >= 70 || nilM >= 80)
        return "diterima";
    else
        return "ditolak";
}

int main()
{
    float nama[20];
    float nama;
    int masukanNilai; 
    bool status;
 
    {
        double nilB, nilM, rata;
        string status;
        cout << "masukan nilai bahasa inggris =";
        cin >> nilB;
        cout << "masukan nilai matematika =";
        cin >> nilM;
        cout << "status kelulusan =" << "status kelulusan =" << status1(rerata(nilB, nilM));
        cout << "\nstatus kelulusan ke 2 =" << "status kelulusa =" << status2(rerata(nilB, nilM), nilM);
        return 0;
    }

}
    
