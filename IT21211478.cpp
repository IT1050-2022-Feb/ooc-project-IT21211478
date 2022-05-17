#include <string>
#include <iostream>
using namespace std;
//Tour Class
class Tour{
  private:
    string TourID;
    string TourName;
    double TourPrice;

  public:
    Tour();
    void setDetails(string tID, string tName);
    void setPrice(double tPrice);
    double getPrice();
    ~Tour;
};

Tour::Tour(){
  TourID = 0;
  TourName = "";
  TourPrice = 0.0;
}

void Tour::setDetails(string tID, string tName){
  TourID = tID;
  TourName = tName;
}

void Tour::setPrice(double tPrice){
  TourPrice = tPrice;
}

double Tour::getPrice(){
  return TourPrice;
}

Tour::~Tour(){}

//Package Class

 
class Package{
  private:
    Tour * tours;
    string packageID;
    string packageType;
    int maxSize;
  public:
    package(string packID, string packType, int size);
    void addPackage(string tID, string tName, double tPrice);
    double calcPackTotal();
    ~Package(void); 
};

Package::Package(string packID,string packType, int size){
  packageID = packID;
  packageType = packType;
  maxSize = size;
  tours = new Tour[size];
  count = 0;
}

void Package::addItem(string tID, string tName, double tPrice){
  if(count<maxSize){
    tour[count].setDetails(tID,tName);
    tour[count].setPrice(tPrice);
    count++;
  }
  else{
    cout<<"cannot enter anymore packages"<<endl;
  }
}

double Package::calcPackTotal(){
  double total = 0;
  for(int i+0; i<maxSize; i++){
    total = tours[i].getPrice();
  }
  return total;
}

Package::~Package(){}

//class Administrator
class Administrator{
  private:
    Package * pack;
    string username;
    string password;
    string staffID;
  public:
    Administrator();
    Administrator(string aUsername, string aPassword, string aStaffID);
    void updateTourDetails();
    void updatePackageDetails();
};

Administrator::Administrator(){
  
}

Administrator::Administrator(string aUsername, string aPassword, string aStaffID, Package * pack){
  username = aUsername;
  password = aPassword;
  staffID = aStaffID;
  pack = apack;
}

void Administrator::updateTourDetails(){
  
}
void Administrator::updatePackageDetails(){
  
}
Administrator::~Administrator(){
  
}

//class Manage
class Manage{
  private:
    string tourID;
    string staffID;
    Tour*Tr;
    Administrator*Admin;
  public:
    Manage();
    Manage(string mTourID, string mstaffID, Tour*mtour, Administrator*mAdmin);
    Manage(string mTourID, string mstaffID);
    void cancleRequests();
    void updateTour();
    ~Manage();
};

Manage:: Manage(){
  
}

Manage:: Manage(string mTourID, string mstaffID, Tour*mtour, Administrator*mAdmin){
  TourID = mTourID;
  staffID = mStaffID;
  Tr = mtour;
  admin = mAdmin;
}

void Manage:: cancleRequests(){
  
}

void Manage:: updateTour(){
  
}

Manage:: ~Manage(){
  
}

//main program
int main(){
  
  double totalPackPrice = 0;
  
  Package pk("p13","One-Day",1);
  pk.addItem("t123","wilpattuwa",1200.00);
  totalPackPrice = pk.calcPackTotal();
  cout<<"The price of the package is : "<<totalPackPrice<<endl;
  
  Administrator Administ("Malith", "Ma@3313", "s3313");
  Administ.updateTourDetails();
  Administ.updatePackageDetails();

  Manage mng("t123","s3313");
  mng.cancleRequests()
  mng.updateTour()

  return 0;
}



