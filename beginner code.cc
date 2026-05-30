#include <iostream>
#include <iomanip>

using namespace std;

void getEmployeeInfo(long[], int[], double[], double[], int);

void displayWages(long[], double[], int);

	int main() {
    
      const int NumEmployees = 7;
    
    long empId[NumEmployees] = {5658845, 4520125, 7895122, 8777541, 
                                 8451277, 1302850, 7580489};
    
    int hours[NumEmployees];
    
      double payRate[NumEmployees];
    
      double wages[NumEmployees];

    getEmployeeInfo (empId, hours, payRate, wages, NumEmployees);
  
    displayWages (empId, wages, NumEmployees);

    return 0;
}


void getEmployeeInfo (long id[], int hrs[], double rate[], double wgs[], int size) {
    
  for (int i = 0; i < size; i++) {
cout << "Enter the data for employee #" << id[i] << ":" << endl;
        
     cout << "  Hours worked: ";
       cin >> hrs [i];
        while (hrs [i] < 0) {
            cout << "  Error: Negative numbers are not accepted. Please try again: ";
        cin >> hrs [i];
        }

      cout << "  Hourly pay rate: ";
        cin >> rate [i];
        while (rate [i] < 6.00) {
            cout << "  Error: Pay rate must be at least $6.00. Please try again: ";
            cin >> rate [i];
        }

       wgs[i] = hrs[i] * rate[i];
        cout << endl;
    }
}

void displayWages (long id[], double wgs[], int size) {
  
    cout << "\n---------------------------------------" << endl;
    cout << "EMPLOYEE ID          GROSS WAGES" << endl;
    cout << "---------------------------------------" << endl;
    
  
  cout << fixed << setprecision(2); 
    
   for (int i = 0; i < size; i++) {
        cout << id[i] << "              $ " << setw(8) << wgs[i] << endl;
    }
    	cout << "---------------------------------------" << endl;
}

