#include <iostream>
using namespace std;

float rata_rata(float a, float b){
  return (a+b)/2;
}
string status_lulus(float r){
  if (r >= 60)
    return "lolos";
  else
    return "gagal";
}

int main(){
  float nilBI,nilMT,rerata;
  string status;

  cout << "masukan nilai bahasa inggris = ";
  cin >> nilBI;
  cout << "Masukan nilai Matematika = ";
  cin >> nilMT;

  rerata = rata_rata(nilBI,nilMT);

  cout << "status kelulusan = "<< status_lulus(rerata)<<",dengan nilai rata-rata = "<<rerata<<endl;

}