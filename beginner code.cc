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
