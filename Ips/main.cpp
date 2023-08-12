#include <iostream>

using namespace std;

class Grade{
 public:
    int sksMatkul;
    int totalSks;
    float grade;
    int matkul;
    float sum=0;
    float ip;

    void getmatkul(){
        cout<<"Jumlah keseluruhan matkul dalam semester=>";
        cin>>matkul;
        cout<<"get matkul = "<<" "<<matkul<<endl;
    }

    void getSum(){
        int no=1;
        float getAll;
        for(int i=0;i<matkul;i++){
         cout<<no++<<"\n";
         cout<<"input SKS per matkul=> ";
         cin>>sksMatkul;
         cout<<"input bobot nilai permatkul=> ";
         cin>>grade;
         cout<<endl;
         cout<<endl;
         getAll=sksMatkul*grade;
         sum+=getAll;
        }
         
         cout<<"jumlah kumulatif mata kuliah ke-"<<no<<"=>";
         cout<<sum<<"\n";
         cout<<"================================================ \n";
    }

    void getGrade(){
        cout<<"masukan total sks dalam satu semester=>";
        cin>>totalSks;

        ip=sum/totalSks;
        cout<<"IPS/K yang didapat dari perhitungan sebagai beriku=>"<<ip;
    }

    Grade(){
     this->getmatkul();
     this->getSum();
     this->getGrade();
    }
};

int main(){
    Grade ips;
}
